#include <stdio.h>

int main(void){
    int a,b,k;
    scanf("%d" "%d",&a,&b);
    k = -1;
    for(int i = 0;i < 1000000000;i++){
        if((a-i)*(a-i)==(b-i)*(b-i)){
            k = i;
            break;
        }
        
    }
    if(k != -1){
        printf("%d\n",k);
    }else{
        printf("IMPOSSIBLE\n");

    }
    return (0);
    
}