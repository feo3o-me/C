#include <stdio.h>

/*
Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.
*/

// returns x with the n bits that begin at position p set to the rightmost n bits of y


unsigned setbits(unsigned x, int p, int n, unsigned y){

    // Descobrir os N numeros finais de Y
    unsigned rightmost = ~(~0 << n); // 0000 0000 => 1111 1111 => 1111 1000 = 0000 0111
    rightmost = rightmost & y; //  = 0000 0101
    unsigned new_digits = rightmost << (p - n); // 1010 0000

    // Bits n em X = 0
    unsigned x_clear = ~(~0 << n); // 0000 0000 => 1111 1111 => 1111 1000 = 0000 0111
    x_clear = ~(x_clear << (p - n)); // 0000 0111 => 1110 0000 = 1111 1111 0001 1111
    x = x & x_clear; // x = 0001 0000
    // 1001 0000 &
    // 0001 1111
    // = 0001 0000

    return x | new_digits;

    // 1010 0000 |
    // 0001 0000
    // = 1011 0000
}

void main(){
    unsigned x = 144; // 0000 0000 1001 0000
    unsigned y = 237; // 0000 0000 1110 1101

    int position = 8;
    int n_bits = 3;

    printf("%d\n", setbits(x, position, n_bits, y));
}
