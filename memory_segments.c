#include <stdio.h>
#include "hacking.h"

int global_var;

int global_initialized_var = 5;

void function() {
    int stack_var;
    printf("the function's stack_var is @(0x%08x)\n", &stack_var);
}

int main() {
    int stack_var;
    static int static_initialized_var = 5;
    static int static_var;
    int *heap_var_ptr;

    heap_var_ptr = (int *) ec_malloc(4);

    //these are in data segment
    printf("global_initialized_var is @ address 0x%08x\n", &global_initialized_var);
    printf("static_initialized_var is @ address 0x%08x\n", &static_initialized_var);

    //These are in bss segment
    printf("static_var is @ address 0x%08x\n", &stack_var);
    printf("global_var is @ address 0x%08x\n", &global_var);


    //this is in the heap segment
    
}
