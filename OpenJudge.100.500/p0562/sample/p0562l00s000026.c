/* ABC139-B
   Takatan */

#include<stdio.h>
int main(void){
    int plug, need, count;
    count = 0;

    scanf( "%d %d" , &plug, &need);
    
    while(need>1){
        need = need - plug + 1;
        count++;
    }

    printf( "%d\n" , count);
}