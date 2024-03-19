#include<stdio.h>
int main(){
    char str1[50];

    scanf("%s",&str1);

    if(str1[0]==str1[1] || str1[1] == str1[2] || str1[2]==str1[3]){
        printf("Bad");
    }else{
        printf("Good");
    }
}
