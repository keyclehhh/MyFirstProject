#include <stdio.h>
#include <stdlib.h>
typedef int Element;
typedef struct ADD
{
    Element data;
    struct ADD *next;
}ADD,*BDD;
void  HeadInsert(BDD &A)
{
    BDD p;
    int i;
    A=(BDD) malloc(sizeof(ADD));
    A->next=NULL;
    scanf("%d",&i);
    while(i!=9999)
    {
        p=(BDD) malloc(sizeof(ADD));
        p->data=i;
        p->next=A->next;
        A->next=p;
        scanf("%d",&i);
    }

}
void PrintList(BDD A)

{

    A=A->next;

    while(A!=NULL)

    {

        printf("%d",A->data);//打印当前结点数据

        A=A->next;//指向下一个结点

        if(A!=NULL)

        {

            printf(" ");

        }

    }

    printf("\n");

}
void TailInsert (BDD &A)
{
    A=(BDD) malloc(sizeof (ADD));
    BDD p,r=A;
    int i;
    scanf("%d",&i);
    while(i!=9999)
    {
        p=(BDD) malloc((sizeof(ADD)));
        p->data=i;
        r->next=p;
        r=p;
        scanf("%d",&i);
    }
    r->next=NULL;
}
void PrintLists(BDD A)

{

    A=A->next;

    while(A!=NULL)

    {

        printf("%d",A->data);//打印当前结点数据

        A=A->next;//指向下一个结点

        if(A!=NULL)

        {

            printf(" ");

        }

    }

    printf("\n");

}

int main() {
    BDD A;
    HeadInsert(A);
    PrintList(A);
    TailInsert(A);
    PrintLists(A);
    return 0;
}
