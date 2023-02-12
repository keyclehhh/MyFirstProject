#include <stdio.h>

int main() {
    int i[5];
    int result=0;
    for(int j=0;j<5;j++)
    {
        int x;
        scanf("%d",&x);
        i[j]=x;
        result=result^i[j];
    }
    printf("%d",result);
    return 0;
}
