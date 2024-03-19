#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define INF 1001001001
#define ll long long
#define rep(i,n)  for(i=0; i<n;  i++)
#define rep2(i,n) for(i=1; i<=n; i++)

int  get_min(int a, int b){ if(a<b) return a; else return b; }
int  get_max(int a, int b){ if(a>b) return a; else return b; }

int main(){
    char str[3] = {};
    scanf("%s",str);

    if(!strcmp(str, "AAA") || !strcmp(str, "BBB")){
        printf("No");
        return 0;
    }
    else    printf("Yes");
    return 0;
}