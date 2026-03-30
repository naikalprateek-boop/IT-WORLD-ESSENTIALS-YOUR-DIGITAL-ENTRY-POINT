//Problem 2: Student Result System
//Problem Statement: A student management system needs to calculate total and average marks of 5 subjects.
#include <stdio.h>
int calculateTotal(int marks[]) {
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    return sum;
}
float calculatePercentage(int total) {
    return total / 5.0;
}
int main() {
    int marks[5], total;
    float percentage;
  printf("Enter marks of 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
 total = calculateTotal(marks);
    percentage = calculatePercentage(total);
 printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", percentage);
  return 0;
}
