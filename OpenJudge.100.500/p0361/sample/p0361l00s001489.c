#include <stdio.h>

int main(int argc, const char * argv[]){
    int S, h, m, s;
    scanf("%d" , &S);
    h=S/3600;
    m=(S-(h*3600))/60;
    s=(S-(h*3600))%60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
    
}