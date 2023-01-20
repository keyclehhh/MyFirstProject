#include <stdio.h>
typedef int ElemType;
#define MAXSIZE 50
typedef struct
{
     ElemType data[MAXSIZE];
     int top;
}SqStack;
void InitStack(SqStack &A)//初始化
{
    A.top=-1;
}
bool InferEmpty(SqStack &A)//判断栈是否为空
{
    if(A.top==-1)
    {
        return true;
    }
    return  false;
}
bool  Push(SqStack &A,int x)//入栈
{
   if(A.top==MAXSIZE-1)
    {
        return false;
    }
    A.data[++A.top]=x;//先加加，在使用
    return true;
}
bool GetTop(SqStack A,int &i)//获取栈顶元素
{
    if(A.top==-1)
    {
        return false;
    }
    i=A.data[A.top];
    return true;
}
bool Pop(SqStack &A,int &i)//弹栈
{
    if(InferEmpty(A))
    {
        return false;
    }
    i=A.data[A.top--];//先使用，再减减
    return true;
}
int main() {
    SqStack A;
    int i,m;//先进后出 FILO 后进先出 LOFI
    bool flag;
    InitStack(A);//初始化
    flag=InferEmpty(A);
   if(flag)
   {
       printf("stack is emrty!\n");
   }
    Push(A,3);
    Push(A,4);
    Push(A,5);
    flag=GetTop(A,i);
    if(flag)
    {
        printf("TOP IS%d\n",i);
    }
    flag=Pop(A,m);
    if(flag)
    {
        printf("Pop is%d\n",m);
    }
    return 0;
}
