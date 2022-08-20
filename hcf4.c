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
    printf("\n");
    return 0;
}