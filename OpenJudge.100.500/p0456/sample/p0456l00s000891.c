#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[200001];
    char t[200001];

    fgets(s,sizeof(s),stdin);
    fgets(t,sizeof(t),stdin);

    int result = 0;
    for(int i=0; i<strlen(s); i++){
        if(s[i] != t[i]){
            result+=1;
        }
    }
    printf("%d\n",result);
    return 0;
}