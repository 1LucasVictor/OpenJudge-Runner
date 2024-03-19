#include <stdio.h>
#include <string.h>


int main(){
    
    int num[3];
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    num[2]-=(num[0]-num[1]);
    if(num[2]<0)num[2]=0;
    printf("%d",num[2]);
}