#include <stdio.h>

int main(void){
    int k,a,b;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);

    int i;
    for(i=1;i*k<=b;i++){
        if(a<=i*k && i*k<=b){
            printf("OK\n");
            return 0;
        }
    }
    printf("NG\n");
    return 0;
}
