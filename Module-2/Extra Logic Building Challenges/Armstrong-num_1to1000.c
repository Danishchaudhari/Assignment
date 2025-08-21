#include <stdio.h>
#include <conio.h>  // Optional: Used only if you're using getch() or clrscr()

int main() {
    int num, originalNum, remainder, result, n;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    // Loop from 1 to 1000
    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        result = 0;
        n = 0;

        // Count number of digits
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        // Calculate sum of digits raised to power n (without pow())
        temp = num;
        while (temp != 0) {
            remainder = temp % 10;

            // Manually calculate remainder^n
            int power = 1;
            for (int i = 0; i < n; i++) {
                power *= remainder;
            }

            result += power;
            temp /= 10;
        }

        // Check Armstrong condition
        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
