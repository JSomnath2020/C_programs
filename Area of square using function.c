#include <stdio.h>
float calculateAreaOfSquare(float side) {
return side * side;
}
int main() {
float squareSide;
printf("Enter the length of the side of the square: ");
scanf("%f", &squareSide);
printf("The area of the square is: %.2f\n", calculateAreaOfSquare(squareSide));
return 0;
}
