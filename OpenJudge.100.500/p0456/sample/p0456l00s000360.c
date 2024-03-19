#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int main(){
    char *s = (char*)calloc(sizeof(char), MAX+2);
    char *t = (char*)calloc(sizeof(char), MAX+2);
    int i=0,count =0;
    fgets(s, MAX+2, stdin);
    fgets(t, MAX+2, stdin);
    while(s[i]!='\n'){
        if(s[i] != t[i]){
            count++;
        }
        i++;
    }
    printf("%d\n",count);
    return 0;
}
