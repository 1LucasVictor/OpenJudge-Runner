#include <stdio.h>
 
int main(void) {
    int n,x;
    while(scanf("%d%d",&n,&x)){
    int a,b,c,cou = 0;
    if(n == 0 && x == 0) break;
     
    for(a = 1; n >= a; a++){
        for(b = 1; n >= b; b++){
            for(c = 1; n >= c; c++){
                if(a != b && a != c && b != c)
                    if(a+b+c == x) cou++;
            }   
        }   
    }
    printf("%d\n", cou/6);
    }
    return 0;
}
