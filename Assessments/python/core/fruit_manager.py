# fruit_manager.py

import json


class FruitManager:
    """ This class handles fruit inventory management, including adding, updating, and viewing inventory """

    def __init__(self):
        """ Initialize FruitManager with an empty inventory and transaction log """
        self.inventory = {}
        self.transaction_log = {}
        self.load_inventory()

    def save_inventory(self):
        """ Save the current inventory to a JSON file """
        try:
            with open('inventory.json', 'w') as file:
                json.dump(self.inventory, file, indent=4)
        except Exception as e:
            print(f"Error saving inventory: {e}")

    def load_inventory(self):
        """ Load the inventory from the JSON file """
        try:
            with open('inventory.json', 'r') as file:
                self.inventory = json.load(file)
        except FileNotFoundError:
            print("No existing inventory file found, starting fresh.")
        except Exception as e:
            print(f"Error loading inventory: {e}")

    def add_fruit(self, fruit_name, price, quantity):
        """ Add or update fruit in the inventory """
        if fruit_name in self.inventory:
            self.inventory[fruit_name]['quantity'] += quantity
        else:
            self.inventory[fruit_name] = {'price': price, 'quantity': quantity}
        print(f"{fruit_name} added/updated successfully.")
        self.save_inventory()

    def update_fruit_stock(self, fruit_name, quantity):
        """ Update the stock of a fruit """
        if fruit_name in self.inventory and self.inventory[fruit_name]['quantity'] >= quantity:
            self.inventory[fruit_name]['quantity'] -= quantity
            return self.inventory[fruit_name]['price'] * quantity
        else:
            print(f"Insufficient stock of {fruit_name}.")
            return None

    def view_inventory(self):
        """ View the available fruits in the inventory """
        if not self.inventory:
            print("Inventory is empty.")
        else:
            print("\nAvailable Fruits in Inventory:")
            for fruit, details in self.inventory.items():
                print(f"{fruit}: Rs{details['price']} each, {details['quantity']} in stock")

    def log_transaction(self, customer_name, cart, total_amount):
        """ Log a customer transaction """
        transaction_id = len(self.transaction_log) + 1
        self.transaction_log[transaction_id] = {
            'customer_name': customer_name,
            'cart': cart,
            'total_amount': total_amount
        }
        self.save_transaction_log()

    def save_transaction_log(self):
        """ Save the transaction log to a file """
        try:
            with open('transaction_log.json', 'w') as file:
                json.dump(self.transaction_log, file, indent=4)
        except Exception as e:
            print(f"Error saving transaction log: {e}")
