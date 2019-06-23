#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
/*
Emily Zastenchik
Assignment 3

Problem: -stores input date as separate integers for month day, and year (2, 29, 2008)
         -checks if input date is valid 
                 -valid number of days for month
                 -valid month for month number 
         -checks year for valid leap year
         -outputs date (February 29th, 2008) as "You entered February 29th, 2008
         which is a valid date."
Analysis: 
          INPUTS - 
          int dayNum,           //day number
          month,                //month number
          year,                 //year
          
          OUPUTS -
          Date               // Month dayNum, ending, year (February 29th, 2008)
           
          FUNCTIONS -
            bool leapyear(int) - check year for leapyear
                 -if year is can be divided evenly by 4 but not by 100 - leap year
                 -if year can be evenly divisible by 4, 100, and 400 - leap year
                 -else year is NOT a leap year
			bool validDate (int, int, int) - passes day num, month, and leapYear result
			     - 30 days in September, April, June, and November
			     - February 29 days in leap year, 28 days in a non leap year
			     - 31 days in remaining months
			string findMonth(int) - converts numerical month into month name
			string findDayNum(int) - find ending for day number (example: returns st when dayNum = 1)		            
			                                                                                                                                                                
Design:
       Ask user for numerical month, day and year value
       Store these values in int month, dayNum, and year
       Pass int year to leapYear function which returns bool value
       Pass int dayNum, month, and bool result from leapyear function to validDate function
               as Month dayNum, ending, year (February 29th, 2008)
       


*/
bool leapYear(int);
bool validDate(int, int, int);
string findMonth(int);
string findDayNum(int);
int main()
{
  int month, dayNum, year;
 
  
  cout << "Please enter today's date." << endl;
  cout << "Enter the month as a number: ";
  cin >> month;

  cout << "Enter the day: ";
  cin >> dayNum;
  
  cout << "Enter year: ";
  cin >> year;
  
  
  
  if(validDate(dayNum, month, year))
                       cout << "The date is " << findMonth(month) << " " << dayNum << findDayNum(dayNum) << ", " << year << " is valid." << endl; 
  else                            
                       cout << "The date is " << month << " " << dayNum << " " << year << " is not valid." << endl; 
 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
bool leapYear(int y)
{
        bool leapyear = true;
        if((y % 4 == 0) && (y % 100 != 0))
                 { 
                 return leapyear = true;
                 }
        else
            if((y % 4 ==0) && (y % 100 == 0) && (y % 400 == 0))
                  {
                  return leapyear = true;
                  }
                  else
                  {
                  return  leapyear = false;
                  }
}                 
bool validDate(int d, int m, int y)
{
       
       if(d < 1)
            return false;
       if((d <= 30) && (m == 4) || (m == 6) || (m == 9) || (m == 11))
                 {
                  return true;
                 }
       else
           if((d <= 31) && (m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 10) || (m == 12))
                 {
                  return true;
                 }
       else
           if((m == 2) && (d >= 1) && (d <= 28))
                {
                 return true;
                }
       else
           if((m == 2) && (d == 29))
                 {
                  return leapYear(y);
                 }
                  
       else
           {     
            return false;
           }
            
      
     
}
string findMonth(int x)
{      // do not need break because after each return statement the program does not go to the next line
       switch(x)
       {
       case 1:
            return "January";
       case 2:
            return "February";
       case 3:
            return "March";
       case 4:
            return "April";
       case 5:
            return "May";
       case 6:
            return "June";
       case 7:
            return "July";
       case 8:
            return "August";
       case 9:
            return "September";
       case 10:
            return "October";
       case 11:
            return "November";
       case 12:
            return "December";
       default:
               return " ";
	}

}
string findDayNum(int i)
{
   if((i == 1) || (i == 21) || (i == 31))
         return "st";
   else
       if((i == 2) || (i == 22))
          return "nd"; 
   else
       if ((i == 3) || (i == 23)) 
          return "rd";
   else
       if ((4 <= i) || (i >= 20))
          return "th";
   else
       if((24 <= i) || (i >= 30))
              return "th";

}       
       
          
