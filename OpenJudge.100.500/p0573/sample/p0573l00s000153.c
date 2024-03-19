#include <stdio.h>

int main(void){
    char s[10];
    int k=0;
        scanf("%s",s);
    for(int i=0;i<=3;i++){
        for(int o=i+1;o<=3;o++){
            if(s[i]==s[o]){
                k++;
            }
        }
    }
    if(k==2){
        printf("Yes");
    }else{
        printf("No");
    }
}