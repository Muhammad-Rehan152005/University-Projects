import csv

# Function to load the library data from the CSV file
# Function to remove NUL characters from a string
def remove_nul_characters(text):
    return text.replace('\x00', '')

# Function to load the library data from the CSV file
def load_library():
    library = []
    with open("/content/library.csv.xlsx", "r", encoding="ISO-8859-1") as file:
        csv_reader = csv.DictReader((remove_nul_characters(line) for line in file))
        for row in csv_reader:
            library.append(row)
    return library

# Function to save the library data to the CSV file
def save_library(library):
    with open("/content/library.csv.xlsx", "w", newline="") as file:
        fieldnames = ["Title", "Author", "ISBN", "Available"]
        csv_writer = csv.DictWriter(file, fieldnames=fieldnames)
        csv_writer.writeheader()
        csv_writer.writerows(library)

# Function to display the list of books in the library
def display_library(library):
    for book in library:
        print(f"Title: {book['Title']}, Author: {book['Author']}, ISBN: {book['ISBN']}, Available: {book['Available']}")

# Function to add a book to the library
def add_book(library):
    title = input("Enter book title: ")
    author = input("Enter author: ")
    isbn = input("Enter ISBN: ")
    available = "Yes"  # Default availability
    library.append({"Title": title, "Author": author, "ISBN": isbn, "Available": available})
    save_library(library)
    print(f"{title} by {author} has been added to the library.")

# Function to remove a book from the library
def remove_book(library, title):
    for book in library:
        if book["Title"] == title:
            library.remove(book)
            save_library(library)
            print(f"{title} has been removed from the library.")
            return
    print(f"{title} not found in the library.")

# Main function to run the library management system
def main():
    library = load_library()
    while True:
        print("\nLibrary Management System Menu:")
        print("1. Display Library")
        print("2. Add a Book")
        print("3. Remove a Book")
        print("4. Exit")
        choice = input("Enter your choice (1/2/3/4): ")
        if choice == "1":
            display_library(library)
        elif choice == "2":
            add_book(library)
        elif choice == "3":
            title = input("Enter the title of the book to remove: ")
            remove_book(library, title)
        elif choice == "4":
            print("Exiting the Library Management System.")
            break
        else:
            print("Invalid choice. Please select a valid option.")


main()
