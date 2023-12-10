#include<stdio.h>
int power( int a, int b)
{
    if(b==0) return 1;
    int reAns = a*power(a,b-1);
    return reAns;
}

int main()
{
 int a;
 printf("Enter the value of base:");
 scanf("%d",&a);

 int b;
 printf("Enter the value of power:");
 scanf("%d",&b);

 int p = power(a,b);
 printf("%d",p) ;

return 0;
}

