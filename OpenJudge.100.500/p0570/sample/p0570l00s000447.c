#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int max;
    if(a>b){
        max=a;
    }else{
        max=b;
    }
    for(int i=0; i<max; i++){
        if(abs(a-i)==abs(b-i)){
            printf("%d\n", i);
            return 0;
        }
    }
    printf("IMPOSSIBLE\n");
    return 0;
}