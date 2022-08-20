#include<stdio.h>
int main()
{
    int n,i,first=0,second=1,next=1;
    printf("enter a vlaue of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        next=first+second;
        first=second;
        second=next;
        if(n==second)
           {
           printf("the given number is in fibonacci series");
           break;
           }
    }
    printf("\n");
    return 0;
}