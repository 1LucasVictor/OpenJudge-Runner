#include <stdio.h>

int main(void){
    char s[4];
    int x=0;
    
    scanf("%s",s);

    for(int i=0; i<3; i++){
        if(s[i]=='1')
            x++;
    }
    printf("%d\n",x);
}
