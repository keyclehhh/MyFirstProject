#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>
//冒泡排序
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
void Swap(ELement &a,ELement &b)
{
    int t=a;
    a=b;
    b=t;
}
void  Bubble_sort(Arr &T,bool &flag)
{
    int i,m;

    for(i=0;i<T.Length;i++)
    {

        for(m=T.Length-2;m>=i;m--)
        {
            flag= false;
            if(T.D[m]>T.D[m+1])
            {
                Swap(T.D[m],T.D[m+1]);
              flag=true;
            }

        }
    if(false==flag)
    {
        return;
    }
    }


}
int main() {
    Arr T;
    bool flag;
    Initqueue(T,10);
    print(T);
    Bubble_sort(T,flag);
    print(T);
    return 0;
}
