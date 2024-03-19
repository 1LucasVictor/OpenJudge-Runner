#include<stdio.h>

int main(){
    char b[4];
    scanf("%d",&b);
    char first,second = '\0';
    first = b[0];
    if(first != b[1]){
        second = b[1];
    }
    if(first != b[2] && second == '\0'){/*三つめが違う */
        second = b[2];
    }else if(b[2] == first || b[2] == second){
    }else{printf("No");
    }
    if(b[0] == b[1] && b[2] == b[3]){
        printf("Yes");
    }else if(b[0] == b[2] && b[1] == b[3] ){
        printf("Yes");
    }
    else if(b[0] == b[3] && b[1] == b[2]){
        printf("Yes");
    }else{
        printf("No");
    }
}