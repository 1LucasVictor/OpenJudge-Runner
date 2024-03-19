#include <stdio.h>
int main(void){
    int P,Q,R;
    scanf("%d%d%d", &P,&Q,&R);
    if(P+Q>=R && P<=R){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}