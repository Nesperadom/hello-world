#include<stdio.h>
int main()
{
	int t=1,sum=0,temp,a[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	 } 
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	for(int i=4;i>=0;i--)
	{
		sum=sum+a[i]*t;
		t=t*10;
	}
	printf("%d",sum);
	return 0;
}
