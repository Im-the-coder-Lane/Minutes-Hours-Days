// Programmer:		Jahmier Lane-Johnson
// Date:			2/9/2024
// Program Name:	Minutes, Hours, Days
// Chapter:			Chapter 3 - Decisions
/* Description:		A program to calculate the number of minutes, hours, and days based on the number of seconds entered.
					I used if and else if decsion statements and constants.                                               */

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	// Constant Variables
	const double SEC_PER_MIN = 60.0;
	const double SEC_PER_HOUR = 3600.0;
	const double SEC_PER_DAY = 86400.0;
	const double NON_SECONDS = 0.0;

	// Input Variables
	int userSec = 0;

	// Calculated variables
	double secMinTotal = 0.0;
	double secHourTotal = 0.0;
	double secDayTotal = 0.0;

	// *** Your program goes here ***

	// *** INPUT ***

	// Get user's seconds
	printf("Enter the number of seconds: ");
	scanf("%d", &userSec);

	printf("\n"); // blank line

	// *** PROCESSING ***

	// X Seconds divided 60 Seconds (how many seconds in a minute)
	secMinTotal = userSec / SEC_PER_MIN;

	// X Seconds divided 3600 Seconds (how many seconds in a hour)
	secHourTotal = userSec / SEC_PER_HOUR;

	// X Seconds divided 86400 Seconds (how many seconds in a day)
	secDayTotal = userSec / SEC_PER_DAY;

	// *** OUTPUT ***

	if (userSec <= NON_SECONDS) // if seconds is less than or equal to 0
	{
		printf("The number of seconds entered must be greater than 0.\n");
	}
	else if (userSec >= SEC_PER_MIN && userSec < SEC_PER_HOUR)  // if seconds is more than or equal to 60 seconds but less than 3600 seconds
	{
		printf("The number of seconds you entered, %d, is %.2lf minutes.\n", userSec, secMinTotal);	// minute
	}
	else if (userSec >= SEC_PER_HOUR && userSec < SEC_PER_DAY) // if seconds is more than or equal to 3600 seconds but less than 86400 seconds
	{
		printf("The number of seconds you entered, %d, is %.2lf minutes.\n", userSec, secMinTotal);	// minute
		printf("The number of seconds you entered, %d, is %.2lf hours.\n", userSec, secHourTotal);	// hour
	}
	else if (userSec >= SEC_PER_DAY) // if seconds is more than or equal to 86400 seconds
	{
		printf("The number of seconds you entered, %d, is %.2lf minutes.\n", userSec, secMinTotal); // minute
		printf("The number of seconds you entered, %d, is %.2lf hours.\n", userSec, secHourTotal);	// hour
		printf("The number of seconds you entered, %d, is %.2lf days.\n", userSec, secDayTotal);	// day
	}

	if (userSec >= SEC_PER_MIN || userSec <= NON_SECONDS) // Adds an extra blank line if less than or equal to 0, or greater than or equal to 60
	{
		printf("\n"); //blank line
	}

	return 0;
} // end main()