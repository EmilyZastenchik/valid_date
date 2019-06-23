# valid_date
Assignment 3 Intro programming 1

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
       
