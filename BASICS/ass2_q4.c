#include <stdio.h>

int leap_year(int year){
	if(year%4==0 && year%100!=0 || (year%400==0)){
		return 1;
	}
	return 0;
}

int main(){
	int day,month,year;
	int day_of_year=0;
	
	int DaysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int DaysInMonthLeap[]={31,29,31,30,31,30,31,31,30,31,30,31};
	
	 
	 printf("Enter month(1-12)");
	 scanf("%d",&month);
	 printf("Enter day");
	 scanf("%d",&day);
	 printf("Enter year");
	 scanf("%d",&year);
	 
	 int IsLeapYear=leap_year(year);
	 
	 for(int i=0;i<month-1;i++){
	 	if(IsLeapYear){
	 		day_of_year+=DaysInMonthLeap[i];
	 	}
	 	else{
	 		day_of_year+=DaysInMonth[i];
	 	}
	 }
	 day_of_year+=day;
	 printf("Day number for the date %d%d%d is : %d\n",month,day,year,day_of_year);
	 return 0;



}
