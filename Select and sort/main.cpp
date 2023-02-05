#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//选择排序
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
void Swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
void Select_and_sort(Arr T)
{
    for(int i=0;i<T.Length;i++){
        int min=i;
        for(int j=i+1;j<T.Length;j++)
        {
            if(T.D[j]<T.D[min])
            {
                min=j;
            }
        }
        if(T.D[i]!=T.D[min])
        {
            Swap(T.D[i],T.D[min]);
        }
    }
}
int main() {
    Arr T;
    Initqueue(T,10);
    print(T);
    Select_and_sort(T);
    print(T);
    return 0;
}
