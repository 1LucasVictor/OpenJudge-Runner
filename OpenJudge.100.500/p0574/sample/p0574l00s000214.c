#include <stdio.h>
int main(void){
    char p[5];
    scanf("%s",p);
    if(p[0]==p[1]||p[1]==p[2]||p[2]==p[3]){
        puts("Bad");
    }else{
        puts("Good");
    }
}
