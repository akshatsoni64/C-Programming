#include <stdio.h>

int main() {
    // Write C code here
    int a = 10;
    int *p, **dp, ***tp, ****fp;
    
    p = &a;
    dp = &p;

    // Working Code, but useless for now! :)
    // tp = &dp;
    // fp = &tp;    
    // printf("Value of Triple Pointer: %d\n\n", ***tp);
    // printf("Value of Quad Pointer: %d\n\n", ****fp);
    
    printf("Address of A: %p\n", &a);
    printf("Address of A through Pointer P: %p\n\n", p);
    printf("Value of A: %d\n", a);
    
    printf("Address of Pointer P: %p\n", &p);
    printf("Address of Pointer P through Double Pointer: %p\n\n", dp);
    printf("Value of Pointer P: %d\n", *p);
    
    printf("Address of Pointer DP: %p\n", &dp);
    printf("Value of Double Pointer: %d\n\n", **dp);
    
    return 0;
}