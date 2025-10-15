#include<stdio.h>
int main(){

int physics, chemistry , maths , average;

printf("Enter physics marks: ");
scanf("%d", &physics);

printf("Enter chemistry marks: ");
scanf("%d", &chemistry);


printf("Enter maths marks: ");
scanf("%d", &maths);

average: (physics + chemistry + maths )/3;
printf("Average = %.2d\n", average);

(average >= 50) ? printf("Eligible for admission"): printf("Not eligible for admission");

return 0;}
