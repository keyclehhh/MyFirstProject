#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>
//快速排序*******
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
int Fast_platoonS(ELement T[],int low,int high)
{
    int p=T[low];
    while(low<high)
    {
        while(low<high&&T[high]>=p)
        {
            high--;
        }
        T[low]=T[high];
        while(low<high&&T[low]<=p)
        {
            low++;
        }
        T[high]=T[low];
    }
    T[low]=p;
    return low;
}
void Fast_platoon(ELement T[],int low,int high)
{
    if(low<high) {
        int pow= Fast_platoonS(T, low, high);
        Fast_platoon(T, low,pow-1 );
        Fast_platoon(T, pow+1,high);
    }
}
int main() {
    Arr T;
    Initqueue(T,10);
    print(T);
    int low=0;
    int high=9;
    Fast_platoon(T.D,low,high);
    print(T);
    return 0;
}
