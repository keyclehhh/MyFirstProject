#include <stdio.h>
#include <stdlib.h>
//单链表头插法
typedef int Elemnet;
typedef struct ARR
{
    struct ARR *link;
    Elemnet data;
}ARR,*BRR;
void Chain_insert(BRR &A)
{
    ARR *p;
    int i;
    A=(BRR)malloc(sizeof (ARR ));//malloc(size())->  Never use (BRR) or (ARR*)
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
    Chain_insert(A);
    print(A);
    return 0;
}
