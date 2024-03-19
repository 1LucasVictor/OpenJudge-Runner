#include<stdio.h>

int main(void){
    int i,n,k,l,r;
    long int sum,ans;
    ans = 0;
    sum = 0;

    scanf("%d %d",&n,&k);
    int a[n+10];

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }


    r=0;
    for(l=0; l<n; l++){

        while(sum < k){
            if(r==n)break;
            else{
                sum += a[r];
                r++;
            }
        }

        if(sum < k)break;
        ans += n-r+1;
        sum -= a[l];
    }

    printf("%ld\n",ans);

    return 0;
}