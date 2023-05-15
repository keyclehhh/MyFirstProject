#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//堆排序
typedef int ELement;
typedef struct Arr
{
    ELement *D;
    ELement Length;
}Arr;
void Initqueue(Arr &T,int x)
{
    T.Length=x;
    T.D=(ELement*) malloc(sizeof(ELement)*T.Length);
    int i;
    srand(time(NULL));//随机数生成
    for(i=0;i<T.Length;i++)
    {
        T.D[i]=rand()%100;
    }
}
void print(ELement T[])
{
    for(int i=0;i<10;i++)
    {
        printf("%3d",T[i]);
    }
    printf("\n");
}
void Swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
void Heapbuild(ELement T[],int i,int length)
{
    int dad=i;
    int son=(2*i)+1;
    while(son<length)
    {
        if(son+1<length&&T[son]<T[son+1])
        {
            son++;
        }
        if(T[son]>T[dad])
        {
            Swap(T[dad],T[son]);
            dad=son;//检查交换后是否满足条件
            son=(2*dad)+1;//检查下一层
        } else{
            break;
        }

    }

}
void Heapsort(ELement T[],int length)
{
    int i;
    for(i=(length/2)-1;i>=0;i--)
    {
        Heapbuild(T,i,length);//建立大根树
    }
    for(int j=length-1;j>0;j--)
    {
        Swap(T[0],T[j]);
        Heapbuild(T,0,j);//i代表哪个树节点不满足大根堆
    }

}
int main() {
    Arr T;
//    ELement C[10]={3,87,2,93,78,56,61,38,12,40 };
    Initqueue(T,10);
    print(T.D);
    Heapsort(T.D,10);
    print(T.D);
    return 0;
}
