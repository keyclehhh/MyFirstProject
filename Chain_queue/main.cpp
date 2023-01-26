#include <stdio.h>
#include <stdlib.h>
typedef int Type;
typedef struct Queue
{
    Type data;
    struct Queue *next;
}Queue;
typedef struct {
    Queue *head,*tail;
}pnode;
void init_queue(pnode &a)
{
    a.tail=a.head=(Queue*) malloc(sizeof(Queue));
    a.head->next=NULL;
}
bool is_empty(pnode A)
{
    return A.head==A.tail;
}
void Equeue(pnode &A,Type i)
{
    Queue *p=(Queue *)malloc(sizeof(Queue));
    p->data=i;
    p->next=NULL;
    A.tail->next=p;
    A.tail=p;
}
bool outqueue(pnode &a,Type &i)
{
    if(a.tail==a.head)
    {
        return false;
    }
    Queue *p=a.head->next;
    i=p->data;
    a.head->next=p->next;
    if(p==a.tail)
    {
        a.tail==a.head;
    }
    free(p);
    return true;
}
int main() {
    pnode A;
    int m;
    bool ret;
    init_queue(A);
    is_empty(A);
    Equeue(A,1);
    Equeue(A,2);
    Equeue(A,3);
    Equeue(A,4);
    Equeue(A,5);
    ret=outqueue(A,m);
    if(ret)
    {
        printf("%d\n",m);
    }
    return 0;
}
