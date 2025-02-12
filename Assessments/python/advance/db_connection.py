# db_connection.py

import mysql.connector

def create_connection():
    """Establish a connection to the MySQL database"""
    try:
        connection = mysql.connector.connect(
            host="localhost",
            user="root",  # Replace with your MySQL username
            password="india@11",  # Replace with your MySQL password
            database="hotel_management"  # Name of the database
        )
        if connection.is_connected():
            print("Connected to the database")
        return connection
    except mysql.connector.Error as err:
        print(f"Error: {err}")
        return None
