#include <stdio.h>
int main() {
    int N[2];
    for(int i=0;i<=1;i++){
    scanf("%d", &N[i]);
    }

    if(N[1]%N[0]==0){
        printf("%d",N[1]+N[0]);
    }else{
        printf("%d",N[1]-N[0]);

    }
   
 
    return 0;
}