#include <stdio.h>
#include <stdlib.h>
void modify_pr(char *&p)
{
   p=(char*)malloc(100);
   fgets(p,100,stdin);
}
int main() {
    char *p;
    modify_pr(p);
      puts(p);    //printf("%s\n",*p);
    return 0;
}
