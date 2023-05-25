/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:52:16 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/25 11:35:54 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

//Init static members
int t::_nbAccounts = 0;
int t::_totalAmount = 0;
int t::_totalNbDeposits = 0;
int t::_totalNbWithdrawals = 0;

t::Account(int initial_deposit)
{
	t::_accountIndex = t::getNbAccounts();
	++t::_nbAccounts;
	t::_totalAmount += initial_deposit;
	t::_amount += initial_deposit;
	
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
}

t::Accout(void)
{
}

t::~Account(void)
{
	--t::_nbAccounts;
	t::_totalAmount -= t::_amount;
	t::_totalNbDeposits -= t::_nbDeposits;
	t::_totalNbWithdrawals -= t::_nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";amount:" << t::_amount;
	std::cout << ";closed" << std::endl;
}

int	t::getNbAccounts(void)
{
	return (t::_nbAccounts);	
}

int	t::getTotalAmount(void)
{
	return (t::_totalAmount);
}

int	t::getNbDeposits(void)
{
	return (t::_totalNbDeposits);
}

int	t::getNbWithdrawals(void)
{
	return (t::_totalNbWithdrawals);
}

void	t::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << t::getNbAccounts() << ";";
	std::cout << "total:" << t::getTotalAmount() << ";";
	std::cout << "deposits:" << t::getNbDeposits() << ";";
	std::cout << "withdrawals:" << t::getNbWithdrawals() << std::endl;
}

void	t::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";";
	std::cout << "p_amount:" << t::_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	t::_amount += deposit;
	std::cout << "amount:" << t::_amount << ";";
	++t::_nbDeposits;	
	std::cout << "nb_deposits:" << t::_nbDeposits << ";";
	std::cout << std::endl;
}

bool	t::makeWithdrawal(int withdrawal)
{
	bool	res;
	
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";";
	std::cout << "p_amount:" << t::_amount << ";";
	std::cout << "withdrawal:";
	if (t::_amount >= withdrawal)
	{
		std::cout << withdrawal << ";";
		t::_amount -= withdrawal;
		std::cout << "amount:" << t::_amount << ";";
		++t::_nbWithdrawals;
		++t::_totalNbWithdrawals;
		std::cout << "nb_withdrawals:" << t::_nbWithdrawals << std::endl;
		res = true;
	}
	else
	{
		std::cout << "refused" << std::endl;
		res = false;
	}
	return (res);
}

int	t::checkAmount(void) const
{
	return (t::_amount);
}

void	t::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << t::_accountIndex << ";amount:" << t::_amount;
	std::cout << ";deposits:" << t::_nbDeposits << ";withdrawals:";
	std::cout << t::_nbWithdrawals << std::endl;
}

void	t::_displayTimestamp(void)
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
