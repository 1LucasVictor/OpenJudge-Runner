#include <stdio.h>

int main(){
    int n,m,i,j,s=0;
    long int k,l;
    long int a[200000];
    long int b[200000];

    scanf("%d %d %ld",&n,&m,&k);
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    for(i=0;i<m;i++){
        scanf("%ld",&b[i]);
    }
    i=0;
    j=0;
    while(1){
        if(i>=n){
            l+=b[j];
            j++;
        }else if(j>=m){
            l+=a[i];
            i++;
        }else if(a[i]<=b[j]){
            l+=a[i];
            i++;
        }else if(a[i]>b[j]){
            l+=b[j];
            j++;
        }
        s++;
        if(i>=n&&j>=m){
        break;
        }
        if(k<l){
        s=s-1;
        break;
        }
    }
    printf("%d\n",s);
    return 0;
}