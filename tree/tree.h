//
// Created by Administrator on 2023/1/24 0024.
//
#include <stdio.h>
#include <stdlib.h>
typedef char Letter;
typedef struct BiTuNode
{
    Letter data;
    struct  BiTuNode* lchild;
    struct  BiTuNode *rchild;
} BiTuNode,*BiTree;
typedef struct Queue
{
    BiTree Point;
    struct Queue *NEXT;
}Queue ,*assist;

#ifndef TREE_TREE_H
#define TREE_TREE_H



#endif //TREE_TREE_H
