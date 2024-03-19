#include<stdio.h>
int main(void){
    int i = 0,data[11];
    while(1){
        scanf("%d",&data[i]);
        if(data[i] == 0){
            i --;
            printf("%d\n",data[i]);
            if(i == 0)break;
        }
        else i ++;
    }
    return 0;
}