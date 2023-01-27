//
// Created by Administrator on 2023/1/25 0025.
//

#ifndef TREE_2_HEADTREE_H
#define TREE_2_HEADTREE_H
#include <stdio.h>
#include<stdlib.h>
typedef char BiElemtype;
typedef struct Ptree
{
    BiElemtype data;
    struct Ptree *Lchild;
    struct Ptree *Rchild;
}Ptree,*PNode;
typedef struct List
{
    PNode p;
    struct List *Next;
}List,*List_p;
typedef PNode ilmttp;
typedef struct Queue
{
    ilmttp Data;
    struct Queue *next;
}Queue;
typedef struct{
    Queue *Head,*Tail;
}Linkqueue;

bool IsEmpty(Linkqueue &Q);
void EnQueue(Linkqueue &Q, ilmttp C);
void initialization(Linkqueue &Q);//初始化
bool Out_Of_line(Linkqueue &Q, ilmttp &C);

#endif //TREE_2_HEADTREE_H
