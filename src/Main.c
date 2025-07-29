#include "C:/Wichtig/System/Static/Container/Heap.h"
#include <stdlib.h>

int main(int argc, char const *argv[]){
    void* Memory = malloc(1000);
    
    Heap h = Heap_New(Memory,1000);
    void* Block1 = Block_Alloc(&h,89);
    void* Block2 = Block_Alloc(&h,1);
    void* Block3 = Block_Alloc(&h,3);
    void* Block4 = Block_Alloc(&h,34);
    void* Block5 = Block_Alloc(&h,5);
    void* Block6 = Block_Alloc(&h,6);

    printf("1 ----------\n");
    Heap_Print(&h);
    printf("----------\n");

    Block_Free(&h,Block4);
    void* Block7 = Block_Alloc(&h,10);
    void* Block8 = Block_Alloc(&h,8);
    void* Block9 = Block_Alloc(&h,20);

    printf("2 ----------\n");
    Heap_Print(&h);
    printf("----------\n");

    free(Memory);

    return 0;
}