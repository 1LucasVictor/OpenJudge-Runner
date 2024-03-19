#include<stdio.h>
#include<limits.h>

int sum[100000];
int w[100000];
int sta[100000];

int imax(int a[], int n){
    int maxi = 0;
    for(int i=0; i<n; i++)
        if(a[maxi] < a[i])
            maxi = i;
    return maxi;
}

int main(void){
    int n, k;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &w[i]);
        if(i < k) {
            sta[i] = i;
            sum[i] = w[i];
        } else {
            sum[k-1] += w[i];
        }
    }
    int ans = INT_MAX;
    while(1){
        int i = imax(sum, k);
        if(i == 0) break;
        sum[i-1] += w[sta[i]];
        sum[i] -= w[sta[i]];
        sta[i]++;
        int newmax = sum[i-1] < sum[i] ? sum[i] : sum[i-1];
        ans = ans > newmax ? newmax : ans;
    }
    printf("%d\n", ans);
}

