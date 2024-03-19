#include<stdio.h>
#include<string.h>
#define REP(i,n) for (int i = 0 ; i < (int)n ; i++)
typedef long long ll;

int main(){
    char s[100];
    char t[100];
    int count = 0;
    scanf("%s",s);
    scanf("%s",t);

    REP(i,strlen(s)){
        if( s[i] == t[i] ){
            count++;
        }
    }

    if(count == strlen(s)){
        printf("Yes\n");
    }else
    {
        printf("No\n");
    }
}