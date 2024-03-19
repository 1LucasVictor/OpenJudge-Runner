#include <stdio.h>
int main(void){
    // Your code here!
    int time = 0;
    int hour = 0;
    int minute = 0;
    int second =0;
    
    scanf("%d", &time);
    
    hour = time/3600;
    
    //minute = second%3600;
    minute = time%3600;
    minute = minute/60;
    
    second = time%60; 
    
    printf("%d:%d:%d\n", hour,minute,second);
}

