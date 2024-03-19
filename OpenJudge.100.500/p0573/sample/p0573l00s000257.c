#include<stdio.h>

int main(){
    int a[10];
    char s[10];
    int ans =0;

    scanf("%s", &s);

    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(s[i] == s[j]){
                ans +=1;
            }
        }
    }
    if(ans == 2){
        printf("Yes");
    }else{
        printf("No");
    }


    return 0;
}