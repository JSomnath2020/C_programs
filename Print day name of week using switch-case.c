#include <stdio.h>
int main() {
int day_number;
printf("Enter a day number (1 for Monday, 7 for Sunday): ");
scanf("%d", &day_number);
switch (day_number) {
case 1: printf("Day %d is Monday.\n", day_number); break;
case 2: printf("Day %d is Tuesday.\n", day_number); break;
case 3: printf("Day %d is Wednesday.\n", day_number); break;
case 4: printf("Day %d is Thursday.\n", day_number); break;
case 5: printf("Day %d is Friday.\n", day_number); break;
case 6: printf("Day %d is Saturday.\n", day_number); break;
case 7: printf("Day %d is Sunday.\n", day_number); break;
default: printf("Invalid input. Please enter a number between 1 and 7.\n");
}
return 0;
}
