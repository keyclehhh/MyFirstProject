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
void Deletion_of_binary_tree(Bitree &root,Elment K)
{
    if(root==NULL)//如果为空树直接返回
    {
        return ;
    }
    if(K>root->data)
    {
        Deletion_of_binary_tree(root->Rchild,K);
    }else if(K<root->data)
    {
        Deletion_of_binary_tree(root->Lchild,K);
    }else//找到要删的数
    {
        //为了把要删的数给free掉
        if (root->Lchild==NULL)//如果左树为空
        {
            Bitree product = root;
            root = root->Rchild;
            free(product);
        } else if (root->Rchild==NULL)//如果右树为空
        {
            Bitree product = root;
            root = root->Lchild;
            free(product);
        } else//如果左右树都不为空，找左树的最右树当替代
        {
            Bitree product  = root->Lchild;
            while (product->Rchild!=NULL);
            {
                product = product->Rchild;
            }
            root->data = product->data;
            Deletion_of_binary_tree(root->Lchild, product->data);
//            }else if(root->Lchild!=NULL)
//            {
//                product=root->Lchild;
//                while(product->Rchild!=NULL)
//                {
//                    product=product->Lchild;
//                }
//                root->data=product->data;
//                Deletion_of_binary_tree(root->Lchild,product->data);
//        }


        }
    }

}
int main()
{
    Bitree L;
    Bitree p;
    Elment i,m;
    Elment T[6]={30,38,97,74,22,55};
    Binary_tree_construction(L,T);
    Middle_order_traversal(L);
    printf("\n");
    Deletion_of_binary_tree(L,55);
    Middle_order_traversal(L);
    return 0;}






