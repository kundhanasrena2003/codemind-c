#include<stdio.h>
int main()
{
    int n,d,m,i,s=0,k=0,temp,p=0,z=0,w=0,t=0;
    scanf("%d%d",&n,&m);
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        temp=temp/10;
        p=p*10+d;
    }
    for (i=0;i<m;i++)
    {
        d=p%10;
        p=p/10;
        z=z*10+d;
    }
    for(i=0;i<m;i++)
    {
        d=n%10;n=n/10;
        s=s*10+d;
    }
    while(s!=0)
    {
        d=s%10;
        s=s/10;
        k=k*10+d;
    }
    if(k>z)
    {
        w=k-z;
        printf("%d",w);
    }
    else
    {
        t=z-k;
        printf("%d",t);
    }
    return 0;
}