#include<stdio.h>
int main(){
    int n,a[200001],cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(a[i]==a[j])cnt++;
        }
    }
    if(cnt>0)printf("NO\n");
    else printf("YES\n");
    return 0;
}