#include <stdio.h>
#define Maxsize 5
typedef int Element;
typedef   struct Queue
{
    Element data[Maxsize];
    Element flont,tail;
};
void initialization(Queue &A)
{
    A.flont=A.tail=0;
}
bool infer(Queue A)
{
    if(A.tail==A.flont)
    {
        return true;
    }
    return false;
}
bool Listed(Queue &A,Element m)
{
    if((A.tail+1)%Maxsize==A.flont)
    {
        return false;
    }
    A.data[A.tail]=m;
    A.tail=(A.tail+1)%Maxsize;
    return true;

}
bool  Dequeue(Queue &A,Element &M)
{
    if((A.flont+1)%Maxsize==A.tail)
    {
        return false;
    }
    M=A.data[A.flont];
    A.flont=(A.flont+1)%Maxsize;
    return true;

}
int main()
{
    struct Queue A;
    bool ret;
    Element  m;
    initialization(A);
    ret=infer(A);
    if(ret)
    {
        printf("initialization is successed!\n");
    }
    else
    {
        printf("initialization is not successed!\n");
    }
     Listed(A,2);
    Listed(A,3);
    Listed(A,4);
    ret=Listed(A,6);
    ret=Listed(A,9);
    if(ret)
    {
        printf("Successed to list!\n");
    }
    if(ret==false)
    {
        printf("Failed to list\n");
    }
     ret=Dequeue (A,m);
    if(ret)
    {
        printf("Successed leave list!\n");
        printf("%3d\n", m);
    }
    else
    {
        printf("Failed leave list\n");
    }
    ret=Listed(A,9);
    if(ret)
    {
        printf("Successed to list!\n");
    }
    else
    {
        printf("Failed to list\n");
    }
}