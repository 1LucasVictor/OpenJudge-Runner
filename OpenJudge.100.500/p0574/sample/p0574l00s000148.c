#include<stdio.h>
#include<string.h>
int main(){
    int a=0;
    char s[4],b,c,d=0,e=0;
    scanf("%s",s);
    for(int i=0;i<3;i++){
        if(strncmp(&s[i],&s[i+1],1)==0){
            a++;
        }
    }
    if(a>0){
        printf("Bad\n");
    }
    else{
        printf("Good\n");
    }
    return 0;
}
