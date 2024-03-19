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
    int a[N],b[M];
    rep(i,N){
        scanf("%d",&a[i]);
    }
    rep(i,M){
        scanf("%d",&b[i]);
    }
    long long sum=0;
    int cnt=0;
    int p=0,q=0;
    while(1){
        if(a[p]<=b[q]){
            sum+=a[p];
            p++;
            cnt++;
        }else{
            sum+=b[q];
            q++;
            cnt++;
        }
        if(sum>K)
            break;
    }
    printf("%d",cnt-1);
}
