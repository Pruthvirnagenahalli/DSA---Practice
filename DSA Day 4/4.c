//poiners in C

#include<stdio.h>
void main()
{
    
    int c;
    int* pc;
    c = 5;
    pc = &c;
    *pc = 1;
    print("%d", *pc);
    printf("%d", c);
}