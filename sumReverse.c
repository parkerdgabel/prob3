#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0, residue;
    while (num != 0) {
        residue = num % 10;
        reversed = reversed*10 + residue;
        num /= 10;
    }
    return reversed;
}

int main() {
    int inNum;
    while (scanf("%d", &inNum) != EOF) {
        if (inNum < 0) {
            fprintf(stderr, "Input must be a positive integer");
            return 1;
        }
        printf("%d\n", inNum + reverseNumber(inNum));
    }
    return 0;
}