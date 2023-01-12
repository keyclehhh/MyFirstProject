#include <stdio.h>
struct student
{
    int num;
    char name[50];
    char sex[10];
}s;

int main() {


    scanf("%d%s%s",&s.num,&s.name,&s.sex);
    printf("%d %s %s\n",s.num,s.name,s.sex);

    return 0;
}
