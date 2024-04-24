#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

int PhoneBook::index = 0;

void PhoneBook::addContact()
{
    string input;
    int i = 0;

    if (index > 7)
    {
        while(i < 7)
        {
            contacts[i] = contacts[i + 1];
            index -= 1;
        }
    }

    cout << "First Name: ";
    getline (cin, input);
    contacts[index].setFirstName(input);

    cout << "Last Name: ";
    getline (cin, input);
    contacts[index].setLastName(input);

    cout << "Nickname: ";
    getline (cin, input);
    contacts[index].setNickName(input);

    cout << "Phone Number: ";
    getline (cin, input);
    contacts[index].setPhoneNumber(input);

    cout << "Darkest Secret: ";
    getline (cin, input);
    contacts[index].setDarkestSecret(input);

    this->index += 1;

    cout << "Contact added " << endl;
}
void display(string screen)
{
    if (screen.size() > 10)
        cout << std::setw(9) << std::right << screen.substr(0, 9) << "." << "|";
    else
        cout << std::setw(10) << std::right << screen << "|";
}
void PhoneBook::searchContact(void)
{
    if (PhoneBook::index == 0)
    {
        cout << "there is no contact in the phonebook" << endl;
        return;
    }

    int i = 0;

    while(i < this->index)
    {
        cout << "\n|     Index|First Name| Last Name| Nickname |" << endl;
        cout << "|" << std::right << std::setw(10) << i << "|";
        display(contacts[i].getFirstName());
        display(contacts[i].getLastName());
        display(contacts[i].getNickName());
        cout << endl;
        i++;
    }

    string index;
    int search_index;
    while(1)
    {
        cout << "insert the index you hould like to search: ";
        getline(cin, index);

        if (!index.empty() && index.find_first_not_of("0123456789") == std::string::npos)
        {
            search_index = atoi(index.c_str());
            if (search_index <= MAX_INDEX)
                break;
        }
        cin.clear();
        cout << "invalid input" << endl;
    }
    if (search_index > (this->index - 1))
        cout << "Unable to find contact!" << endl;
    else
        {
            cout << "\nFirst Name" << contacts[search_index].getFirstName() << endl;
            cout << "Last Name" << contacts[search_index].getLastName() << endl;
            cout << "Nickname" << contacts[search_index].getNickName() << endl;
            cout << "Phone Number" << contacts[search_index].getPhoneNumber() << endl;
            cout << "Darkest Secret" << contacts[search_index].getDarkestSecret() << endl;
        }
    }

int main (void)
{
    PhoneBook phone;
    string option;

    while(1)
    {
        cout << "\nPhoneBook:\n->ADD\n->SEARCH\n->EXIT\n" << endl;
        cout << "Option" << endl;
        getline(cin, option);
        if (option == "ADD")
        {
            phone.addContact();
            continue;
        }
        if (option == "SEARCH")
        {
            phone.searchContact();
            continue;
        }
        if (option == "EXIT")
            break;
        cout << "invalid command!" << endl;
    }
    return EXIT_SUCCESS;
}