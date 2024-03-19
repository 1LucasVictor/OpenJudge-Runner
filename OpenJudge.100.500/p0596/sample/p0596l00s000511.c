#include <stdio.h>
int main(void)

{
    char N[99999];
    int i,a=0,b=0,o=0;

    scanf("%s",N);

    for(i=0;N[i]!='\0';i++)
       if(N[i] == '1') b++;
       else            o++;

    if(o>b) printf("%d\n",b*2);
    else    printf("%d\n",o*2);

    return 0;
}
