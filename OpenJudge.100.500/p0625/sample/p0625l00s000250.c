#include <stdio.h>

main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=8 && b<=8)
        puts("Yay!");
    else
        puts(":(");
}