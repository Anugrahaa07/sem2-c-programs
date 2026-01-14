#include<stdio.h>
void main() 
{
    float l, b, h, volume;
    
    printf("Enter the required length: ");
    scanf("%f", &l);
    printf("Enter the required breadth: ");
    scanf("%f", &b);
    printf("Enter the required height: ");
    scanf("%f", &h);
    
    volume = l * b * h;
    
    printf("The volume of the cuboid is %f", volume);

}