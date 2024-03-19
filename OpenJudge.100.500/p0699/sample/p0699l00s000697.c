#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        int five=0,seven=0;
        if(a == 5 ){
                five++;
        }
        if(a == 7){
                seven++;
        }
        if(b == 5 ){
                five++;
        }
        if(b == 7){
                seven++;
        }
        if(c == 5 ){
                five++;
        }
        if(c == 7){
                seven++;
        }
        if(five == 2 && seven == 1){
                printf("YES\n");
        }else{
                printf("NO\n");
        }
        return 0;
}