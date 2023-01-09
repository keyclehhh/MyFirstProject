#include <stdio.h>
#include <string.h>


int main() {
    char i[10];
    char j[10] ={0};
    gets(i);


    int leng=strlen(i);
    for(int k=0,m=leng-1;k<m;k++,m--){
         j[k]=i[m];
    }


    int result=strcmp(i,j);
    if (result < 0)

    {

        printf("%d\n",-1);

    }

    else if (result > 0)

    {

        printf("%d\n", 1);

    }

    else {

        printf("%d\n", 0);

    }

    return 0;
}
