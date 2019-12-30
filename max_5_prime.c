#include<stdio.h>
int main()
{
	int b[120]={0};
	for(int i=0;i<120;i++)
	{
		int a[5]={1,2,3,6,9};
		int judge=1,x=0,t=1;
		for(int j=0;j<5;j++)
		{
			a[j]=a[j]*t;
			x=x+a[j]; 
			t=t*10;
		}
		for(int j=2;j<x;j++)
		{
			if(x%j==0)
			{
				judge=0;
			}
		}
		if(judge==1)
		{
			b[i]=x;
		}
	}
	int max=b[0];
	for(int i=0;i<120;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	if(max==0)
	{
		printf("Error");
	 }else
	 {
	 	printf("%d",max);
	 }
	 return 0;
	
 } 
