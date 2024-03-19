#include<stdio.h>

int main(){
    int n, r[200000];
    int i, j, max;
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d", &r[i]);
    max = r[1]-r[0];
    for(i=n-1;i>=0;i--){
        for(j=i-1;j>=0;j--){
            if(max == r[i]-r[j]) break;
            if(r[i]-r[j] > max){
                max = r[i]-r[j];
            } 
        }
    }
    printf("%d\n", max);
    return 0;
}