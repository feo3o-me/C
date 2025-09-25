#include <stdio.h>

/*
Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
*/

unsigned short invert(unsigned x, int position, int n){
    // Encontrar N
    unsigned short flip = (~(~0 << n)) << (position - n); // 0000 0000 0111 0000
    x = x ^ flip;                                      // 0000 0000 1110 1010 = 0000 0000 1001 1010
    return x;
}                                                           

void main(){
    unsigned short x = 234; // 0000 0000 1110 1010
    int position = 7;
    int n = 3;

    printf("%d\n", invert(x, position, n));
}