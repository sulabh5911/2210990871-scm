#include<stdio.h>
int fact(int n);

int fact(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a=a*i;
    }
    printf("Factorial is:%d",a);
}

int main()
{
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    fact(n);
    return 0;
}