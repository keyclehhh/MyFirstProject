#include <stdio.h>
#define  MaxSize 50
 //在数组中插入数字
 typedef int ElmeType;
typedef struct
{
    ElmeType data[MaxSize];
    int length;
}SqList;
bool InSert(SqList &L, int i, ElmeType e){
    if(i<=1||i>=L.length+1)
    {
        return false;
    }
    if(L.length>=MaxSize)
    {
        return false;
    }
    for(int j=L.length;j>=i;j--)
    {
        L.data[j]=L.data[j-1];


    }
    L.data[i-1]=e;
    L.length+=1;
    return true;

}
void PrintList(SqList L)
{
    for(int a=0;a<L.length;a++){
        printf("%4d",L.data[a]);
    }
    printf("\n");
}

int main() {
    SqList L;
    bool ret;
    L.data[0]=1;
    L.data[1]=2;
    L.data[2]=3;
    L.length=3;
    ret = InSert(L,2,60);
    if(ret)
    {
        printf("Insert number successfully\n");
        PrintList(L);
    }
    else
    {printf("Insert number not successfully\n");}


    return 0;
}
