#include<stdio.h>
int main()
{
	int i,j,k,even[50],odd[50];
	for(i=1;i<=100;i++)
	{
		
		if(i%2==0)
		{
			even[j]=i;
			j++;
		
		}
		else
		{
			odd[k]=i;
			k++;
		}
	}
	printf("Even numbers are:");
    for(i=0;i<=50;i++)
    {
    	printf("%d,",even[i]);
	}
	printf("\nOdd numbers are:");
    for(i=1;i<50;i++)
    {
    	printf("%d,",odd[i]);
	}
	return 0;
	
}
