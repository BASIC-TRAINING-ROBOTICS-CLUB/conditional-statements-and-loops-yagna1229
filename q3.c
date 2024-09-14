// Quetion 3 : cheak right angle or not 
#include <stdio.h>

void is_rightAngle(int a,int b,int c)
{
    int d;
    if((a*a) == (b*b) + (c*c) || (b*b) == (a*a) + (c*c) || (c*c) == (b*b) + (a*a) )
    {
        printf("Tringle is Right Angle Triangle ");
        
    }
    else
    {
        printf("Not Right Angle Trianlge");
    }
}

int main() {
  int x,y,z;
  printf("Enter the sides of the triangle :");
  scanf("%d",&x);
  printf("Enter the ther side of the triangle :");
  scanf("%d",&y);
  printf("Enter the third side of the triangle :");
  scanf("%d",&z);

// cheaking the triangle right angle or not
is_rightAngle(x,y,z);
    return 0;
}