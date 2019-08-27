#include "declaration.h"
//*******************************************************************************************************************************
// Funtions for calendar calculation
//*******************************************************************************************************************************


int dayNumber(int day, int month, int year)
{

    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    return ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

string getMonthName(int monthNumber)
{
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};

    return (months[monthNumber]);
}

int numberOfDays (int monthNumber, int year)
{
    if (monthNumber == 0)	// January
        return (31);

    if (monthNumber == 1)	// February
    {
        // If the year is leap then February has
        // 29 days
        if (year % 400 == 0 ||
                ((year % 4 == 0 )&& (year % 100 != 0)))
            return (29);
        else
            return (28);
    }

    if (monthNumber == 2)	// March
        return (31);

    if (monthNumber == 3)	// April
        return (30);

    if (monthNumber == 4)	// May
        return (31);

    if (monthNumber == 5)	// June
        return (30);

    if (monthNumber == 6)	// July
        return (31);

    if (monthNumber == 7)	// August
        return (31);

    if (monthNumber == 8)	// September
        return (30);

    if (monthNumber == 9)	// October
        return (31);

    if (monthNumber == 10)	// November
        return (30);

    if (monthNumber == 11)	// December
        return (31);
}