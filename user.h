#ifndef USER_H
#define USER_H

void createAccount();
int validatePassword(const char* password);
void transfer(double* balance, double* lastTransferAmount);
void deposit(double* balance);
void checkBalance(double balance);

#endif
