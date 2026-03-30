//Problem 1: Simple Interest Calculator
//Problem Statement: A bank wants to calculate simple interest for customers. Write a C program that takes principal, rate, and time as input and calculates the  interest using a function.
#include <stdio.h>
float simpleInterest(float P, float R, float T) {
return (P * R * T) / 100;
}
int main() {
float P, R, T, SI;
printf("Enter Principal: ");
scanf("%f", &P);
printf("Enter Rate: ");
scanf("%f", &R);
printf("Enter Time: ");
scanf("%f", &T);
SI = simpleInterest(P, R, T);
printf("Simple Interest = %.2f\n", SI);
return 0;
}
