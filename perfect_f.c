#include<stdio.h>
int is_divisor(int n,int d)
{
    if(n%d==0){
        return 1;
    }
    else{
        return 0;
    }
}
int sum_of_divisors(int n)
{
    int i=1,sum=0;
    while(i<n)
    {
        if(is_divisor(n,i))
        {
            sum+=i;
        }
        i++;
    }
    return sum;
}
int perfect(int n)
{
    if(sum_of_divisors(n)==n){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    if(perfect(n))
    {
        printf("The number is perfect");
    }
    else{
        printf("The number is not perfect");
    }
    return 0;
}