#include <stdio.h>

int main(){
    int i,n;
    int data[100];
    int sp = 0;
    int output[100];
    int osp = 0;
    
    while(1){
        scanf("%d",&n);
        if(n==0){
            sp--;
            output[osp] = data[sp];
            osp++;
        }
        else{
            data[sp] = n;
            sp++;
        }
        if(sp <= 0)break;
    }
    for(i = 0; i < osp; i++){
        printf("%d\n", output[i]);
    }
    return 0;
}