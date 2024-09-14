// question 10 : find the sum of its number
#include <stdio.h>

int main() {
    int a,temp,rem,sum=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(a!=0)
    {
        rem = a%10;
        sum+=rem;
        a/=10;
    }
    printf("Sum of Elements is : %d",sum);

    return 0;
}