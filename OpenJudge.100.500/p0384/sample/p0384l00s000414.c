#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=0;
    char ch[1200];
    while(1){
        scanf("%c", &ch[i]);
        if(ch[i] == '\n') break;
        if('a'<=ch[i] && ch[i]<='z'){
            ch[i] -= 32;
        } else if('A'<=ch[i] && ch[i]<='Z'){
            ch[i] += 32;
        }
        i++;
    }
    for(int j=0; j<=i; j++){
        printf("%c", ch[j]);
    }
    return 0;
}

