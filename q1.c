// question no 1 
#include<stdio.h>

int even_odd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a;
    printf("Enter the number to check(even/odd) :");
    scanf("%d",&a);
    if(even_odd(a))
    {
        printf("Even");
    }
    else if(even_odd(a)==0)
    {
        printf("Odd");
    }
    return 0;
}