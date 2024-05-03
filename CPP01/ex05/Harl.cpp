#include "Harl.hpp"

Harl::Harl(void) {}

void Harl::debug (void) {
    cout << "" << endl;
}

void Harl::info (void) {
    cout << "" << endl;
}

void Harl::warning(void) {
    cout << "" << endl;
}

void Harl::error(void) {
    cout << "" << endl;
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