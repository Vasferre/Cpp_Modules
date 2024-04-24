#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

using std::string;

class Contact{
    private:
        string first_name;
        string last_name;
        string nickname;
        string     phone_number;
        string  darkest_secret;
    public:
        void  setFirstName(string firstname);
        void  setLastName(string lastname);
        void  setNickName(string nickname);
        void    setPhoneNumber(string number);
        void  setDarkestSecret(string secret);

        string  getFirstName(void);
        string  getLastName(void);
        string  getNickName(void);
        string     getPhoneNumber(void);
        string  getDarkestSecret(void);
};

#endif