#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&m);
    scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         if(i%2!=0)
         {
              printf("%d x %d = %d
",m,i,m*i);
         }
             
     }   
     return 0;  
}