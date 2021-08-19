#include<stdio.h>
int main()
{
    int a,b;
    char input;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%c",&input);
    switch(input)
    {
        case 'a' :
        printf("sum is %d",a+b);
        break;
        
        
        case 's':
        if(a>b)
        {
        printf("diff is %d",a-b);
        }
        else
        {
           printf("diff is %d",b-a); 
        }
        break;
        
        default:
        printf("default case-no action");
        
    }
    
    
}
