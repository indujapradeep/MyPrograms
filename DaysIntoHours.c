#include<stdio.h>
void main()
{
	int days;
	printf("Enter the Number of days:");
	scanf("%d",&days);
	int hours,mins;
	hours=days*24;
	mins=hours*60;
	printf("Days in hours:%d",hours);
	printf("\nDays in minutes:%d",mins);
}
