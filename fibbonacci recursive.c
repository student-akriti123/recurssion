#include<stdio.h>
int fibo(int n)
{
    if(n==1||n==0) return 1;
    int ans1= fibo(n-1);
    int ans2= fibo(n-2);
    int ans= ans1+ans2;
    return ans;
}

int main()
{
 int n;
 printf("Enter the value of:");
 scanf("%d",&n);

 printf("%d",fibo(n));

return 0;
}
