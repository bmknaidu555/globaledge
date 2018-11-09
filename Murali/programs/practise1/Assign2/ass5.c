#include <stdio.h>
#include <stdlib.h> 
#include "lib/f_strlen.c"
#include "lib/snappend.c"

#define BUFFER 50

//  paetial Executed



int main()
{
	int n;
	int input_length;

	// Source buffer
	char* str1 = malloc( BUFFER );
	char* str2 = malloc( BUFFER);
	
	printf ("\nPlease enter The input String   :  ");

	// Reading input - 1 from user
	fgets ( str1, BUFFER, stdin );

	//to clear the buffer

	//Validation : 1

	if(*str1 == '\n' ||f_strlen(str1) == 0 || *str1 == '\0' )
	{
		printf("Input Should not be empty! \n");
		return 0;
	}	
		
	__fpurge(stdin);

	printf("\nPlease enter the String 2  : ");

	//Reading input - 2 from user
	fgets ( str2, BUFFER, stdin );

	if(*str2 == '\n' ||f_strlen(str2) == 0 || *str2 == '\0' )
	{		
		printf("Input Should not be empty! \n");
		return 0;
	}

	printf ("\nPlease enter How many chars of str1 need to append to string 2 : ");
	scanf ("%d", &n);


	snappend(str1, str2, n);

	printf ("\nThe appended String is :  %s\n", str2);
}

 
