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
    int inNum, retVal;
    while ((retVal = scanf("%d", &inNum)) > 0) {
        if (inNum < 0) {
            fprintf(stderr, "Error: input value %d is not positive\n", inNum);
            continue;
        }
        printf("%d\n", inNum + reverseNumber(inNum));
    }
    if (retVal == 0) {
        fprintf(stderr, "Error: Non-integer value in input");
        return 1;
    }
    return 0;
}