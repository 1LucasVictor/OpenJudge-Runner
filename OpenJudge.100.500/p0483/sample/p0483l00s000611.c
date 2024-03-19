#include <stdio.h>

int main(){

    char num[3];
    int x=0; 

    scanf("%s",&num);
    for(int i = 0;i < 3;++i){

        if (num[i] == '7'){
            
            i = 4;
            ++x;
        }
    }

    if (x == 1)
        puts("Yes");
    else 
        puts("No");

    return 0;
}
//todo
// !
// ?
// * 