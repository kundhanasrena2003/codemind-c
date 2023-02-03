#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,s=0,c=0,max=0;
    scanf("%d%d",&n,&m);
    int b[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
            //printf("%d ",b[i][j]);
        }
        //printf("");
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
        {
           s+=b[i][j];
        }
        if(s>max)
        max=s;
    }
    for(i=0;i<m;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
           c+=b[j][i];
        }
        if(c>max)
            max=c;
    }
    printf("%d",max);
}