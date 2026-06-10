#include <stdio.h>

/* ex 1-6 verify that the expression getchar() != EOF is 0 or 1 */


/* since this reaches the end of the file, it is 0; c=getchar()!= EOF; becomes zero to remedy and get one use c=(getchar()!= EOF) */


/*

int main() {
    int c;

    c = getchar() != EOF;
    putchar(c);
}

*/


/* print the value of EOF */
int main() {
    int x = EOF;
    printf("%3d\n", x);
}