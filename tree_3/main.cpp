#include "headtree.h"
void Preorder_traversal(PNode P)//前序遍历
{
    if(P!=NULL)
    {
        printf("%c",P->data);
        Preorder_traversal(P->Lchild);
        Preorder_traversal(P->Rchild);
    }
}
void Middle_order_traversal(PNode P)//中序遍历
{
    if(P!=NULL)
    {
        Middle_order_traversal(P->Lchild);
        printf("%c",P->data);
        Middle_order_traversal(P->Rchild);
    }

}
void  Post_order_traversal(PNode P)//后序遍历
{
    if(P!=NULL)
    {
        Post_order_traversal(P->Lchild);
        Post_order_traversal(P->Rchild);
        printf("%c",P->data);
    }
}
void level_traversal(PNode p)
{
   Linkqueue Q;
   initialization(Q);
   PNode T;
   EnQueue(Q,p);
   while (Q.Tail!=Q.Head)
   {
       Out_Of_line(Q,T);
       putchar(T->data);
       if(T->Lchild!=NULL)
       {
           EnQueue(Q,T->Lchild);
       }
       if(T->Rchild!=NULL)
       {
           EnQueue(Q,T->Rchild);
       }
   }

}
int main() {
   BiElemtype c;
   PNode tree=NULL;
   PNode pnew;
   List_p phead=NULL,ptail=NULL,listpnew=NULL,pcur=NULL;
   while( scanf("%c",&c))
   {
       if(c=='\n')
       {
           break;
       }
       pnew=(PNode) calloc(1,sizeof(Ptree));
       pnew->data=c;//讲值填入树的空间
       listpnew=(List_p) calloc(1,sizeof(List));
       listpnew->p=pnew;//讲值填入辅助队列
       if(NULL==tree)
       {
           tree=pnew;
           phead=listpnew;
           ptail=listpnew;
           pcur=listpnew;
       }else{
           ptail->Next=listpnew;
           ptail=listpnew;
       }
       if(NULL==pcur->p->Lchild)
       {
            pcur->p->Lchild=pnew;
       }else if(NULL==pcur->p->Rchild)
       {
           pcur->p->Rchild=pnew;
           pcur=pcur->Next;
       }

   }
//    Preorder_traversal(tree);
//    printf("\n");
    Middle_order_traversal(tree);
    printf("\n");
    Post_order_traversal(tree);
    printf("\n");
    level_traversal(tree);
    printf("\n");
    return 0;
}
