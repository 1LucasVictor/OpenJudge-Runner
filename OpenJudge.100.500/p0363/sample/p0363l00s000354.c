#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d\n",&a,&b,&c);
    
    if(a>b){
if(a<c) printf("%d %d %d\n", b, a, c);
else if(b>c) printf("%d %d %d\n", c, b, a);
else printf("%d %d %d\n", b, c, a);
} else if(a<b){
if(b<c) printf("%d %d %d\n", a, b , c);
else if(a>c) printf("%d %d %d\n", c, a, b);
else printf("%d %d %d\n", a, c, b);
}

    return 0;
}

