#ifndef USER_H
#define USER_H

void createAccount();
int validatePassword(const char* password);
void transfer(double* balance, double* lastTransferAmount);
void deposit(double* balance);
void checkBalance(double balance);
void printReceipt(const char* transactionType, const char* accountName, const char* accountNumber, const char* bank, double amount, double previousBalance, double currentBalance);


#endif
