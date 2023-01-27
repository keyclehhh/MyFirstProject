//
// Created by Administrator on 2023/1/25 0025.
//
#include "headtree.h"
void initialization(Linkqueue &Q)//初始化
{
    Q.Tail=Q.Head=(Queue*) malloc(sizeof (Queue));
    Q.Head->next=NULL;
}
//bool IsEmpty(Linkqueue Q)
//{
//    if(Q.Tail==Q.Head)
//    {
//        return false;
//    }
//    return true ;
//}
void EnQueue(Linkqueue &Q, ilmttp C)
{
    Queue* S;
    S=(Queue*)malloc(sizeof(Queue));
    S->Data=C;
    S->next=NULL;
    Q.Tail->next=S;
    Q.Tail=S;

}
bool Out_Of_line(Linkqueue &Q, ilmttp &C)
{
    if(Q.Head==Q.Tail) {
        return false;
    }
    Queue* p=Q.Head->next;
    C=p->Data;
    Q.Head->next=p->next;
    if(Q.Tail==p)
    {
        Q.Tail=Q.Head;
    }
    free(p);
    return true;
}