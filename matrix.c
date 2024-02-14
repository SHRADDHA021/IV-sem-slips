#include<stdio.h>
int main()
{
int a[10][10],i,j,n;
printf("entre limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  {
    printf("enteter n values");
    scanf("%d",&a[i][j]);
   }
}   
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
   printf("%d\t",a[i][j]);
 }
 printf("\n");
}
}
