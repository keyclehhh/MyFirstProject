#include <stdio.h>
#define MaxSize 50
typedef  int  Element;
typedef struct Arr{
    Element data[MaxSize];
    Element length;
}SqList;
bool Add(SqList &L,Element p, Element e)//位置2，元素6
{
    if(p<=1||p>=L.length+1){
        return false;
    }
    if(L.length+1>=MaxSize){
        return false;
    }

    for(int m=L.length;m>=p;m--)
    {
        L.data[m]=L.data[m-1];
    }
    L.data[p-1]=e;
    L.length++;
    return true;

}
bool Dele(SqList &L,int s)
{
    if(s<1||s>=L.length-1){
        return false;
    }
    if(L.length>=MaxSize){
        return false;
    }
    for(int j=s-1;j<L.length;j++)
    {
        L.data[j]=L.data[j+1];
    }
    L.length--;
    return true;




}
void Print(SqList L)
{
    for(int i=0;i<L.length;i++)
    {
        printf("%3d",L.data[i]);
    }
    printf("\n");
}



int main() {
    SqList L;
    int i,m;
    bool ret ,rett;
    L .data[0]=1;
    L .data[1]=2;
    L .data[2]=3;
    L.length=3;
    scanf("%d",&i);
     ret= Add(L,2,i);
    if(ret)
    {

        Print(L);
    }
    else
    {
        printf("false\n");
    }
    scanf("%d",&m);
     rett=  Dele(L,m);
     if(rett)
     {

         Print(L);
     }
     else
     {
         printf("false\n");
     }





    return 0;
}
