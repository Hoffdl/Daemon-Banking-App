#include <stdio.h>
#include <string.h>

int main()
{
	char option;
	double balance = 5000.00; 


	printf("Welcome to Daemon banking app, enjoy the experience\n");

	/* Creating an account */
	char firstname[40], lastname[50];

	printf("Create an account \n");
	printf("Enter your first and last names here: ");
	scanf("%s %s", firstname, lastname);

	char pass[20];
	char val[20];
	int value;
	int i = 3;
	int passwordCorrect = 0; //Flag var to track correct password validation.

	printf("Create a password: ");
	scanf("%s", pass);

	printf("Confirm password: ");
	scanf("%s", val);

	value = strcmp(pass, val);

	if (value != 0 )
		while (i >= 0)
		{
			printf("\n Your passwords dont match \n");
			printf("Try again, Re-enter password: ");
			scanf(" %s", val);

			value = strcmp(pass, val);
			if ( value == 0)
			{
				passwordCorrect = 1;
				break;
			}
			if (i > 0)
				printf("Passwords dont match.You have %d more attempts \n", i);
			else
				printf("Sorry, You can't create an account");
					i--;
		}
	else
		passwordCorrect = 1;

	if (passwordCorrect)
	{
		printf("Your password is correct, Welcome to Daemon Internet Banking \n");
		printf("You have a fixed amount of 5,000. Ugrade your app to enjoy more benefits \n");

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
				    printf("Option a: Deposit\n");
				    /* Add code to deposit money */
				    break;

				case 'b':
				    printf("Option b: Transfer\n");
				    /* Add code to deposit money */
				    break;
				    
				case 'c':
				    printf("Option c: Check balance\n");
				    /* Add code to check balance */
				    break;

				case 'd':
				    printf("Option d: Quit the program\n");
				    return 0;

				default:
				    printf("Invalid option. Please try again.\n");
			}
		}
	}

	return 0;
}
