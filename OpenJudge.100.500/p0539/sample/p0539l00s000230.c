#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<10;i++){
        if(n%i==0&&n/i<10){
        printf("%s","Yes");
        exit(0);
        }
    }
    printf("%s","No");
}