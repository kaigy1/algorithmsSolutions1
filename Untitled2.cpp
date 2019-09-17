#include<stdio.h>

int main()
{
	double costm;
	int i=1;
	costm=400;
	
	double costy=costm*12*2;
	double case1;
	scanf("%d",&case1);
	
	
	if (case1==1)
	{
		for(i;costy<0;i++)
		{
			costy*1.02;
			costy-=15600;
		}
		
		
	}
	if (case1==0)
	{
		for(i;costy<0;i++)
		{
			
			costy-=8400;
		}
		
		
	}
	
	printf("%d",i);
	return i;
}
