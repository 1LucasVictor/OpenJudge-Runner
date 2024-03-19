#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    int n,a,b,c,d;
    scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
    char s[n+5];
    scanf("%s",s);
    s[n]='#';
    s[n+1]='#';
    s[a-1]='A';
    s[b-1]='B';
    bool ac=false,bd=false,change=false;
    while(1){
        change=false;
        if (s[a]=='.'){
            s[a-1]='.';
            a++;
            s[a-1]='A';
            change=true;
        } else if (s[a+1]=='.'){
            s[a-1]='.';
            a+=2;
            s[a-1]='A';
            change=true;
        } else if (s[b]=='.'){
            s[b-1]='.';
            b++;
            s[b-1]='B';
            change=true;
        } else if (s[b+1]=='.'){
            s[b-1]='.';
            b+=2;
            s[b-1]='B';
            change=true;
            
        }
        if (a==c){
            ac=true;
        }
        if (b==d){
            bd=true;
        }
        if (ac==true && bd==true){
            printf("Yes\n");
            break;
        }
        if (change==false){
            printf("No\n");
            break;
        }
    }
    return 0;
}
