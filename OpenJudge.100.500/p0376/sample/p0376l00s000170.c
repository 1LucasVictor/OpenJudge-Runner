#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int a[x];
    for(int i=0; i<x; i++){
        scanf("%d", &a[i]);
    }
    for(int i=1; i<=x; i++){
        printf("%d", a[x-i]);
        if(i!=x){
            printf(" ");
        }
    }
    puts("");
 }
