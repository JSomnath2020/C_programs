#include <stdio.h>
int main() {
int num1 = 20, num2 = 5;
int *ptr1 = &num1;
int *ptr2 = &num2;
int sum = *ptr1 + *ptr2;
int difference = *ptr1 - *ptr2;
printf("Number 1: %d\n", *ptr1);
printf("Number 2: %d\n", *ptr2);
printf("Sum (using pointers): %d\n", sum);
printf("Difference (using pointers): %d\n", difference);
return 0;
}
