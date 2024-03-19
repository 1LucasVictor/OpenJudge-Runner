    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include <time.h>
    typedef long long ll;
    typedef long double ld;
    #define INF (1LL<<60)
    #define MOD1 1000000007
    /*swap 交換*/
    void swap(ll *a, ll *b){ll c;c=*b;*b=*a;*a=c;}
    /*2つのうち大きい数を返す*/
    ll max2(ll a,ll b){return a>=b?a:b;}
    /*2つのうち小さい数を返す*/
    ll min2(ll a,ll b){return a>=b?b:a;}
    /*絶対値*/
    ll ABS(ll a){return a>=0?a:(-a);}
    typedef struct{
        ll aa;
        ll bb;
    }frequent;
    // 小大
    int compare(const void *a, const void *b){
        return *(ll *)a>*(ll *)b?1:*(ll *)a<*(ll *)b?-1:0;}

    int main(void){
        ll n,a,b,c,d,i;
        scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
        char s[n+5];
        scanf("%s",s);
        // ll r=0;
        if(c<d){
            for(i=a+1;i<c-1;i++){
                if(s[i]=='#'&&s[i-1]=='#'){
                    printf("No\n");
                    return 0;
                }            
            }
            for(i=b+1;i<d-1;i++){
                if(s[i]=='#'&&s[i-1]=='#'){
                    printf("No\n");
                    return 0;
                }            
            }
            printf("Yes\n");
            return 0;
        }
        ll emp=0,ok=0;
        for(i=a;i<c-1;i++){
            if(i!=a){
                if(s[i]=='#'&&s[i-1]=='#'){
                    printf("No\n");
                    return 0;
                }
            }
            if(i>=b-2&&i<=d){
                if(s[i]=='.'){
                    emp++;
                    if(emp>2) ok=1;
                }else{
                    emp=0;
                }
            }
            // printf("%lld ",emp);
        }
        if(ok==1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        return 0;
    }
