#include <stdio.h>
#include "../inc/input.h"
#include "../inc/calcu.h"

int main(void)
{
    int a,b,res;
    char op;
    input_nums(&a,&b);
    op = '+';
    res = calcu(a,b,op);
    printf("%d %c %d = %d\n",a,op,b,res);
    return 0;
}