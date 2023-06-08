/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.*/
#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("enter radius of circle");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("\"Area of circle is %f having the radius %d\"\n ",a,r);
}
