# Phone-Book-Directory
The=project is a simple console-based phonebook directory application implemented in C++. It allows users to manage a list of contacts with their names and phone numbers. Here's a description of the key components and functionality of the project:

1. **Contact Structure**:
   - The project defines a `Contact` struct that represents a single contact. It has two data members:
     - `name`: A string to store the contact's name.
     - `phoneNumber`: A string to store the contact's phone number.

2. **Phonebook Class**:
   - The `Phonebook` class is responsible for managing the list of contacts. It has the following methods:
     - `addContact(const std::string& name, const std::string& phoneNumber)`: Allows the user to add a new contact to the phonebook. It creates a `Contact` object and adds it to the list of contacts.
     - `displayContacts()`: Displays the list of contacts stored in the phonebook. If the phonebook is empty, it notifies the user that it's empty.

3. **Menu-driven Interface**:
   - The `main` function provides a simple menu-driven interface for users to interact with the phonebook. It repeatedly displays a menu of options and waits for user input.
   - Menu options:
     - "Add Contact": Users can input a contact's name and phone number, and the contact is added to the phonebook.
     - "Display Contacts": Lists all the contacts in the phonebook.
     - "Exit": Allows the user to exit the application.

4. **Looping Menu**:
   - The program runs in a loop, so users can continue to add, display, or exit as many times as they want until they choose to exit the application.

5. **Input Validation**:
   - The program uses basic input validation to ensure that user input is valid. For example, it checks if the entered choice is within the menu options.

6. **Output Messages**:
   - The program provides informative output messages, such as confirming when a contact is added, notifying the user if the phonebook is empty, or displaying an error message for invalid input.

7. **User-Friendly Interaction**:
   - This project offers a simple and user-friendly way for users to create a list of contacts and view them, making it a basic example of a phonebook directory application.

To use this phonebook directory, you compile and run the program, follow the on-screen menu to add and display contacts, and exit when you're done. It serves as a starting point for creating more complex phonebook applications with additional features and data storage capabilities.
