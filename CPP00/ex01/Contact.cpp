#include "Contact.hpp"

using std::string;

void    Contact::setFirstName(string firstname){
    this->first_name = firstname;
}

void    Contact::setLastName(string lastname){
    this->last_name = lastname;
}

void    Contact::setPhoneNumber(string number){
    this->phone_number = number;
}

void    Contact::setNickName(string nick){
    this->nickname = nick;
}

void    Contact::setDarkestSecret(string secret){
    this->darkest_secret = secret;
}

string  Contact::getFirstName(){
    return(this->first_name);
}

string  Contact::getLastName(){
    return(this->last_name);
}

string Contact::getNickName(){
    return(this->nickname);
}

string    Contact::getPhoneNumber(){
    return(this->phone_number);
}

string  Contact::getDarkestSecret(){
    return(this->darkest_secret);
}