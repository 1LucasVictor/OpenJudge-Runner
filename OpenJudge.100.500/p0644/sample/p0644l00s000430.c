#include <stdio.h>

int main(){

    char xyz[3] ;

    scanf("%s", xyz);
    int i;
    int a = 0;

    for(i = 0; i < 3 ;i++){
        if(xyz[i] == '1') (a = a + 1);
    }
    printf("%d\n" ,a);
    return 0;

}