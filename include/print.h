#include "declaration.h"
//*******************************************************************************************************************************
// Function to colour text
//*******************************************************************************************************************************
inline void setclr(int clrcode)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),clrcode);
}

//*******************************************************************************************************************************
// Function to print Welcome heading
//*******************************************************************************************************************************

void welcome() {
    system("CLS");
	setclr(11);
	cout<<endl<<endl;
	cout<<"             #####         #        #           #######     #     #     ######         #        ######  "<<endl;
	cout<<"            #     #       # #       #           #           ##    #     #     #       # #       #     # "<<endl;
	cout<<"            #            #   #      #           #           # #   #     #     #      #   #      #     # "<<endl;
	cout<<"            #           #     #     #           #####       #  #  #     #     #     #     #     ######  "<<endl;
	cout<<"            #           #######     #           #           #   # #     #     #     #######     #   #   "<<endl;
	cout<<"            #     #     #     #     #           #           #    ##     #     #     #     #     #    #  "<<endl;
	cout<<"             #####      #     #     #######     #######     #     #     ######      #     #     #     # "<<endl;
	setclr(7);
}

//*******************************************************************************************************************************
// Function to print the calendar of the given year
//*******************************************************************************************************************************

void printCalendar(int year, int month,int day=0)
{
	welcome();
    int days;

    int current = dayNumber (1, month, year);

        days = numberOfDays (month, year);

        // Print the current month name
        setclr(15);
        cout<<"\n\n\n\n  ------------"<<getMonthName (month).c_str()<<"::"<<year<<"-------------\n";

        // Print the columns
        setclr(9);
        cout<<"\n   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n\n";

        // Print appropriate spaces
        int k;
        for (k = 0; k < current; k++){
           cout<<"     ";
		}

        for (int j = 1; j <= days; j++)
        {
        	if(j==day) {
        		setclr(12);
			}
			else
        		setclr(10);
            printf("%5d", j);
            if (++k > 6)
            {
                k = 0;
                cout<<endl<<endl;
            }
        }

        if (k)
            cout<<endl<<endl;

        current = k;
        setclr(12);
 		cout<<endl<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"~~~~~~~~~~~~~~~~~~~~~~";
    return;
}