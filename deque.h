#include "mylib.h"

typedef struct dnode {
    int data;
    int size;
    struct dnode *next;
}dnode;

dnode *front;
dnode *rear;

void Create(dnode *);
int isEmpty(dnode *);
void Push(int);
void Enqueue(int);
void Pop(void);
void Dequeue(void);
void Print(void);
size_t SizeOf(dnode *);