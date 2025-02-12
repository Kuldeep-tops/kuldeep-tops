# customer.py

class Customer:
    """ This class handles customer-related actions such as placing orders and viewing their cart """

    def __init__(self, name):
        """ Initialize the customer with a name and an empty cart """
        self.name = name
        self.cart = {}

    def add_to_cart(self, fruit, quantity):
        """ Add fruit to the customer's cart """
        self.cart[fruit] = quantity

    def view_cart(self):
        """ View the customer's cart """
        if not self.cart:
            print("Your cart is empty.")
        else:
            print("\nYour Cart:")
            for fruit, quantity in self.cart.items():
                print(f"{fruit}: {quantity} pieces")

    def clear_cart(self):
        """ Clear the customer's cart after checkout """
        self.cart.clear()

    def get_cart(self):
        """ Return the customer's cart """
        return self.cart
