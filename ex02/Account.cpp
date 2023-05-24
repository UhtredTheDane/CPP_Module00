/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:52:16 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/24 11:29:10 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

//Init static members
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	t::_accountIndex = t::getNbAccounts();
	++t::_nbAccounts;
	t::_totalAmount += initial_deposit;
	t::_amount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
	--t::_nbAccounts;
	t::_totalAmount -= t::_amount;
	t::_totalNbDeposits -= t::_nbDeposits;
	t::_totalNbWithdrawals -= t::_nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";amount:" << t::_amount;
	std::cout << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);	
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	Account::_amount += deposit;
	std::cout << "amount:" << Account::_amount << ";";
	++Account::_nbDeposits;	
	std::cout << "nb_deposits:" << Account::_nbDeposits << ";";
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	res;
	
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	std::cout << "withdrawal:";
	if (Account::_amount >= withdrawal)
	{
		std::cout << withdrawal << ";";
		Account::_amount -= withdrawal;
		std::cout << "amount:" << Account::_amount << ";";
		++Account::_nbWithdrawals;
		++Account::_totalNbWithdrawals;
		std::cout << "nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
		res = true;
	}
	else
	{
		std::cout << "refused" << std::endl;
		res = false;
	}
	return (res);
}

int	Account::checkAmount(void) const
{
	return (t::_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";amount:" << t::_amount;
	std::cout << ";deposits:" << t::_nbDeposits << ";withdrawals:";
	std::cout << t::_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	tempoTime;
	struct tm	*timeInfos;

	std::time(&tempoTime);
	timeInfos = std::localtime(&tempoTime);
	std::cout << "[" << 1900 + timeInfos->tm_year;
	if (timeInfos->tm_mon < 9)
		std::cout << "0";
	std::cout << timeInfos->tm_mon + 1;
	if (timeInfos->tm_mday < 9)
		std::cout << "0";
	std::cout << timeInfos->tm_mday << "_";
	if (timeInfos->tm_hour < 9)
		std::cout << "0";
	std::cout << timeInfos->tm_hour;
	if (timeInfos->tm_min < 9)
		std::cout << "0";
	std::cout << timeInfos->tm_min;
	if (timeInfos->tm_sec < 9)
		std::cout << "0";
	std::cout << timeInfos->tm_sec << "] ";
}
	
