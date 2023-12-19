#include <stdio.h>
#include "user.h"
#include <time.h>

/**
 * printReceipt - Prints receipt to receipt.txt file.
 * @transactionType: Type of Transaction
 * @accountName: Name of account
 * @accountNumber: account number of user
 * @bank: bank transferred to.
 * @amount: amount transferred.
 * @previousBalance: previous balance.
 * @currentBalance: Current balance.
 * Return: void
 */

void printReceipt(const char* transactionType, const char* accountName, const char* accountNumber, const char* bank, double amount, double previousBalance, double currentBalance)
{

