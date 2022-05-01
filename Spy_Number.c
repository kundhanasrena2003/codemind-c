#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,rem;
    scanf("%d",&n);
    while(n!=0 && n>0)
    {
       rem=n%10;
       sum+=rem;
       n=n/10;
       pro*=rem;
    }
    if(pro==sum)
    {
        printf("Spy Number");
        return 0;
    }
    else
    {
        printf("Not Spy Number");
        return 0;
    }
}