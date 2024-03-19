#include <stdio.h>
int main(void){
    char box[3] = {0};
    int counter = 0;
    scanf("%s", &box);
    for(int i = 0; i < 3; i++){
        if(box[i] == '1'){
            counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}