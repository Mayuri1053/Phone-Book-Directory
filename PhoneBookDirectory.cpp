#include <iostream>
#include <string>
#include <vector>

struct Contact {
    std::string name;
    std::string phoneNumber;
};

class Phonebook {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const std::string& name, const std::string& phoneNumber) {
        Contact contact;
        contact.name = name;
        contact.phoneNumber = phoneNumber;
        contacts.push_back(contact);
        std::cout << "Contact added: " << name << " - " << phoneNumber << std::endl;
    }

    void displayContacts() {
        if (contacts.empty()) {
            std::cout << "Phonebook is empty." << std::endl;
        } else {
            std::cout << "Phonebook Contacts:" << std::endl;
            for (const Contact& contact : contacts) {
                std::cout << contact.name << " - " << contact.phoneNumber << std::endl;
            }
        }
    }
};

int main() {
    Phonebook phonebook;
    int choice;
    std::string name, phoneNumber; // Move the variable declarations here

    while (true) {
        std::cout << "\nPhonebook Menu:" << std::endl;
        std::cout << "1. Add Contact" << std::endl;
        std::cout << "2. Display Contacts" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter Name: ";
                std::cin >> name;
                std::cout << "Enter Phone Number: ";
                std::cin >> phoneNumber;
                phonebook.addContact(name, phoneNumber);
                break;
            case 2:
                phonebook.displayContacts();
                break;
            case 3:
                std::cout << "Exiting the Phonebook." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
