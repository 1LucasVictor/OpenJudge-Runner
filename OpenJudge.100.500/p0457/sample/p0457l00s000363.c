#include <stdio.h>

int main(void)
{
    int n, m;
    long k;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%ld", &k);

    long a[200001], b[200001];
    for(int i=0; i<n; i++) scanf("%ld", &a[i]);
    for(int i=0; i<m; i++) scanf("%ld", &b[i]);
    long t=0;
    int i=0, j=0, ans=0;
    
    while (1)
    {
        if(i>=n && j>=m){
            break;
        }else if(i>=n && j<m){
            t += b[j];
            j++;
        }else if(i<m && j>=m){
            t += a[i];
            i++;
        }else{
            if(a[i]<=b[j]){
                t += a[i];
                i++;
            }else{
                t += b[j];
                j++;
            }
        }
        
        if(t>k) break;
        else ans++;
    }
    printf("%d", ans);
}