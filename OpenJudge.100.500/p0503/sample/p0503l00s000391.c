#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define rep(i,n) for(i=0;i<n;i++)
#define PI 3.14159265358979323846264338327950L
void usort(int a[], int n)
{
    int i,j;
    
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(a[j-1]>a[j]){
 			    int tmp=a[i];
              a[i]=a[j];
              a[j]=tmp;
            }
        }
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int a[210000];
    rep(i,n) scanf("%d",&a[i]);
    usort(a,n);
    int cnt=0;
    rep(i,n-1){
        if(a[i]==a[i+1]){
            cnt++;
        }
    }
    if(cnt>0) printf("NO");
    else printf("YES");
    return 0;
}