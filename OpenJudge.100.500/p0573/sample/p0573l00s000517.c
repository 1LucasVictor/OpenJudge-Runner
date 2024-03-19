#include<stdio.h>

int main(){
    int i, j;
    int count = 0;
    char s[100];
    scanf("%s", &s);
    for(i = 0; i < 4; i++){
        for(j = i+1; j < 4; j++){
            if(s[i] == s[j])count++;
        }
    }
    if(count == 2){
        if(s[0] != s[1] || s[0] != s[2] || s[0] != s[3]){
            printf("Yes\n");
        }
    }else{
        printf("No\n");
    }
    return 0;
}