#include <stdio.h>
//运用递归解决问题
int step( int p)
{

    if(p == 1||p == 2)
    {
        return p;
    }
     return step(p-1)+step(p-2);
}

int main() {
   int i;
   scanf("%d",&i);
    int n= step(i);
   printf("%d\n",n);
    return 0;
}
