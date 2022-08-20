#include<stdio.h>
int main()
{
    int a,b,i,min;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    while(min>0)
    {
        if(a%min==0 && b%min==0)
        {
            printf("the hcf of %d and %d is %d",a,b,min);
            break;
        }
        min--;
    }
    if(min==1)
    {
        printf("the number %d and %d having factor %d are co-prime",a,b,min);
    }
    else
    {
        printf("\n%d and %d are not co-prime",a,b);
    }
    printf("\n");
    return 0;
}