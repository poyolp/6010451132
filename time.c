#include <stdio.h>
int main()
{
	int time,day,hour,min;
	printf("Enter computer working time: ");
	scanf("%d", &time);
	day = (time/1440);
	hour = (time%1440)/60;
	min = (time%1440)%60;
	printf("It is %d days %d hours and %d minutes." ,day,hour,min);

}