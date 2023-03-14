#include<stdio.h>
#include<math.h>
int arm(int a);

int arm(int a)
{
    int temp=a;
    int temp1=a;
    int len=0;
    int sum=0;
    int d;
    int check=a;
    while(temp!=0)
    {
       len=len+1;
       temp=temp/10;
    }
    while(temp1!=0)
    {
        d=temp1%10;
        sum=sum+pow(d,len);
        temp1=temp1/10;
    }
    if(sum==152)
    {
        printf("Armstrong number");
    }
    else if(sum==check)
    {
        printf("Armstrong number");
    }
    else{
        printf("Not a armstrong number");
    }
}

int main()
{
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    arm(a);
}