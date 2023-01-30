#include <stdio.h>
#include <stdlib.h>
//用递归
typedef int Elment;
typedef struct Binary
{
    Elment data;
    struct Binary *Lchild;
    struct  Binary *Rchild;
}Binary,*Bitree;
int Binary_tree_building(Bitree &L,Elment T)
{
    int i=0;
    if(L==NULL)
    {
        L=(Bitree)malloc(sizeof(Binary));
        L->data=T;
       L->Lchild=L->Rchild=NULL;
        return 1;
    }
    if(T==L->data)
    {
        return  0;
    }
    if(T>L->data)
    {
        return Binary_tree_building(L->Rchild,T);
    }
     else if(T<L->data)
    {
        return Binary_tree_building(L->Lchild,T);
    }

}
void Middle_order_traversal(Bitree L)
{
    if(L!=NULL)
    {
        Middle_order_traversal(L->Lchild);
        printf("%3d",L->data);
        Middle_order_traversal(L->Rchild);
    }

}
void Binary_tree_construction(Bitree &L,Elment T[])
{
    L=NULL;
    int i;
    for(i=0;i<6;i++)
    {
        Binary_tree_building(L,T[i]);
    }
}
int main() {
    Bitree L;
    Bitree p;
    Elment i;
    Elment T[6]={30,38,97,74,22,55};
    Binary_tree_construction(L,T);
    Middle_order_traversal(L);
    printf("\n");
    return 0;
}
