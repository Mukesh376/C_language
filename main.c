#include <stdio.h>
#include "add.h"
#include "structures.h"

int mul(int a, int (*ptr)(int,int));
void change_array(int *ptr,int index);

// structure reference passed inside a fucntion
void exmple_func(Car*);

int main()
{
    // declration of function pointer
    int (*ptr_func)(int,int);
    int ans_add;
    int ans_mul;
    int arr[5] = {1,2,3,4,5};
    int i;
    int number = 5;
    
    //strcuture instance and intialization
    Car tata = {"Nano",&number,"petrol",{{1,"basic"},{2,"advanced"}},add};
    
    //1.pointer to a structure 
    Car *car1 = &tata;
    
    //accessing structure elements
    printf("%s\n",car1->name);
    printf("%d\n",car1->var1[0].version);
    
    // assinging function address to pointer
    ptr_func = add;
    
    // using function pointer
    ans_add = ptr_func(6,5); 
    printf("%d\n",ans_add);
    
    //using function pointer by passing into other fucntion as arguments
    ans_mul = mul(6,add);
    printf("%d\n",ans_mul);
    change_array(arr,3);
    
    //passing arrays to function as arguemnts
    printf("%d\n",arr[3]);
    
    // access of pointers inside an structure
    printf("%d\n",*(tata.seat));
    
    // access of pointer inside a pointer to a strcutre 
    printf("%d\n",*(car1->seat));
    
    // fucntion pointer inside structure 
    printf("%d\n", car1->ptr_func1(5,6));
    
    // structure reference passed inside a fucntion
    exmple_func(&tata);
    
    
    return 0;
}

