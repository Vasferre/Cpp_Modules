#include "Harl.hpp"

Harl::Harl(void) {}

void Harl::debug (void) {
    cout << "I love gaving extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << endl;
}

void Harl::info (void) {
    cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking more!" << endl;
}

void Harl::warning(void) {
    cout << "I think i deserve to have extra bacon for free. I've been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void) {
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(std::string level) {
    void (Harl::*funcs[4])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string levels[4] =
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    int i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
            (this->*funcs[i])();
        i++;
    }
}