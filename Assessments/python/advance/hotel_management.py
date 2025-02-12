# hotel_management.py

import tkinter as tk
from tkinter import messagebox
from db_connection import create_connection
import mysql.connector
class Guest:
    """Class representing a guest"""
    
    def __init__(self, name, room_no, check_in_date, balance):
        self.name = name
        self.room_no = room_no
        self.check_in_date = check_in_date
        self.__balance = balance  # Private balance

    def get_balance(self):
        """Accessor method for balance"""
        return self.__balance
    
    def set_balance(self, amount):
        """Mutator method to set balance"""
        if amount >= 0:
            self.__balance = amount
        else:
            raise ValueError("Balance cannot be negative")

class HotelManagementApp:
    """Hotel Management Application with tkinter GUI"""
    
    def __init__(self, root):
        """Initialize the application"""
        self.root = root
        self.root.title("Hotel Management System")
        self.root.geometry("500x400")
        
        self.connection = create_connection()
        self.cursor = self.connection.cursor()
        
        self.create_widgets()
        
    def create_widgets(self):
        """Create widgets for GUI"""
        self.title_label = tk.Label(self.root, text="Hotel Management System", font=("Arial", 20))
        self.title_label.pack(pady=10)

        # Menu Frame
        self.menu_frame = tk.Frame(self.root)
        self.menu_frame.pack(pady=20)

        self.check_in_button = tk.Button(self.menu_frame, text="Check In", width=20, command=self.check_in)
        self.check_in_button.grid(row=0, column=0, padx=10)

        self.check_out_button = tk.Button(self.menu_frame, text="Check Out", width=20, command=self.check_out)
        self.check_out_button.grid(row=0, column=1, padx=10)

        self.total_guests_button = tk.Button(self.menu_frame, text="Total Guests", width=20, command=self.show_total_guests)
        self.total_guests_button.grid(row=1, column=0, padx=10)

        self.generate_receipt_button = tk.Button(self.menu_frame, text="Generate Receipt", width=20, command=self.generate_receipt)
        self.generate_receipt_button.grid(row=1, column=1, padx=10)

        self.exit_button = tk.Button(self.menu_frame, text="Exit", width=20, command=self.root.quit)
        self.exit_button.grid(row=2, column=0, columnspan=2, pady=20)

    def check_in(self):
        """Check in a new guest"""
        self.check_in_window = tk.Toplevel(self.root)
        self.check_in_window.title("Check In")

        self.name_label = tk.Label(self.check_in_window, text="Name:")
        self.name_label.pack(pady=5)
        self.name_entry = tk.Entry(self.check_in_window)
        self.name_entry.pack(pady=5)

        self.room_no_label = tk.Label(self.check_in_window, text="Room No:")
        self.room_no_label.pack(pady=5)
        self.room_no_entry = tk.Entry(self.check_in_window)
        self.room_no_entry.pack(pady=5)

        self.check_in_date_label = tk.Label(self.check_in_window, text="Check-In Date (YYYY-MM-DD):")
        self.check_in_date_label.pack(pady=5)
        self.check_in_date_entry = tk.Entry(self.check_in_window)
        self.check_in_date_entry.pack(pady=5)

        self.balance_label = tk.Label(self.check_in_window, text="Initial Balance ($):")
        self.balance_label.pack(pady=5)
        self.balance_entry = tk.Entry(self.check_in_window)
        self.balance_entry.pack(pady=5)

        self.check_in_button = tk.Button(self.check_in_window, text="Submit", command=self.submit_check_in)
        self.check_in_button.pack(pady=20)

    def submit_check_in(self):
        """Submit guest check-in details to the database"""
        name = self.name_entry.get()
        room_no = self.room_no_entry.get()
        check_in_date = self.check_in_date_entry.get()
        balance = self.balance_entry.get()

        if not name or not room_no or not check_in_date or not balance:
            messagebox.showerror("Input Error", "All fields are required!")
            return

        try:
            balance = float(balance)
            guest = Guest(name, room_no, check_in_date, balance)
            
            # Insert into database
            query = "INSERT INTO guests (name, room_no, check_in_date, balance) VALUES (%s, %s, %s, %s)"
            self.cursor.execute(query, (guest.name, guest.room_no, guest.check_in_date, guest.get_balance()))
            self.connection.commit()

            messagebox.showinfo("Check-In Success", f"Guest {name} checked in successfully!")
            self.check_in_window.destroy()
        except ValueError:
            messagebox.showerror("Input Error", "Balance must be a valid number!")

    def check_out(self):
        """Check out a guest"""
        self.check_out_window = tk.Toplevel(self.root)
        self.check_out_window.title("Check Out")

        self.room_no_label = tk.Label(self.check_out_window, text="Enter Room No to Check-Out:")
        self.room_no_label.pack(pady=5)
        self.room_no_entry = tk.Entry(self.check_out_window)
        self.room_no_entry.pack(pady=5)

        self.check_out_button = tk.Button(self.check_out_window, text="Submit", command=self.submit_check_out)
        self.check_out_button.pack(pady=20)

    def submit_check_out(self):
        """Submit guest checkout and remove from the database"""
        room_no = self.room_no_entry.get()

        if not room_no:
            messagebox.showerror("Input Error", "Room number is required!")
            return

        query = "DELETE FROM guests WHERE room_no = %s"
        self.cursor.execute(query, (room_no,))
        self.connection.commit()

        messagebox.showinfo("Check-Out Success", f"Guest with Room No {room_no} checked out successfully!")
        self.check_out_window.destroy()

    def show_total_guests(self):
        """Show the total number of guests"""
        query = "SELECT COUNT(*) FROM guests"
        self.cursor.execute(query)
        total_guests = self.cursor.fetchone()[0]
        messagebox.showinfo("Total Guests", f"Total guests in the hotel: {total_guests}")

    def generate_receipt(self):
        """Generate receipt for a specific guest"""
        self.generate_receipt_window = tk.Toplevel(self.root)
        self.generate_receipt_window.title("Generate Receipt")

        self.room_no_label = tk.Label(self.generate_receipt_window, text="Enter Room No for Receipt:")
        self.room_no_label.pack(pady=5)
        self.room_no_entry = tk.Entry(self.generate_receipt_window)
        self.room_no_entry.pack(pady=5)

        self.generate_button = tk.Button(self.generate_receipt_window, text="Generate Receipt", command=self.submit_generate_receipt)
        self.generate_button.pack(pady=20)

    def submit_generate_receipt(self):
        """Submit the guest's room number and display the receipt"""
        room_no = self.room_no_entry.get()

        if not room_no:
            messagebox.showerror("Input Error", "Room number is required!")
            return

        query = "SELECT * FROM guests WHERE room_no = %s"
        self.cursor.execute(query, (room_no,))
        guest = self.cursor.fetchone()

        if guest:
            name, room_no, check_in_date, balance = guest
            receipt = f"Receipt for {name}\nRoom No: {room_no}\nCheck-in Date: {check_in_date}\nBalance: ${balance}"
            messagebox.showinfo("Receipt", receipt)
        else:
            messagebox.showerror("Error", "Guest not found!")

if __name__ == "__main__":
    root = tk.Tk()
    app = HotelManagementApp(root)
    root.mainloop()
