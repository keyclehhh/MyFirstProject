#include <stdio.h>
#include <stdlib.h>
//不用递归
typedef int Elment;
typedef struct Binary
{
    Elment data;
    struct Binary *Lchild;
    struct  Binary *Rchild;
}Binary,*Bitree;
int Binary_tree_building(Bitree &L,Elment i)
{
    if(L==NULL)
    {
        L=(Bitree) calloc(1, sizeof(Binary));
        L->data=i;
        return 1;
    }
    Bitree child=L,parent;
    while(child!=NULL)
    {
        parent=child;
        if(i>child->data)
        {
            child=child->Rchild;
        }else if(i<child->data)
        {
            child=child->Lchild;
        }else
            return -1;
    }
    Bitree tree=(Bitree) calloc(1, sizeof(Binary));
    tree->data=i;
    if(i>parent->data)
    {
        parent->Rchild=tree;
    } else if(i<parent->data)
    {
        parent->Lchild=tree;
    }
    return 0;
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
void Middle_order_traversal(Bitree L)
{
    if (NULL!=L)
    {
        Middle_order_traversal(L->Lchild);
        printf("%3d",L->data);
        Middle_order_traversal(L->Rchild);
    }

}
Bitree search_tree(Bitree L,Elment i,Bitree &p)
{
    p=NULL;
    while(L!=NULL&&i!=L->data) {
        p=L;
        if(i>L->data)
        { L=L->Rchild;}
        else if(i<L->data)
        {L=L->Lchild;}
    }
    return L;
}

int main() {
    Bitree L;
    Bitree p;
    Elment i;
    Elment T[6]={30,38,97,74,22,55};
    Binary_tree_construction(L,T);
    Middle_order_traversal(L);
    printf("\n");
    scanf("%d",&i);
    Bitree search=search_tree(L,i,p);
    if(search)
    {
        printf("%d",search->data);
    }
    else
    {
        printf("no find!\n");
    }
    return 0;
}
