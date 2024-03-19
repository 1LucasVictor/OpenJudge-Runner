#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,cnt1=0,cnt2=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            cnt1++;
            if(a[i]%3==0||a[i]%5==0) cnt2++;
        }
    }

    if(cnt1!=0&&cnt2!=0&&cnt1==cnt2) printf("APPROVED");
    else if(cnt1!=cnt2) printf("DENIED");
    else printf("APPROVED");


    return 0;
}