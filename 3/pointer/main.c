#include <stdio.h>
//输入一个整型数，存入变量i，通过子函数change把主函数的变量i除2，然后打印i，例如如果输入的为10，打印出5，如果输入的为7，打印出3
void change(int *j)
{
        *j=*j/2;//注意；这里不能打成j=j/2，‘*’是取值，‘&’是取地址
}
int main() {
    int i;
    int *p;
    scanf("%d",&i);
    p=&i;
    change(p);
    printf("%d\n",*p);
    return 0;
}
