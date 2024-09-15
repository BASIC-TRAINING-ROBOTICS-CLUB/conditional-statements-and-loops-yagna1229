#include<stdio.h>
#include "library.h"

int main() 
{
    int binary [] = {1, 0, 1, 1}; // Example binary number
    int n = sizeof(binary) / sizeof (binary[0]);
    binary_to_gray (binary, n);
    return 0;
}