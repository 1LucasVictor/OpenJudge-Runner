#include <stdio.h>

int main(void) {
    int kyaru;
    int point = 0;
    scanf("%d", &kyaru);
    
    if(kyaru/500>0){
        point = kyaru / 500 * 1000;
        kyaru = kyaru % 500;
    }
    if(kyaru/5>0){
        point = point + kyaru / 5 * 5;
    }
    printf("%d", point);
}
