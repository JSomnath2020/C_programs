#include<stdio.h>
int main() {
int a[10], i, j, n, t;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for(i=0; i<n; i++) scanf("%d", &a[i]);
for(j=0; j<(n-1); j++) {
for(i=0; i<n-1; i++) {
if(a[i+1] < a[i]) {
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
}
printf("\nAscending Order: ");
for(i=0; i<n; i++) printf("%d ", a[i]);
printf("\nDescending Order: ");
for(i=n-1; i>=0; i--) printf("%d ", a[i]);
return 0;
}
