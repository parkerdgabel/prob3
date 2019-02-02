/*
* File: sumReverse.c
* Author: Parker Gabel
* Purpose: Takes a positive integer and adds it to its reverse.
*/
#include <stdio.h>

/*
 * Reverses the given positive number
 * params: num          positive integer
 * returns:             The reversed number
 */
int reverseNumber(int num) {
    int reversed = 0, residue;
    while (num != 0) {
        residue = num % 10;
        reversed = reversed * 10 + residue;
        num /= 10;
    }
    return reversed;
}

/*
 * Prints the reverse sum for all positive numbers in the input stream
 */
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
        fprintf(stderr, "Error: Non-integer value in input\n");
        return 1;
    }
    return 0;
}