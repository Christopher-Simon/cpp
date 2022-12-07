#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(void): _accountIndex(Account::_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

int	Account::getNbAccounts( void ){return (Account::_nbAccounts);}
int	Account::getTotalAmount( void ){return (Account::_totalAmount);}
int	Account::getNbDeposits( void ){return (Account::_totalNbDeposits);}
int	Account::getNbWithdrawals( void ){return (Account::_totalNbWithdrawals);}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}	else {
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return (true);
	}	
}

int		Account::checkAmount( void ) const{
	return (this->_amount);
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void ) {
	// time_t ttime = time(0);
    // tm *local_time = localtime(&ttime);
	// std::cout << "[";
	// std::cout << 1900 + local_time->tm_year;
    // std::cout << 1 + local_time->tm_mon;
    // std::cout << local_time->tm_mday;
	// std::cout << "_";
    // std::cout << 1 + local_time->tm_hour ;
    // std::cout << 1 + local_time->tm_min;
    // std::cout << 1 + local_time->tm_sec;
	// std::cout << "] ";
}


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
