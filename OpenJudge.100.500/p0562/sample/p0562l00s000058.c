#include <stdio.h>

int main(){
    int i=1, a, c, b;

    scanf("%d %d", &a, &b);
    c=a;
    if(a>=b){
        printf("%d\n", i);
    }
    else{
        for(i;c<b;++i){
            c+=a-1;
        }
        printf("%d\n", i);
    }
    return 0;
}
