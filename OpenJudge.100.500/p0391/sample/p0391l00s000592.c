#include <stdio.h>
#include <string.h>

int x,y;
char s[1005],c[1005],r;

void replace() {
    scanf("%d%d%s",&x,&y,c);
    for(int j=x,k=0;k<y-x+1;j++,k++) s[j]=c[k];
}

void reverse() {
    scanf("%d%d",&x,&y);
    for(int j=x,k=y;j<x+(y-x+1)/2;j++,k--) {
        r=s[j];
        s[j]=s[k];
        s[k]=r;
    }
}

void print() {
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++) printf("%c",s[i]);
    printf("\n");
}



int main () {
    int a;
    scanf("%s%d",s,&a);
    for(;a--;){
        scanf("%s",c);
        if(!strcmp(c,"replace")) replace();
        else if(!strcmp(c,"reverse")) reverse();
        else if(!strcmp(c,"print")) print();
    }
}

