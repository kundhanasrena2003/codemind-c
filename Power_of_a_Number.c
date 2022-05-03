#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,squ,m;
    scanf("%d%d%d",&x,&y,&z);
    squ=pow(x,y);
    m=squ%z;
    printf("%d",m);
    return 0;
}