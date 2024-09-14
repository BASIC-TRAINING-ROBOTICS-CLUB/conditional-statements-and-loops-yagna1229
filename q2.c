// Question 2 : To cheak the triangle hae eqal sides or not 
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the sides of the triangle :");
    scanf(" %d  %d %d",&a,&b,&c);
    
    if(a==b && b==c)
    {
        printf("\nSides Are Same");
    }
    else
    {
        printf("\nSides are diffrant ");
    }
return 0;
    
}