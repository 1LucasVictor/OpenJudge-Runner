#include "stdio.h"

int main(void){
    int sec;
    int min;
    int hrs;
    scanf("%d", &sec);
    
    hrs = sec/3600;
    sec -= hrs * 3600;
    
    min = sec/60;
    sec -= min*60;
    
    printf("%d:%d:%d\n", hrs, min,sec);
    return 0;
}