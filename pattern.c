#include<stdio.h>
int main()
{
    int i,j,k,r=6,s=6;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i;k++)
        {
            if(k==1)
            {
                printf("/");
                
                
            }
            else if(k==2*i)
            {
                printf("\\");

            }
            else if(i==r)
            {
                if(k<=2*i-1)
                {
                    printf("_");
                }

            }
            else
            printf(" ");

            
        }
        s--;
        printf("\n\n");
    }
        
}
