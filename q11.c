// question 11 : fibonacci series 

#include<stdio.h>

int fibo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
    
}
#include <stdio.h>

int main()
{
    int number,m;
    printf("Enter the number to print fibonnaci series till that :");
    scanf("%d",&number);
    for(int i=0;i<number;i++)
    {
        printf(" %d",fibo(m));
        m++;
    }
    return 0;
}
