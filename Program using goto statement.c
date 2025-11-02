#include <stdio.h>
int main() {
int num;
start:
printf("Enter a positive number (0 to stop): ");
scanf("%d", &num);
if (num > 0) {
printf("You entered: %d\n", num);
goto start; // Go back to input again
}
printf("Program ended.\n");
return 0;
}
