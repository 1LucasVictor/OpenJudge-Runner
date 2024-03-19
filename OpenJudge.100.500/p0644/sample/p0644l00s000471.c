#include<stdio.h>
int main(){
    char i,arr[3],count = 0;
    scanf("%s",arr);
    for(i=0;i<3;i++){
        if(arr[i]=='1'){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
