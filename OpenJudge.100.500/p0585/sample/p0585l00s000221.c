#include <stdio.h>
#include <string.h>
int main(void){
    int x,y,a,count,count2;
    count = count2 = 0;
    scanf("%d %d %d\n",&x, &y, &a);
    while(a > 0){
        a = a - 1;
        count++;
        if (count == x){
            count = 0;
            count2 = count2 + y;
        }
    }
    
 
    printf("%d",count2);
    return 0;
}