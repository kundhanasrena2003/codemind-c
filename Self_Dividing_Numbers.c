#include<stdio.h>
int main()
{
    int a,b,temp,i,d;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        temp=i;
        while(temp!=0)
        {
            d=temp%10;
            if(d==0||i%d!=0)
            {
                break;
            }
            temp=temp/10;
        }
        if(temp==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}