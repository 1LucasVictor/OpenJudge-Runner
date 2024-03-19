#include <stdio.h>
#include <string.h>

int minor_change(char* s, char* t){
    size_t size = strlen(s);
    int count = 0;
    for(int i=0;i<size;i++){
        if (s[i] != t[i]){
            s[i] = t[i];
            count++;
        }
        
    }
    return count;
}

int main(){
    char s[20000];
    char t[20000];
    scanf("%s %s",s,t);
    printf("%d\n",minor_change(s,t));
    return 0;
}