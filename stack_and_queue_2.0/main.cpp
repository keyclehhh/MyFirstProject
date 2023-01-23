#include <stdio.h>
#include <stdlib.h>
#define Minsize 5
#define Maxsize 50
typedef int Element;
 typedef struct
{
    Element data[Maxsize];
    int top;
}Stack;
typedef struct
{
    Element data[Minsize];
    int front,tail;
}Queue;
void initialization(Stack &A)
{
    A.top=-1;
}
bool infer_initialization(Stack A)
{
    if(A.top==-1)
    {
        return true;
    }
    return false;
}
bool Put (Stack &A,Element i)
{
    if(A.top+1>=Maxsize)
    {
        return false;
    }
    A.data[++A.top]=i;
    return true;
}
bool Leave_Stack(Stack &A,Element &M)
{
    if(A.top==-1)
    {
        return false;
    }
    M=A.data[A.top--];
    return true;
}
void initia(Queue &B)
{
    B.front=B.tail=0;
}
bool infer_initia(Queue B)
{
    if(B.tail==B.front)
    {
        return true;
    }
    return false;
}
bool insert(Queue &B,Element M)
{
    if((B.tail+1)%Minsize==B.front)
    {
        return false;
    }
    B.data[B.tail]=M;
    B.tail=(B.tail+1)%Minsize;
    return true;
}
bool out_queue(Queue &B,Element&I)
{
    if(B.front==B.tail)
    {
        return false;
    }
    I=B.data[B.front];
    B.front=(B.front+1)%Minsize;
    return true;
}
//void print(Stack A,int m)
//{
//    for(int c=0;c<3;c++)
//    {
//        printf("%2d",m);
//    }
//    printf("\n");
//}
int main()
{
     Stack A;
     bool ret;
     Element m,i,a,b;
    initialization(A);
    infer_initialization(A);
    for(int c=0;c<3;c++)
    {
        scanf("%d",&a);
        Put(A,a);
    }
//    scanf("%d",&a);
//    Put(A,a);
//    scanf("%d",&a);
//    Put(A,a);
//    scanf("%d",&a);
//    Put(A,a);

//    Leave_Stack(A,m);
//    printf("%2d",m);
//    Leave_Stack(A,m);
//    printf("%2d",m);
//    Leave_Stack(A,m);
//    printf("%2d\n",m);
    Queue B;
    initia(B);
    infer_initia(B);
    for(int c=0;c<5;c++)
    {
        scanf("%d",&b);
        ret=insert(B,b);
    }
    for(int c=0;c<3;c++)
    {
        Leave_Stack(A,m);
        printf("%2d",m);
    }
    printf("\n");
    if(false==ret)
    {
        printf("false\n");
    }
//    scanf("%d",&b);
//    insert(B,b);
//    scanf("%d",&b);
//    insert(B,b);
//    scanf("%d",&b);
//    insert(B,b);
//    scanf("%d",&b);
//    insert(B,b);
//    scanf("%d",&b);
//    ret=insert(B,b);
//    if(ret==0)
//    {
//        printf("false\n");
//    }
    for(int c=0;c<4;c++)
    {
        out_queue(B,i);
        printf("%2d",i);
    }
//    out_queue(B,i);
//    printf("%2d",i);
//    out_queue(B,i);
//    printf("%2d",i);
//    out_queue(B,i);
//    printf("%2d",i);
//    out_queue(B,i);
//    printf("%2d\n",i);
    return 0;


}