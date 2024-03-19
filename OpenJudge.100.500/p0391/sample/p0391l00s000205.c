#include <stdio.h>
#include <string.h>

void print(char* s, int a, int b){
    for (int i = a; i <= b; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

void replace(char* s, int a, int b){
    char p[b-a+2];
    scanf("%s", p);
    strncpy(s+a, p, b-a+1);
}

void reverse(char*s, int a, int b){
    char p[b-a+2];
    strncpy(p, s+a, b-a+1);
    for (int i = a; i <= b; i++)
    {
        s[i]=p[b-i];
    }
}

int main(){
    char str[1001], o[8];
    int q, a, b;
    scanf("%s", str);
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%s %d %d", o, &a, &b);
        if(o[0]=='p')print(str, a, b);
        else if(o[2]=='p')replace(str, a, b);
        else if(o[2]=='v')reverse(str, a, b);
    }
    

}
