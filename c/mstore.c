/*This is a multstore func, which store 3 refs in 3 register or memory
P.114 3.2.2*/

long mult2(long, long);

void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    *dest = t;
}






