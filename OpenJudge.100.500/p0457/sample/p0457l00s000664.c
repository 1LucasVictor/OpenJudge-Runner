#include<stdio.h>
long long int a[200000], b[200000];
long long int sum_a[200001], sum_b[200001];
int max(int a, int b){return a > b ? a : b;}
int min(int a, int b){return a < b ? a : b;}

int main(void){
    sum_a[0] = 0;
    sum_b[0] = 0;
    int n, m;
    long long int k;
    scanf("%d%d%lld", &n, &m, &k);
    
    

    int i, j;
    for(i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        sum_a[i+1] = sum_a[i] + a[i];
    }
    for(i = 0; i < m; i++){
        scanf("%lld", &b[i]);
        sum_b[i+1] = sum_b[i] + b[i];
    }
    int ans = 0;
    for(i = 0; i < n + 1; i++){
        long long int L = k - sum_a[i];//Aのテーブルからi冊読む
        if(L < 0){
            continue;
        }else if(L == 0){
            ans = max(ans, i);
        }else if(sum_b[m] <= L){
            ans = max(ans, i + m);
        }
        int r = m;
        int l = 0;
        while(r - l != 1){
            int mid = (r + l)/2;
            if(sum_b[mid] <= L){
                l = mid;
            }else{
                r = mid;
            }
        }
        ans = max(ans, l + i);
    }
    printf("%d\n", ans);
    return 0;
}