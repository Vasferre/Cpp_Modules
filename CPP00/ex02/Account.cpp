#include "Account.hpp"
#include <iostream>
#include <iomanio>
#include <ctime>

std::cout;
std::endl;
std::setw;
std::setfill;

int Account::_nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

Account:: Account () {};

Account::Account (int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << amount << ";created" << endl;
    _nbAccounts++;
    _totalAmount += initial_deposit; 
}

Account::Account () {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << amount << ";closed" << endl;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount (void) {
    return _totalAmount;
}

int Account::getNbDeposits (void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals (void) {
    return _totalNbWithdrawals;
}   
