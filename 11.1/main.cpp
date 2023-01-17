#include <stdio.h>
#include <stdlib.h>
//单链表头插法
typedef int Elemnet;
typedef struct ARR
{
    struct ARR *link;
    Elemnet data;
}ARR,*BRR;
void Chain_delete(BRR &A)
{
    ARR *p;
    BRR P,K;
    int i,j;
    A=(BRR)malloc(sizeof (ARR ));
    A->link=NULL;
    scanf("%d",&i);

    while(i !=999)
    {
        p= (ARR *)malloc(sizeof (ARR ));
        p->data=i;
        p->link=A->link;
        A->link=p;
        scanf("%d",&i);
    }
    printf("--------------\n");
    scanf("%d",&j);
    P= (BRR)malloc(sizeof (ARR));
    K=A;
    while(K->data !=j)
    {
        P=K;
        K=K->link;
    }
    P->link=K->link;



}



void print(BRR A)
{
    A= A->link;
    while (A !=NULL)
    {
        printf("%3d",A->data);
        A=A->link;
    }
    printf("\n");
}


int main()
{
    BRR A;
    Chain_delete(A);
    print(A);
    return 0;
}