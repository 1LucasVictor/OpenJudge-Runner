#include <stdio.h>

#define LENGTH 256

int main(void){
    char input[LENGTH];
    int train,taxi,num;
    fgets(input, LENGTH-1, stdin);
    sscanf(input, "%d %d %d", &num,&train,&taxi);
    if(train*num<taxi){
    printf("%d",train*num);
    }else{
        printf("%d",taxi);
    }

}