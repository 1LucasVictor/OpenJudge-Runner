#include <stdio.h>
int main(){
    int i,flag=0;
    char s[5];
    scanf("%s\n", &s);

    for(i=0;i<3;i++){
        if(s[i] == s[i+1]){
            flag=1;
            break;
        }
    }

    if(flag==1){
        printf("Bad\n");
    }

    else{
        printf("Good\n");
    }
}