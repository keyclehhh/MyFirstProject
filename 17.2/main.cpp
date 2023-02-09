#include <stdio.h>
#define N 10
void Merge_Build(int*T,int low,int high,int mid)
{
    int l=low,left=low,right=mid+1;//定义左右区间的变量
    static int M[N];//定义辅助队列
    for(int i=low;i<=high;i++)//赋值给辅助队列
    {
        M[i]=T[i];
    }
    while(left<=mid&&right<=high) //结束条件left<=mid&right<=high&&
    {
        if(M[left]>M[right])//判断左右区间的数值大小
        {
            T[l++]=M[right++];
        }else if(M[left]<M[right])
        {
            T[l++]=M[left++];
        }

    }
    while(left<=mid)//在循环外判断左右区间是否走满
    {
        T[l++]=M[left++];
    }
    while(right<=high)
    {
        T[l++]=M[right++];
    }
}
void Merge(int*T,int low,int high)
{
    if(low<high)//定义结束条件
    {
       int mid=(low+high)/2; //定义中间变量
        Merge(T,low,mid);//分割数组
        Merge(T,mid+1,high);
        Merge_Build(T,low,high,mid);//合并数组
    }

}
void print(int*T,int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        printf("%3d",T[i]);
    }
    printf("\n");
}
int main() {
    int t[10];
    for(int i=0;i<10;i++)
    {
        int j;
        scanf("%d",&j);
        t[i]=j;
    }
    Merge(t,0,9);
    print(t,10);
}
