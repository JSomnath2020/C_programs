#include <stdio.h>
int main() {
int roll[10];
char name[10][50];
int i;
printf("Enter roll number and name of 10 students:\n");
for(i = 0; i < 10; i++) {
printf("Student %d roll number: ", i+1);
scanf("%d", &roll[i]);
printf("Student %d name: ", i+1);
scanf("%s", name[i]);
}
printf("\nRoll No\tName\n");
for(i = 0; i < 10; i++) {
printf("%d\t%s\n", roll[i], name[i]);
}
return 0;
}
