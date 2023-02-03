#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    int a[n][n],b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
            if(j==n-1)
                printf("%d",abs(b[i][j]-a[i][j]));
            else
                printf("%d ",abs(b[i][j]-a[i][j]));
        }
        printf("
");
    }
}