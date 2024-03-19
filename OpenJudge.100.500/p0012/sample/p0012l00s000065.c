#include <stdio.h>

int main(){
    int i,n;
    int data[100];
    int sp = 0;

    while(1){
        scanf("%d",&n);
        if(n==0){
            sp--;
            printf("%d\n",data[sp]);
        }
        else{
            data[sp] = n;
            sp++;
        }
        if(sp <= 0)break;
    }
    return 0;
}