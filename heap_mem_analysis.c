#include <stdio.h>
#include <stdlib.h>
#include "hacking.h"

int main(int argc, char *argv[]) {
    char *char_ptr; 
    int *int_ptr;
    int mem_size;

    if (argc < 2)
        mem_size = 50;
    else
        mem_size = atoi(argv[1]);

    printf("[+] Allocating %d bytes of memory on heap for char_ptr\n", mem_size);
    char_ptr = (char *) ec_malloc(mem_size);

    strcpy(char_ptr, "This is located on the heap!");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

    printf("[+] Allocating 12 bytes of memory on the heap for int_ptr\n");
    int_ptr = (int *) ec_malloc(12);

    *int_ptr = 31337;
    printf("int_ptr (%p) --> %d\n", int_ptr, *int_ptr);

    printf("[-] Freeing char_ptr's heap memory\n");
    free(char_ptr);

    printf("[+] Allocating another 15 bytes for char_ptr\n");
    char_ptr = (char *) ec_malloc(15);

    strcpy(char_ptr, "new memory");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

    printf("[-] Freeing int_ptr's heap memory\n");
    free(int_ptr);
    printf("[-] Freeing char_ptr's heap memory\n");
    free(char_ptr);
}
