#include<stdio.h>

int main(void){
    char s[1000];
    char t[1000];
    scanf("%s",s);
    scanf("%s",t);

    int a=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=t[i]) {
            s[i]=t[i];
            a++;
        }
    }
    printf("%d",a);
    printf("\n");
    return 0;
}
