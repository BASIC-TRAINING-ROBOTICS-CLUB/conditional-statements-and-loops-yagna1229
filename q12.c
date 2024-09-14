// #question 12 :print factorial of the number
#include <stdio.h>

int main() {
    
    int fibo,num;
    printf("Enter the number : ");
    scanf("%d",&fibo);
    num =fibo;
    
    for(int i=1;i<num;i++)
    {
        fibo = fibo * i; 
    }
    
    printf("The Factorial of number is : %d",fibo );
    return 0;
}