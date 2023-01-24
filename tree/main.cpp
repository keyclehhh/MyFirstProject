#include "tree.h"

int main() {
    Letter i;
    BiTree pnew;//指向新节点的指针
    BiTree tree=NULL;//树根
    assist qhead=NULL ,qtail=NULL,pcur=NULL,listpnew=NULL;
    while(scanf("%c",&i))
    {
        if(i =='\n')
        {
            break;
        }
        pnew=(BiTree) calloc(1,sizeof (BiTuNode));
        pnew->data=i;//存数据
        listpnew=(assist) calloc(1,sizeof (Queue));
        listpnew->Point=pnew;
        if(NULL==tree)
        {
            tree=pnew;
            qhead=listpnew;
            qtail=listpnew;
            pcur=listpnew;
            continue;
        }
        else{
            qtail->NEXT=listpnew;
            qtail=listpnew;
        }
        if(NULL==pcur->Point->lchild)
        {
            pcur->Point->lchild=pnew;
        }else if(NULL==pcur->Point->rchild)
        {
            pcur->Point->rchild=pnew;
            pcur=pcur->NEXT;
        }
    }
    return 0;
}
