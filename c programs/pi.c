#include<stdio.h>
#define PI 3.14
void main()
 {
    float r, R, a, p, v;
    
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    
    a = PI * r * r;
    p = 2 * PI * r;
    printf("The area of the circle is %f\n", a);
    printf("The perimeter of the circle is %f\n", p);
    
    printf("Enter the radius of sphere: ");
    scanf("%f", &R);

    v = (4/3) * PI * R * R * R;
    printf("The volume of the sphere is %f", v);

}