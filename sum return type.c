#include<stdio.h>
int sum( int n)
{
    if(n==1||n==0) return 1;
    int reAns = n+sum(n-1);
    return reAns;
}

int main()
{
 int n;
 printf("Enter the value of:");
 scanf("%d",&n);

 int fact=sum(n);
  printf("%d",fact) ;

return 0;
}
