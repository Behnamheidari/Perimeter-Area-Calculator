// Perimeter & Area Calculator

#include <stdio.h>
#include <conio.h>

int main(void)
{
   float Radius, Perimeter, Area;

   printf("\n\nEnter the radius please : ");
   scanf("%g", &Radius);

   Perimeter = 2 * 3.14 * Radius;
   Area = 3.14 * (Radius * Radius);

   printf("\nThe perimeter is : %g\n", Perimeter);
   printf("\nThe area is : %g\n", Area);
   getch();
   return 0;
}
