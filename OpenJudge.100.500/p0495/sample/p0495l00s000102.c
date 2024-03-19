#include <stdio.h>
int main(void){
    int x=0;
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    if(a=='A')x++;
    if(b=='A')x++;
    if(c=='A')x++;

    if(x==3 || x==0)printf("No");
    else printf("Yes");

    return 0;
}


