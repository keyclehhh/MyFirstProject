#include <stdio.h>
#include <stdlib.h>
//输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串，字符串的输入长度小于最初输入的整型数大小，最后输出输入的字符串即可；
int main() {
    int i;
    char *p;
    scanf("%d",&i);
    p=malloc(i);
    getchar();//清空缓冲区
    gets(p);
    puts(p);


    return 0;
}
