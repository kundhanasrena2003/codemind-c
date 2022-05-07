#include<stdio.h>
int main()
{
    int n,i,f1=0,f2=1;
    scanf("%d",&n);
    int nt=f1+f2;
    printf("%d %d ",f1,f2);
    for(i=3;i<=n;i++)
    {
        printf("%d ",nt);
        f1=f2;
        f2=nt;
        nt=f1+f2;
    }
    return 0;
}