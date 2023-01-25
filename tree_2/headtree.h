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


#endif //TREE_2_HEADTREE_H
