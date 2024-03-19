
#include <stdio.h>

int main(){
    int k, a, b, c, m;
    scanf("%d%d%d", &k, &a, &b);
    for(;;){
        c = a%k;
        if(c == 0)
            m += 1;
        
        if( a == b)
            break;
        a +=1;
    }
    if(m>=1)
        printf("OK");
    else
        printf("NG");

    return 0;
}