#include<stdio.h>

int main(){
    char c,str[21],str2[21];
    int i=0,j;
    while((c=getchar())!='\n'){
        str[i++]=c;
    }
    for(j=0,i--;i>=0;i--,j++){
        str2[j]=str[i];
    }
    for(i=0;i<j;i++){
        putchar(str2[i]);
    }
    return 0;
}