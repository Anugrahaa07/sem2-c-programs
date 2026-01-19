#include<stdio.h>
#include<math.h>
void main()
{
    float a,u,t,s,area;

    printf("Enter the values for accleration(a),initial velocity(u) and time(t): ");
    scanf(" %f %f %f",&a,&u,&t);

    s = (u*t) + ((1.0/2.0) * a * pow(t,2));

    printf("The distance travelled by the car is %f Km",s);
}