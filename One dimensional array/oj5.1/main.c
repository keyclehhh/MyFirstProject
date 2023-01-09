#include <stdio.h>

int main() {
    int n,i,count=0;
    scanf("%d",&n);
    int j[n];
    gets(j);//输入数组j
    for(i=0;i<n;i++){
        scanf("%d",&j[i]);//读取每个数组
        if(j[i]==2)
             count++;
    }
    printf("%d\n",count);



    return 0;
}
