#include "mylib.h"
#include "deque1.h"



int main(void) {
    struct dnode *deque;
    deque = malloc(sizeof(dnode));
    Create(deque);   
    Enqueue(43);
    Push(12);
    Push(14);
    Enqueue(44);
    Pop();
    Enqueue(45);
    Enqueue(46);
    Print();
    int a = isEmpty(deque);
    if(a==1) {
        printf("\nThe deque is empty.\n");
    }
    else {
        printf("\nThe deque is not empty.\n");
    }
    int b = SizeOf(deque);
    printf("\nThe size of the deque is : %d\n", b);
    
}