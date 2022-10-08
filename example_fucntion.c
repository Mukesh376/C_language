#include "structures.h"
#include<stdio.h>
// structure reference passed inside a fucntion
void exmple_func(Car* exp_struct)
{
    printf("%s\n",exp_struct->name);
}