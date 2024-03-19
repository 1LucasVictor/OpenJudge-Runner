#include<stdio.h>
int main(){
    int a[6], i;
    for(i = 0; i < 6; i++)
        scanf("%d",&a[i]);
    for(i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            if(a[j] - a[i] > a[5]){
                puts(":(");
                return 0;
            }
        }
    }
    puts("Yay!");
    return 0;
}