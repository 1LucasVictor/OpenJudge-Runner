#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a,b,a2,b2,k,check;
    check = 0;
    scanf("%d %d",&a,&b);
    for(int i = 0; i <= 1000000000; i++){
        a2 = abs(a-i);
        b2 = abs(b-i);
        if(a2==b2){
            k = i;
            check = 0;
            printf("%d\n",i);
            break;
        }else{
            check++;
        }
    }
    if(check != 0) printf("IMPOSSIBLE\n");
    return 0;
}