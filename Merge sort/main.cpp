#include <stdio.h>
#define N 7
//归并排序
void MergeSort(int T[],int low,int mid,int high)
{
    int l,j,k;
    static   int m[N];
    for( int i=low;i<=high;i++)
    {
        m[i]=T[i];
    }
    k=low;
    for(j=low,l=mid+1;j<=mid&&l<=high;k++)
    {
        if(m[l]>m[j])
            T[k]=m[j++];
        else
            T[k]=m[l++];
    }
    while(l<=high)
    {
        T[k++]=m[l++];
    }
    while(j<=mid)
    {
        T[k++]=m[j++];
    }
}


void Merge_sort(int T[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        Merge_sort(T,low,mid);
        Merge_sort(T,mid+1,high);
        MergeSort(T,low,mid,high);
    }
}
void print(int T[])
{
    for(int i=0;i<7;i++)
    {
        printf("%3d",T[i]);
    }
    printf("\n");
}
int main() {
    int T[N]={99 ,66,58,6,15,7,19 };
    Merge_sort(T,0,6);
    print(T);
    return 0;
}
