#include<stdio.h>

int main(void){
    char str[5];
    int i, j;
    int a=0;

    scanf("%s",str);
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(str[i] == str[j]){
                a = a + 1;
            }
        }
    }
    if(a==2){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;

    
}
