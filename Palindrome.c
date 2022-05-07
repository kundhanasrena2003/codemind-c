#include<stdio.h>
int main()
{
    int i,n,rev=0,r,o;
    scanf("%d",&n);
    o=n;
    for(i=0;n!=0;i++)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(o==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}