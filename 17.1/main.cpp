#include <stdio.h>

void Swep(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;

}
void Select_sort(int T[],int length)
{
    int i,j;
    for( i=0;i<length;i++)
    {
        int p=i;
        for(j=i+1;j<length;j++)
        {
            if(T[p]>T[j])
            {
                p=j;
            }
        }
        if(T[j]!=T[p])
        {
            Swep(T[i],T[p]);
        }
    }
}
void print(int T[])
{
    for(int i=0;i<10;i++)
    {
        printf("%3d",T[i]);
    }
    printf("\n");
}
void HeapBuild(int *T,int i,int length)
{
    int dad=i;
    int son=(dad*2)+1;
    while(son<length){
        if(son+1<length&&T[son]<T[son+1])//判断左值是否大于右值
        {
            son++;
        }
        if(T[son]>T[dad])//判断子值是否大于父值
        {
            Swep(T[dad],T[son]);
            dad=son;
            son=(dad*2)+1;
        }else{
            break;
        }
    }

}
void Heap(int T[],int length)
{
    for(int i=length/2-1;i>=0;i--) //建立大根堆
    {
        HeapBuild(T,i,length);
    }
    for(int j=length-1;j>=0;j--)//交换第一个与最后一个元素
    {
        Swep(T[0],T[j]);
        HeapBuild(T,0,j);
    }


}
int main() {
    int t[10];
    for(int i=0;i<10;i++)
    {
        int j;
        scanf("%d",&j);
        t[i]=j;
    }
    Select_sort(t,10);
    print(t);
    Heap(t,10);
    print(t);
    return 0;
}
