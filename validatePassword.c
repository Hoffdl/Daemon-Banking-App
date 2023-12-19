#include <stdio.h>
#include "user.h"
#include <string.h>

int validatePassword(const char* password)
{
	char val[20];
        int value;
        int i = 3;
        
        printf("Re-enter your password: ");
        scanf("%s", val);

        value = strcmp(password, val);

        if (value != 0 )
	{
                while (i >= 0)
                {
                        printf("\n Your passwords dont match \n");
                        printf("Try again, Re-enter password: ");
                        scanf(" %s", val);

                        value = strcmp(password, val);
                        if ( value == 0)
                        {
                                return 1; // Password validation successful
                        }

                        if (i > 0)
                                printf("Passwords dont match.You have %d more attempts \n", i);
                        else
                                printf("Sorry, You can't create an account");
			i--;
                }
	}

        else
	{
		return 1; // Password validation successful
	}

	return 0; // Password validation failed
}
