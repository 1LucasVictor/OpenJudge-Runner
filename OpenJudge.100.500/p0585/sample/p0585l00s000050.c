#include <stdio.h>
int main(void){
    // Your code here!
    int start_t;
    int num;
    int t;
    
    scanf("%d%d%d", &start_t, &num, &t);
    
    printf("%d\n",(int)(t/start_t)*num);
    
    return 0;
}
