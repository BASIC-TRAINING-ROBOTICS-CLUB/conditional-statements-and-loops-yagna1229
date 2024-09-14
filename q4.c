//question 4 : cheaking qudrant by taking alue of x and y
#include <stdio.h>

void qudrant(float *x,float *y)
{
    if(((*x==1 || *x==-1) &&(*y==0)) || ((*y==1 || *y==-1) &&(*x==0)))
    {
        printf("\nThis point on a line");
    }
    
    else if((*x<1 && *x>0) && (*y>=0 && *y<=1))
    {
        printf("First Quadrant");
    }
    else if((*x<0 && *x>-1) && (*y<1 && *y>0))
    {
        printf("Secound Quadrant");
    }
    else if((*x>-1 && *x<0) && (*y<0 && *y>-1))
    {
        printf("Third Quadrant");
    }
    else if((*x>0 && *x<1) && (*y>=-1 && *y<=0))
    {
        printf("Four'th Quadrant");
    }
    else
    {
        printf("\nInvalid input!");
    }
    
}


int main() {
    float x,y;
    printf("Enter the VAlue for x between(1,0,-1) :");
    scanf("%f",&x);
    printf("Enter the VAlue for y between(1,0,-1) :");
    scanf("%f",&y);
    qudrant(&x,&y);
    printf("\nyou stored value of ( x , y ) :(%.2f , %.2f) ",x,y);
    

}