#include <stdio.h>
#include <stdlib.h>
typedef int Element;
typedef struct ADD
{
    Element data;
    struct ADD *next;
}ADD,*BDD;
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

    A = A->next;

    while (A != NULL)

    {

        printf("%3d", A->data);//打印当前结点数据

        A = A->next;//指向下一个结点

    }

    printf("\n");

}
BDD Getelement(BDD A,int i)
{
    int j=1;
    BDD P;
    P=A->next;
    if(i<0){
        return NULL;
    }
    if(i==0)
    {
        return A;
    }

    while(P&&j<i)
    {
        j++;
        P=P->next;
    }
    return P;
}
void Midinsert (BDD A,int i,Element e)
{
    BDD p,d;
    p=Getelement(A,i-1);
    d=(BDD) malloc(sizeof (ADD));
    d->data=e;
    d->next=p->next;
    p->next=d;

}
bool DDelete(BDD &A,int i)
{
    BDD a,b;
    b=Getelement(A, i-1);
    if(b==NULL)
    {
        return false;
    }
    a=b->next;
    b->next=a->next;
    free(a);
    return true;
}
int main() {
    BDD A,search;
    TailInsert(A);
    search=Getelement(A,2);
    printf("%d\n",search->data);
    Midinsert(A,2,99);
    PrintLists(A);
    DDelete(A,4);
    PrintLists(A);
    return 0;
}
