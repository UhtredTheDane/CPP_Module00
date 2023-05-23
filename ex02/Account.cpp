/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:52:16 by agengemb          #+#    #+#             */
/*   Updated: 2023/05/23 15:20:36 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>

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
	std::cout << "index:" << t::_accountIndex << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
	--t::_nbAccounts;
	t::_totalAmount -= t::_amount;
	t::_totalNbDeposits -= t::_nbDeposits;
	t::_totalNbWithdrawals -= t::_nbWithdrawals;
	std::cout << "index:" << t::_accountIndex << ";amount:" << t::_amount;
	std::cout << ";closed" << std::endl;
	index:0;amount:47;closed
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
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	Account::_amount += deposit;
	std::cout << "amount:" << Account::_amount << ";";
	++Account::_nbDeposits;	
	std::cout << "nb_deposits:" << Account::_nbDeposits << ";";				
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	res;
	
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
	std::cout << "withdrawal:";
	if (Account::_amount >= withdrawal)
	{
		std::cout << withdrawal << ";";
		Account::_amount -= withdrawal;
		std::cout << "amount:" << Account::_amount << ";";
		++Account::_nbWithdrawals;
		std::cout << "nb_withdrawals:" << Account::getNbWithdrawals() << std::endl;
		res = true;
	}
	else
	{
		std::cout << "refused" << std::endl;
		res = false;
	}
	return (res);
}

int		t::checkAmount(void)
{
	return (t::_amount);
}

void	Account::displayStatus(void)
{
	std::cout << "index:" << t::_accountIndex << ";amount:" << t::_amount;
	std::cout << ";deposits:" << t::_nbDeposits << ";withdrawals:";
	std::cout << t::_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{

}
	
