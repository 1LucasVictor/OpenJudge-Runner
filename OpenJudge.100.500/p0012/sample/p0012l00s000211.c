#include <stdio.h>
int main(){
    int carList[100] = {0}, num = 0;
    while (scanf("%d", &carList[num]) != EOF) {
        if(carList[num]){
            num++;
        }else{
            num--;
            printf("%d\n",carList[num]);
        }
    }
    return 0;
}