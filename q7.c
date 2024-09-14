// question 7: leap year or not
#include <stdio.h>

int main() {
    int leap;
    printf("Enter a year (YYYY) :");
    scanf("%d",&leap);
  
  if(leap%4==0 && leap%100!=0 || leap%400==0)
  {
      printf("Leap Year!");
  }
  else
  {
      printf("Not Leap Year");
  }

    return 0;
}