#include<stdio.h>
#include<math.h>
int main () {
    int num[6], i;
    for(i = 0; i < 6; ++i) scanf("%d", &num[i]);
    for(i = 0; i < 4; ++i){
        for(int j = i + 1; j < 5; ++j){
            if(num[j] - num[i] > num[5]){
                puts(":(");
                return 0;
            }
        }
    }
    puts("Yay!");
    return 0;
}