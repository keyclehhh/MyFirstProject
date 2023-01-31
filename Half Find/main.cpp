#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef int Elemnt;
typedef struct linklist
{
    Elemnt  *D;
    int length;
}linklist;
void initlinklist(linklist &ST,Elemnt i)
{
    ST.length=i;
    ST.D=(Elemnt*) malloc(sizeof (Elemnt)*i);
    int x;
    srand(time(NULL));//随机数的生成
    for(x=0;x<ST.length;x++)
    {
        ST.D[x]=rand() % 100;
    }

}
void print(linklist ST)
{
    int i;
    for(i=0;i<ST.length;i++)
    {
        printf("%3d",ST.D[i]);
    }
    printf("\n");
}
int binary_search_algorithm(linklist ST,Elemnt key)
{
    int low=0;
    int high=ST.length-1;
    int mid;
    while(low<=high)//<=让mid既能去到high，也能取到low
    {
        mid=(low+high)/2;
        if(ST.D[mid]==key)
            return mid;
        else if(ST.D[mid]>key)
            high=mid-1;
        else
            low=mid+1;

    }
    return -1;
}
int compare(const void* left,const void* right)
{
    return *(Elemnt*)left-*(Elemnt*)right;//从小到大
   //*(Elemnt*)right-*(Elemnt*)left从大到小
}
int main()
{
    linklist ST;
    initlinklist(ST,10);
    print(ST);
    qsort(ST.D,ST.length,sizeof (Elemnt),compare);
    print(ST);
    int key;
    scanf("%d",&key);
    int pos=binary_search_algorithm(ST,key);
    if(pos!=-1)
    {
        printf("%d",pos);
    } else{
        printf("unsuccessful!");
    }
}