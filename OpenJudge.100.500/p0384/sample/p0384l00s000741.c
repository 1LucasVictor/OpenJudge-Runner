#include<stdio.h>
int main(void){
    char str[1200];
    int i;
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=('a'-'A');
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i]-=('a'-'A');
        }
    }
    printf("%s",str);
    return 0;
}
