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

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
		
}

Account::~Account(void)
{
	
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

/*
int		checkAmount( void ) const
{
	return (2);
}*/

void	Account::displayStatus( void ) const
{

}

void	_displayTimestamp( void )
{

}
	
