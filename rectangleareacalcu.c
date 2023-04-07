#include <stdio.h>

int main() {
   float length, width, area;

   printf("**************************************************************\n");
   printf("*                  RECTANGLE AREA CALCULATOR                    *\n");
   printf("**************************************************************\n\n");

   printf("Enter length of rectangle: ");
   scanf("%f", &length);

   printf("Enter width of rectangle: ");
   scanf("%f", &width);

   area = length * width;

   printf("\n**************************************************************\n");
   printf("* The area of the rectangle with length %.2f and width %.2f is: %.2f *\n", length, width, area);
   printf("**************************************************************\n");

   return 0;
}

