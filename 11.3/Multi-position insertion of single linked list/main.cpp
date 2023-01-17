#include <stdio.h>
#include <stdlib.h>
//单链表的尾插法；
typedef int Element;
typedef struct ADD
{
    Element data;
    struct ADD *link;
}ADD,*BDD;
void Tail_interpolation(BDD &B)
{
    BDD P;
    int i,j,k;
    B= (BDD)malloc(sizeof (ADD));
    B->link=NULL;
    scanf("%d",&i);
    while(i !=999)
    {
        P=(BDD)malloc(sizeof(ADD));
        P->data=i;
        P->link=B->link;
        B->link=P;
        scanf("%d",&i);
    }
}
void Print(BDD B)
{
    B=B->link;
    while(B !=NULL)
    {
        printf("%3d",B->data);
        B=B->link;
    }
    printf("\n");
}

int main() {
   BDD B;
    Tail_interpolation(B);
    Print(B);
    return 0;
}
