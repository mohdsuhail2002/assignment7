#include<stdio.h>
int main()
{
    int i,n,first=0,second=1,next=0;
    printf("enter the n value for fibonacci series");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("%d",n);
    }
    else
    {
        next=first+second;
    }
    for(i=1;i<=n;i++)
        {
            first=second;
            second=next;
            next=first+second;
        }
    printf("nth term is %d",second);
    printf("\n");
    return 0;
}