#include<stdio.h>
int main()
{
    long long n,a[200000],i;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    int f=0,f1=0;
    for(i=1;i<n;){
        if(a[i]>a[i-1]){
            f++;
            while(a[i]>a[i-1]&&i<n){
                i++;
            }
        }else if(a[i]<a[i-1]){
            if(f==0)break;
            f1++;
            while(a[i]<a[i-1]&&i<n)i++;
        }else{
            break;
        }
    }
    if(f==1&&f1==1&&i==n){
        printf("NO\n");
    }else  printf("YES\n");
}

