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
    long long N,M,K;
    scanf("%lld%lld%lld",&N,&M,&K);
    long long a[N],b[M];
    for(ll i=0;i<N;i++){
        scanf("%lld",&a[i]);
    }
    for(ll i=0;i<M;i++){
        scanf("%lld",&b[i]);
    }
    ll sum=0,cnt=0;
    ll p=0,q=0;
    while(sum<=K){
        if(a[p]<=b[q] && p<N){
            sum+=a[p];
            p++;
            cnt++;
        }else if(a[p]>b[q] && q<M){
            sum+=b[q];
            q++;
            cnt++;
        }else if(p==N-1 && q==M-1){
            break;
        }else if(sum==K){
            printf("%lld",cnt);
            return 0;
        }
    }
    printf("%lld",cnt-1);
}
