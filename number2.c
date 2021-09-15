#include <stdio.h>

int paddockAreaCalculator(int lengthOfPaddock, int widthOfPaddock);

int main()
{

  printf("---- Farmer's Land Program ----\n\n");
  // Paddock Length and Width
  int lengthOfPaddock, widthOfPaddock;

  // Areas
  int smallRectangularPaddockArea, totalPaddocksArea;

  // Get Inputs Width and Length
  printf("Enter the Length and Width of the Small Paddock\n");
  printf("Length: ");
  scanf("%d", &lengthOfPaddock);

  printf("Width: ");
  scanf("%d", &widthOfPaddock);

  // calculate Area Of the Small Paddock
  smallRectangularPaddockArea = paddockAreaCalculator(lengthOfPaddock, widthOfPaddock);

  printf("\n----------------------------------\n");

  printf("Area of each Small Paddock is: %d\n", smallRectangularPaddockArea);

  totalPaddocksArea = smallRectangularPaddockArea * 100;
  printf("Total Area  for 100 paddocks is: %d\n\n", totalPaddocksArea);

  return 0;
}

// This Calculates the Area of each Small Paddock
int paddockAreaCalculator(int lengthOfPaddock, int widthOfPaddock)
{
  int area = lengthOfPaddock * widthOfPaddock;
  return area;
}