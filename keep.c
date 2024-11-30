#include <stdio.h>  

// Function to check if a number is prime  
int isPrime(int num) {  
    if (num <= 1) return 0;  
    for (int i = 2; i * i <= num; i++) {  
        if (num % i == 0) return 0;  
    }  
    return 1;  
}  

int main() {  
    printf("\n=== Welcome to Number Analyzer ===\n");  
    
    int number;  
    printf("\nEnter a number: ");  
    scanf("%d", &number);  
    
    // Check if number is positive/negative  
    if (number > 0) {  
        printf("%d is positive\n", number);  
    } else if (number < 0) {  
        printf("%d is negative\n", number);  
    } else {  
        printf("You entered zero\n");  
    }  
    
    // Check if number is prime  
    if (number > 0) {  
        if (isPrime(number)) {  
            printf("%d is a prime number!\n", number);  
        } else {  
            printf("%d is not a prime number\n", number);  
        }  
    }  
    
    printf("\nThank you for using Number Analyzer!\n");  
    return 0;  
}
