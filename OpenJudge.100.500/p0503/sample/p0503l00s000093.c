#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define rep(i,n) for(i=0;i<n;i++)
#define PI 3.14159265358979323846264338327950L
void usort(long int a[], int n)
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
    long int a[n];
    rep(i,n) scanf("%ld",&a[i]);
    usort(a,n);
    rep(i,n-1){
        if(a[i]==a[i+1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}