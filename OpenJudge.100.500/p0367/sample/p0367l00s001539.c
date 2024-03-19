#include <stdio.h>

int main (){
    int a,b,c,n=0;
    scanf("%d %d %d",&a,&b,&c);
    for (; a<=b; a++) {
        if (c%a==0) {
            n+=1;
        }
    }
    
    printf("%d\n",n);
    
    return 0;
}