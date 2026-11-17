#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int sum = a + b;
    printf("Sum of a and b : %d\n", sum);

    // Using float and 2.0 ensures decimal accuracy for any numbers
    float avg = (a + b) / 2.0; 
    printf("Avg of a and b : %.2f\n", avg);

    return 0;
}