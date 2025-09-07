#include<stdio.h>

float unitGreaterThan500(int unit)
{
	float bill;
	
	if(unit>100)		bill=100*0;
	else				bill=unit*0;
	unit=unit-100;
	
	if(unit>300)		bill+=300*4.7;
	else if(unit>0)		bill+=unit*4.7;
	unit=unit-300;
	
	if(unit>100)		bill+=100*6.3;
	else if(unit>0)		bill+=unit*6.3;
	unit=unit-100;
	
	if(unit>100)		bill+=100*8.4;
	else if(unit>0)		bill+=unit*8.4;
	unit=unit-100;
	
	if(unit>200)		bill+=200*9.45;
	else if(unit>0)		bill+=unit*9.45;
	unit=unit-200;
	
	if(unit>200)		bill+=200*10.5;
	else if(unit>0)		bill+=unit*10.5;
	unit=unit-200;
	
	if(unit>0)			bill+=unit*11.55;

	return bill;
}

float unitLesserThan500(int unit)
{
	float bill;
	
	if(unit>100)		bill=100*0;
	else                bill=unit*0;
	unit=unit-100;
	
	if(unit>100)		bill+=100*2.35;
	else if(unit>0)		bill+=unit*2.35;
	unit=unit-100;
	
	if(unit>200)		bill+=200*4.7;
	else if(unit>0)		bill+=unit*4.7;
	unit=unit-200;
	
	if(unit>100)		bill+=100*6.3;
	else if(unit>0)		bill+=unit*6.3;
	
	return bill;
	
}

void main()
{
	int initial,final;
	float bill;
	
	printf("Enter your Initial Readings:");
	scanf("%d",&initial);
	printf("Enter your Final Readings:");
	scanf("%d",&final);
	
	int unit;
	unit=final-initial;
	printf("UNIT:%d",unit);
	
	if(unit>500)
	{
		printf("\nThe Total Bill is %.2f",unitGreaterThan500(unit));
	}
	else
	{
		printf("\nThe Total Bill is %.2f",unitLesserThan500(unit));
	}
}
