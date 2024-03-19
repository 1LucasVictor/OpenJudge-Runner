#include <stdio.h>

int main(void){
    
    char s[5];
    scanf("%s",s);
    
    int i, d, k=0;
    
    d = s[0]-48;

    for(i=1;i<4;i++){
        if(d == (s[i]-48)) {
            k = 1;

        } else {
            d = (s[i]-48);


        }
    }
    
    if(k==0) printf("Good\n");
    else printf("Bad\n");
    
    return 0;
}
