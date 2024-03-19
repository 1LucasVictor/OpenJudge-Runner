#include<stdio.h>

int main(){
    int i;
    char s[10];
    int ans=0;

    scanf("%s", &s);

    for(i=1; i<4; i++){
        if(s[i-1] == s[i]){
            ans = 1;
        }
    }

    if(ans == 0){
        printf("Good");
    }else{
        printf("Bad");
    }

    return 0;
}