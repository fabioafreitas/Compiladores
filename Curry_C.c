#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000000

/*
*   Maquina KS
*/

//String que deve ser usada:
static char entrada[N] = "(S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(((S(C(BBI)(SII))(C(BBI)(SII))(KK))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K)\0";
static char saida[N];

//Procedimento que recebe duas vari�veis, uma que aponta para
//um array e outra que aponta para um inteiro com a posi��o do
//array a ser usada. O procedimento termina quando atinge a
//primeira posi��o depois dos par�nteses.
void casa_parenteses(char* array1, int* p) {
    int paren = 1; // inicialmente temos 1 parenteses, mas podemos achar mais
    int c = *p; // representa a posi��o do fecha parenteses, inicialmente 1
    while (paren != 0) { // quando for zero, tiramos os parenteses
        switch (array1[c]) {
            case '(':
                paren++; // achamos mais um parenteses
                c++;	 // 
                break;
            case ')':
                paren--;
                c++;
                break;
            default:
                c++;
        }
    }
    *p = c;
}

//Procedimento que recebe uma vari�vel que aponta para
//um array e remove os par�nteses da primeira posi��o
//do array.
void recebeParenteses(char* array1) {
    int c = 1;
    casa_parenteses(array1,&c); // indica a posi��o do array que casamos todos os parenteses atuais
    
    int i;
    for(i = 0; i < c-2; i++) {
        array1[i] = array1[i+1];
    }
    array1[i] = array1[i+2];
    while(array1[i+2] != '\0') {
        array1[i] = array1[i+2];
        i++;
    }
    array1[i] = '\0';
}

//Procedimento que recebe duas vari�veis, uma que aponta para
//um array e outra que aponta para um inteiro com a posi��o do
//array a ser usada. O procedimento termina quando atinge a
//primeira posi��o depois do argumento.
void acha_argumento(char* array1, int* p) {
    int c = *p;
    if (array1[c] == '(') {
        c++;
        casa_parenteses(array1,&c);
    } else {
        c++;
    }
    *p = c;
}

//Procedimento que recebe duas vari�veis que apontam para
//dois arrays e executa a regra do combinador K: K a b => a,
//copiando os argumentos do array1 para o array2.
void reduzK(char* array1, char* array2) {
    int A, nA;
    int n = 1;
	
    A = n;
    acha_argumento(array1,&n);
    nA = n-1;
    acha_argumento(array1,&n);

    int k = 0;
    int i;

    for (i = A; i <= nA; i++) {
        array2[k] = array1[i];
        k++;
    }

    for (n = n; array1[n] != '\0'; n++) {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = '\0';
}

//Procedimento que recebe duas vari�veis que apontam para
//dois arrays e executa a regra do combinador S: S a b c => a c ( b c ),
//copiando os argumentos do array1 para o array2.
void reduzS(char* array1, char* array2) {
    int A, nA;
    int B, nB;
    int C, nC;
    int n = 1;
	
    A = n;
    acha_argumento(array1,&n);
    nA = n-1;
    B = n;
    acha_argumento(array1,&n);
    nB = n-1;
    C = n;
    acha_argumento(array1,&n);
    nC = n-1;

    int k = 0;
    int i;

    for (i = A; i <= nA; i++) {
        array2[k] = array1[i];
        k++;
    }
    for (i = C; i <= nC; i++) {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = '(';
    k++;

    for (i = B; i <= nB; i++) {
        array2[k] = array1[i];
        k++;
    }
    for (i = C; i <= nC; i++) {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = ')';
    k++;

    for (n = n; array1[n] != '\0'; n++) {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = '\0';
}

//Procedimento que recebe duas variáveis que apontam para
//dois arrays e executa a regra do combinador I: I a => a,
//copiando os argumentos do array1 para o array2.
void reduzI(char* array1, char* array2) {
    int k = 0;
    int i;
    for (i = 1; array1[i] != '\0'; i++) {
        array2[k] = array1[i];
        k++;
    }
    array2[k] = '\0';
}


void reduzB(char* array1, char* array2) {
    int A, nA;
    int B, nB;
    int C, nC;
    int n = 1;
	
    A = n;
    acha_argumento(array1,&n);
    nA = n-1;
    B = n;
    acha_argumento(array1,&n);
    nB = n-1;
    C = n;
    acha_argumento(array1,&n);
    nC = n-1;

    int k = 0;
    int i;

    for (i = A; i <= nA; i++) {
        array2[k] = array1[i];
        k++;
    }
    
    array2[k] = '(';
    k++;

    for (i = B; i <= nB; i++) {
        array2[k] = array1[i];
        k++;
    }
    for (i = C; i <= nC; i++) {
        array2[k] = array1[i];
        k++;
    }

    array2[k] = ')';
    k++;

    for (n = n; array1[n] != '\0'; n++) {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = '\0';
}

void reduzC(char* array1, char* array2) {
    int A, nA;
    int B, nB;
    int C, nC;
    int n = 1;
	
    A = n;
    acha_argumento(array1,&n);
    nA = n-1;
    B = n;
    acha_argumento(array1,&n);
    nB = n-1;
    C = n;
    acha_argumento(array1,&n);
    nC = n-1;

    int k = 0;
    int i;

    for (i = A; i <= nA; i++) {
        array2[k] = array1[i];
        k++;
    }

    for (i = C; i <= nC; i++) {
        array2[k] = array1[i];
        k++;
    }

	for (i = B; i <= nB; i++) {
        array2[k] = array1[i];
        k++;
    }

    for (n = n; array1[n] != '\0'; n++) {
        array2[k] = array1[n];
        k++;
    }

    array2[k] = '\0';   
}

int main() {
	
    char* array1 = entrada; // array que as checagens ocorrem
    char* array2 = saida;   // array auxiliar que recebe o novo array atual
    char* array3;			// variavel auxiliar para passar o array2 (novo array) para o array1
    
    
    while (array1[1] != '\0') {
        switch (array1[0]) {
            case '(':
                recebeParenteses(array1);
                array2[0] = 'X';
                break;
			case 'S':
                reduzS(array1,array2);
                break;
			case 'K':
                reduzK(array1,array2);
                break;
            case 'I':
                reduzI(array1,array2);
                break;
            default:
                break;
        }
        
        array3 = array1;
        array1 = array2;
        array2 = array3;
    }

    int i;
    for (i = 0; array1[i] != '\0'; i++) {
        printf("%c", array1[i]);
    }
    printf("\n");

    printf("Tempo = %lf", (double)(clock()/CLOCKS_PER_SEC));

    return 0;
}

