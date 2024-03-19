#include<stdio.h>
const int SIZE = 10;
int main(void){
    int i = 0,k = 0,cnt = 0,data[SIZE],box[SIZE]={0};
    while(1){
        scanf("%d",&data[i]);
        if(data[i] == 0){
            i --;
            box[k] = data[i];
            k ++;
            cnt ++;
           // printf("%d\n",data[i]);
            if(i == 0)break;
        }
        else i ++;
    }
    for(k = 0; k < cnt; k ++ ){
        printf("%d\n",box[k]);
    }
    return 0;
}