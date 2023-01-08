#include <stdio.h>
//逻辑与和逻辑或的短路相接
int main() {
    int i = 0;
    i && printf("you can't see me");
    //if(i=0){
//    printf("you can't see me");
//}
//else
//    printf("you can see me");
    printf("Hello, World!\n");
    return 0;
}
