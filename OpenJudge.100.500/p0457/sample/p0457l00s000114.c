#include <stdio.h>

int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    long long int a[n],b[m];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%lld",&b[i]);
    }
    int ans=0;
    int i=0,j=0;
    while(1){
        //printf("%d %d\n",a[i],b[j]);
        if(a[i]<b[j]){
            k-=a[i];
            if(i+1 < n) i++;
        }else if(a[i]>b[j]){
            k-=b[j];
            if(j+1 < m) j++;
        }else{
            if(i<n&&j<m) {
                if(a[i+1]<a[i]) {
                    k-=a[i];
                    if(i+1 < n) i++;
                }else{
                    k-=b[j];
                    if(j+1 < m) j++;
                }
            }else{
                if(a[i]<b[j]){
                    k-=a[i];
                    if(i+1 < n) i++;
                }else if(a[i]>b[j]){
                    k-=b[j];
                    if(j+1 < m) j++;
                }
            }
        }
        //printf("%d %d\n",i,j);
        ans++;
        if(k==0) break;
        else if(k<0) {
            ans--;break;
        }
    }
    printf("%d\n",ans);
    return 0;
    
}