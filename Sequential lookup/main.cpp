#include <stdio.h>
#include <stdlib.h>
#include<time.h>
typedef int Element;
typedef struct {
    Element *DATA;
    int Tablelen;
}SSTable;
void init_SSTable(SSTable &ST,Element i)
{
    ST.Tablelen=i+1;//多申请一个位置给哨兵
    ST.DATA= (Element*)malloc(sizeof(Element)*ST.Tablelen);
    int x;
    srand(time(NULL));//随机数的生成
    for(x=1;x<ST.Tablelen;x++)
    {
        ST.DATA[x]=rand() % 100;
    }
}
void Print(SSTable ST)
{
    int i;
    for(i=1;i<ST.Tablelen;i++)
    {
        printf("%3d",ST.DATA[i]);
    }
    printf(("\n"));
}
int Search(SSTable ST,Element key)
{
    ST.DATA[0]=key;//哨兵
    int i;
    for(i=ST.Tablelen-1;ST.DATA[i]!=key;i--);
    return i;


}
int main() {
    SSTable ST;
    init_SSTable(ST,10);
    Print(ST);
    Element key;
    scanf("%d",&key);
    int pos=Search(ST,key);
    if(NULL!=pos)
    {
        printf("pos=%3d",pos);
    }
    else{
        printf("unsuccessed!");
    }
    return 0;
}

