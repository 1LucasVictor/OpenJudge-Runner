#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(int i=0;i<n;i++)
int gcd(int a, int b){
    int r=1;
    while(r!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
typedef long long ll;
void revStr(char* str){
    int size = strlen(str);
    int i,j;
    char tmp = {0};
    for(i = 0, j = size - 1; i < size / 2; i++, j--){
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }return;
}
typedef struct{
    char name[20];
    int vl;
}data;

//昇順
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}


int kai(int n){
    if(n==0){
        return 1;
    }
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}

int main(){
    ll N,M,K;
    scanf("%lld%lld%lld",&N,&M,&K);
    ll a[N],b[M];
    for(ll i=0;i<N;i++){
        scanf("%lld",&a[i]);
    }
    for(ll i=0;i<M;i++){
        scanf("%lld",&b[i]);
    }
    ll p=0,q=0;
    ll sum=0,cnt=0;
    while(sum<=K){
        if(a[p]>b[q] && q<M){
            sum+=b[q];
            q++;
            cnt++;
        }else if(a[p]<=b[q] && p<N){
            sum+=a[p];
            p++;
            cnt++;
        }else if(p==N && q==M){
            printf("%lld",N+M);
            return 0;
        }else if(p>=N){
            sum+=b[q];
            q++;
            cnt++;
        }else if(q>=N){
            sum+=a[p];
            p++;
            cnt++;
        }
    }
    printf("%lld",cnt-1);
}
