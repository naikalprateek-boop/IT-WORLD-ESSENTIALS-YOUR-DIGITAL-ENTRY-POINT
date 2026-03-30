//Problem 5: Prime Number Checker
Problem Statement: A teacher wants to identify whether a given number is a prime number. Write a C program that takes a number as input and checks whether it is prime using a function.
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1) {
        return false;    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;   }  }
    return true; 
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
return 0;
}
