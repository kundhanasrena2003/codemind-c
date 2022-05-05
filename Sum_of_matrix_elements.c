#include<stdio.h>
int main()
{
    int R,C,i,j,sum=0;
    scanf("%d %d",&R,&C);
    int arr[R][C];
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
}