//*******************************************************************************************************************************
//
//											CALENDAR MANAGEMENT SYSTEM
//
//		Author : 
//						Himanshu Maurya
//						Madan Mohan Malaviya University of Technology (2017021053)
//
//*******************************************************************************************************************************

#include "include/declaration.h"
#include "include/print.h"
#include "include/about.h"
#include "include/functions.h"


void input(int i) {
	int dd,mm,yy;
	if(i==1) {
		cout<<"Enter the date (dd  mm  yyyy) : ";
		cin>>dd>>mm>>yy;
		if(yy<1600) {
		cout<<"Invalid year."<<endl;
		cout<<"Enter the year greater than 1600.";
		return;
		}
		if(dd<0 || dd>numberOfDays (dd, yy)){
			cout<<"Invalid Date.";
			return;
		}
	}
	else if(i==2)
	{
		cout<<"Enter the date ( mm  yyyy) : ";
		dd=0;
		cin>>mm>>yy;
		if(yy<1600) {
		cout<<"Invalid year."<<endl;
		cout<<"Enter the year greater than 1600.";
		return;
		}
	}
	if(mm<1 || mm>12) {
		cout<<"Invalid Month."<<endl,
		cout<<"Enter the month in b/w 1 to 12.";
		return;
	}
	printCalendar(yy,mm-1,dd);
}

//*******************************************************************************************************************************
// Driver Program
//*******************************************************************************************************************************
int main()
{
	SetConsoleTitle("Calender _version 1.0.0.2");
	int op,dd,mm,yy;
	do{
		time_t now = time(0);		// current date/time based on current system
		tm *ltm = localtime(&now);
    	printCalendar( 1900 + ltm->tm_year,ltm->tm_mon,ltm->tm_mday);
    	setclr(14);
    	cout<<endl<<endl<<endl<<"\t1. Jump to DATE \t 2. Jump to MONTH\t\t 3. ABOUT Calender v1.0.0.2\t\t4. EXIT";
    	setclr(12);
 		cout<<endl<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		setclr(10);
    	cin>>op;

    	switch(op) {

    		case 1: system("CLS");
    				welcome();
    				cout<<endl<<endl;
    				input(1);
    				setclr(7);
    				cout<<endl<<endl<<"Press any key to continue......";
    				getch();
    				break;

    		case 2: system("CLS");
    				welcome();
    				cout<<endl<<endl;
    				input(2);
    				setclr(7);
    				cout<<endl<<endl<<"Press any key to continue......";
    				getch();
    				break;

    		case 3: system("CLS");
    				welcome();
    				About();
    				cout<<endl<<endl<<"\n\t\t\t\t\t\t\t\t\tPress any key to continue......";
    				getch();
    				break;

    		case 4: exit(0);

    		default: cout<<"Enter the correct value!";
    				 getch();
		}
	} while (1);
    return 0;
}
