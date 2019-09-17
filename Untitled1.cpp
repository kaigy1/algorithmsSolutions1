#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,a,b,c,d,var,var1,f,g;
	printf("Please enter a, b, c and d");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	
	var=0;
	var1=0;
	for(i=0;i<a;i++)
	{
		var=+a;
	}
	
	for(i=0;i<d;i++)
	{
		var1=+b;
	}
	f=var-var1;
	var=0; var1=0;
	
	///// calculate f  and g
	for(i=0;i<6;i++)
	{
		var=+c;
	}
	for(i=0;i<d;i++)
	{
		var1=+a;
	}
