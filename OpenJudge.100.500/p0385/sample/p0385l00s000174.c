#include<stdio.h>
#define MAX 10000

int main(){
    int x[MAX];
    int z[MAX] = {};
    int i;
    for(i = 0; i < MAX; i++){
        scanf("%d", &x[i]);
        if(x[i] == 0) break;
    }

    for(i = 0; i < MAX; i++){
        if(x[i] == 0){
            z[i] = 0;
            break;
        }
        while(x[i] != 0){
        z[i] += x[i] % 10;
        x[i] = x[i] / 10;
        }
    }

    for(i = 0; i < MAX; i++){
        if(z[i] == 0) break;
        printf("%d\n", z[i]);   
    }
    
    return 0;
}
