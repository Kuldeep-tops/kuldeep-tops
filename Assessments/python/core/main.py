# main.py

from fruit_manager import FruitManager
from customer import Customer


def show_menu():
    """ Display the main menu to the user """
    print("\nFruit Store Menu:")
    print("1. View Inventory")
    print("2. Add Fruit to Inventory")
    print("3. Update Fruit Stock")
    print("4. Generate Bill")
    print("5. View Transactions")
    print("6. Exit")


def input_fruit_details():
    """ Input fruit details from the user """
    name = input("Enter fruit name: ").capitalize()
    try:
        price = float(input("Enter fruit price per unit: Rs"))
        quantity = int(input("Enter fruit quantity: "))
        return name, price, quantity
    except ValueError:
        print("Invalid input. Please enter a valid price and quantity.")
        return None


def main():
    """ Main function to run the Fruit Store Console Application """
    # Create instances of FruitManager and Customer
    fruit_manager = FruitManager()
    customer_name = input("Enter your name: ")
    customer = Customer(customer_name)

    while True:
        show_menu()
        choice = input("Enter your choice: ")

        if choice == '1':
            fruit_manager.view_inventory()

        elif choice == '2':
            fruit_details = input_fruit_details()
            if fruit_details:
                fruit_manager.add_fruit(*fruit_details)

        elif choice == '3':
            fruit_name = input("Enter the fruit name to update: ").capitalize()
            try:
                quantity = int(input(f"Enter quantity of {fruit_name} to update: "))
                total_price = fruit_manager.update_fruit_stock(fruit_name, quantity)
                if total_price is not None:
                    print(f"Stock updated! Total amount: Rs{total_price:.2f}")
            except ValueError:
                print("Invalid quantity entered. Please enter a valid number.")

        elif choice == '4':
            while True:
                fruit_name = input("Enter fruit name to add to cart (or type 'done' to finish): ").capitalize()
                if fruit_name == 'Done':
                    break
                if fruit_name in fruit_manager.inventory:
                    try:
                        quantity = int(input(f"Enter quantity for {fruit_name}: "))
                        customer.add_to_cart(fruit_name, quantity)
                    except ValueError:
                        print("Invalid quantity entered. Please enter a valid number.")
                else:
                    print("Fruit not found in inventory. Please try again.")

            customer.view_cart()
            total_amount = 0
            cart = customer.get_cart()

            # Calculate total amount for the customer
            for fruit, quantity in cart.items():
                amount = fruit_manager.update_fruit_stock(fruit, quantity)
                if amount is not None:
                    total_amount += amount

            if total_amount > 0:
                print(f"Total bill: Rs{total_amount:.2f}")
                fruit_manager.log_transaction(customer_name, cart, total_amount)
                customer.clear_cart()
                print("Thank you for your purchase!")
            else:
                print("No valid items in the cart.")

        elif choice == '5':
            print("\nTransaction Log:")
            for transaction_id, details in fruit_manager.transaction_log.items():
                print(f"Transaction {transaction_id}: {details}")

        elif choice == '6':
            print("Thank you for visiting the Fruit Store!")
            break

        else:
            print("Invalid choice. Please try again.")


if __name__ == "__main__":
    main()
