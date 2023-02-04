#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>
//插入排序
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
void print(Arr T)
{
    for(int i=0;i<T.Length;i++)
    {
        printf("%3d",T.D[i]);
    }
    printf("\n");
}
void insert_sort(ELement T[],int length)
{
    int i,j;
    for(i=1;i<length;i++)
    {
        int n=T[i];
        for(j=i-1;j>=0&&T[j]>n;j--)
        {
            T[j+1]=T[j];
        }
        T[j+1]=n;
    }

}
int main()
{
    Arr T;
    Initqueue(T,10);
    print(T);
    insert_sort(T.D,T.Length);
    print(T);
}