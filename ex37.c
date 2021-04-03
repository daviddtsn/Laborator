#include <stdio.h>
#include <stdlib.h>

int vvod(double*** a, long** b) {
    int n, m, i, j;
    scanf(" %d %d ", &n, &m);  *a = (double**)calloc(n, sizeof(double*));
    *b = (long*)calloc(n, sizeof(long));
    for (i = 0; i <= n; i++) *a[i] = (double*)calloc(m, sizeof(double));
}

int main() {
    int vvod(double***, long**);
    double** a;     /* a[n][m]   */
    long* b;        /* b[n]      */
    vvod(&a, &b); /* */
}
