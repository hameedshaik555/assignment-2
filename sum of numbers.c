#include <stdio.h>

int main()
{
    int n,a[100];
    scanf("%d\n",&n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(a[i]==0)
        {
            printf("sum is %d",sum);
            break;
        }
        if(a[i]<0)
        {
            sum =sum-a[i];
            printf("sum is %d",sum);
        }
        
    }

}
