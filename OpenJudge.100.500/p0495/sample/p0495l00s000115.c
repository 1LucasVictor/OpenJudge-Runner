#include <stdio.h>

int main(void){
    char eki[2] = {0};
    int count = 0;
    for(int i=0; i<3; i++){
        scanf("%s", &eki[i]);
        if(i>=1){
            if(eki[i] != eki[i-1]){
                count++;
            }
        }
    }
    if(count>=1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}