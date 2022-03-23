#include "mylib.h"
#include "deque.h"

void Create(dnode *deque) {
    front=NULL;
    rear=NULL;
}

int isEmpty(dnode *deque) {
    return (front == NULL);
}

size_t SizeOf(dnode *deque) {
    return abs(rear-front-2);
}

void Push(int element) {
    dnode *point=(dnode *)malloc(sizeof(dnode));
    point->data=element;
    point->size++;
    if(front==NULL) {
        point->next=NULL;
        front = point;
        rear=point;
    }
    else {
        point->next=front;
        front = point;
    }
}


void Enqueue(int element) {
    dnode *point=(dnode *)malloc(sizeof(dnode));
    point->data=element;
    //point->size++;
    if(front==NULL) {
        front = point;
        rear=point;
    }
    else {
        rear->next=point;
        rear=point;
    }
}

void Pop(void){
    if(front==NULL){
        puts("The deque is empty!");
    }
    else {
        if(front->next==NULL){
            front = NULL;
            rear = NULL;
        }
        else {
            front=front->next;
        }
    rear->size--;       
    }
}


void Dequeue(void){
    if(front==NULL){
        puts("The deque is empty!");
    }
else {
    dnode *temporary = front;
    if(front==rear) {
        front=NULL;
        rear= NULL;
        printf("%d\n",temporary->data);
    }
    else {
        while((temporary->next)!=NULL) {
            temporary=temporary->next;
        }
        printf("%d\n",temporary->data);
        rear = temporary;
        rear->next=NULL;
    }
    }
}


void Print(void) {
    dnode *temporary= front;
    if(front!=NULL) {
        while((temporary->next)!=NULL) {
            printf("%d <=> ",temporary->data);
            temporary=temporary->next;
        }
        printf("%d  ",temporary->data);
        printf("\n");
    }
    else {
        printf("The deque is empty.\n");
    }
}