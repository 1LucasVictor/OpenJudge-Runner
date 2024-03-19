#include<stdio.h>
 
int main(void){
    char str[5];
    scanf("%s",str);
    for(int i=0;i<4;i++){
        if(str[i]==str[i+1]){
            printf("Bad\n");
            return 0;
        }
    }
    printf("Good\n");
     return 0;
}