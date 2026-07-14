#include<stdio.h>
#include<math.h>

int main() 
{
    double radius = 0.0;
    double area = 0.0; 
    double surface_area = 0.0;
    const double pi = 3.14159; // Define the value of pi
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius); // Use %lf for double input

    area = pi * pow(radius, 2); // Calculate the area of the circle

    printf("The area of the circle is: %lf", area);
    
    surface_area = 2 * pi * radius; // Calculate the surface area of the circle
    
    printf("The surface area of the circle is: %lf", surface_area);
    
    return 0;
}