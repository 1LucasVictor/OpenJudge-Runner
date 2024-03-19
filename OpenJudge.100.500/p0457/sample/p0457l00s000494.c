#include<stdio.h>
int main(){
    long int n, m, k, i, j;
    long int a[200001], b[200001];
    scanf("%ld %ld %ld", &n, &m, &k);
    for(i=0; i<n; i++) scanf("%ld", &a[i]);
    for(i=0; i<m; i++) scanf("%ld", &b[i]);
    i=0; j=0;
    long int time=0, cnt=0, tmp;
    while(time < k){
        if(a[i] <= b[j]){
            tmp = a[i];
            i++;
        }else{
            tmp = b[j];
            j++;
        }
        time += tmp;
        cnt++;
        tmp = 0;
    }
    if(time == k) printf("%ld", cnt);
    else if(time > k) printf("%ld", cnt - 1);
    return 0;
}