#include <stdio.h>
#include <stdlib.h>
typedef int Element;
typedef struct Btree
{
    Element data;
    struct Btree *Lchild, *Rchild;
}Btree,*BNode;
int Building_a_binary_tree(BNode &L,Element i)
{

    if(L==NULL)
    {
        L=(BNode)malloc(sizeof(Btree));
        L->data=i;
        L->Lchild=L->Rchild=NULL;
        return 1;
    }
    if(i==L->data)
    {
        return 0;
    }
    if(i>L->data)
    {
         return Building_a_binary_tree(L->Rchild,i);
    }else if(i<L->data)
    {
        return Building_a_binary_tree(L->Lchild,i);
    }
}
void BuildTree(BNode &L)
{
    L=NULL;
    int m;
    for( int i=0;i<10;i++)
    {
        scanf("%d",&m);
        Building_a_binary_tree(L,m);
    }
}
int i=0;
void Middle_order_traversal(BNode L, int *T)
{
    if(L!=NULL)
    {
        Middle_order_traversal(L->Lchild,T);
        printf("%3d",L->data);
        T[i]=L->data;
        i++;
        Middle_order_traversal(L->Rchild,T);
    }
}
int Half_Find(int *T, int i)
{
    int low=0;
    int high=9;
    int mid=(low+high)/2;
    while (i!=T[mid]){
        if(i>T[mid])
        {
            low=mid+1;
            mid=(low+high)/2;
        }else if(i<T[mid])
        {
            high=mid-1;
            mid=(low+high)/2;
        }
    }
    return mid;
}
int main() {
    BNode L;
    Element T[10];
    BuildTree(L);
    Middle_order_traversal(L,T);
//    Build_Arr(T,10,L);
    printf("\n");
    int pos= Half_Find(T,21);
    if(pos)
    {
        printf("%3d",pos);
    }
    return 0;
}
