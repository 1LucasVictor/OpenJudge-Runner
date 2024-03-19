#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MOD 1000000007
#define INF 1000000000000000000
#define PI 3.14159265359
#define ull unsigned long long
#define MYPOW_t int

int main(){
    ull a,B,hyaku,juu,iti,ans=0,m,l,k;
    float b;
    scanf("%lld%f",&a,&b);
    b*=100;
    B=(ull)b;
    hyaku=B/100;
    B-=hyaku*100;
    juu=B/10;
    B-=juu*10;
    iti=B;
    ans=hyaku*a+(juu*a)/10+(iti*a)/100;
    m=juu*a-((juu*a)/10)*10;
    l=iti*a-(iti*a)/100;
    if ((l/10+m)>=10) {
        ans++;
    }
    printf("%lld",ans);
    return 0;
}


