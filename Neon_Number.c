#include<stdio.h>
int main()
{
    int n,a,sum=0,q,rem;
    scanf("%d",&n);
    a=n*n;
    while(a!=0)
    {
      rem=a%10;
      sum+=rem;
      a=a/10;
    }
    if(sum+a==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}