#include <stdio.h>
#include "user.h"

int main()
{
	char option;
	double balance = 5000.00;
	double lastTransferAmount = 0.0;

	/* Greeting message */ 
	printf("Welcome to Daemon banking app, Banking made easy. \n");

	/* Create account */
	createAccount();

	char password[20];
	int passwordCorrect = 0;

	printf("Enter your password: ");
	scanf("%s", password);

	passwordCorrect = validatePassword(password);


	if (passwordCorrect)
	{
		printf("Your password is correct, Welcome to Daemon Internet Banking \n");
		printf("You have a bouns amount of 5,000. Ugrade your app to enjoy more benefits \n");

		while (1)
		{
			printf("Menu:\n");
			printf("a. Deposit\n");
			printf("b. Transfer\n");
			printf("c. Check balance\n");
			printf("d. Quit the program\n");
			printf("Select an option: ");
			scanf(" %c", &option);

			switch (option)
			{
				case 'a':
				    printf("Option a: Deposit \n");
				    deposit(&balance);
				    break;

				case 'b':
				    printf("Option b: Transfer \n");
				    transfer(&balance, &lastTransferAmount);
				    break;
				    
				case 'c':
				    printf("Option c: Check balance \n");
				    /* Add code to check balance */
				    checkBalance(balance);
				    break;

				case 'd':
				    printf("Option d: Quit the program \n");
				    return 0;

				default:
				    printf("Invalid option. Please try again. \n");
			}
		}
	}

	return 0;
}
