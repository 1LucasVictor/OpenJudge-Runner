#include <stdio.h>
int main(void){
    // Your code here!
    char c[3];
    scanf("%c%c%c",&c[0],&c[1],&c[2]);
    
    if(c[0]==c[1]&&c[1]==c[2])
        puts("No");
    else
        puts("Yes");
    return 0;
}
