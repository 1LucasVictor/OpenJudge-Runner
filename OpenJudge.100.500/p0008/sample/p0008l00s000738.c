#include <stdio.h>
int main(void){
    // Your code here!
    int n,i,j;
    while (scanf("%d", &n) != EOF){
        int a[n], sum=0;
        a[0]=0;
        for(i=1;i<n;i++){
            a[i]=1;
        }
        for(i=1;i<n;i++){
            if(a[i-1]==1){
                    for(j=2;i<i;j+=i){
                        if(i %j==0){
                            a[i-1]=0;
                            break;
                        }
                }
                for(j=i*2; j<=n; j+=i){
                    a[j-1]=0;
                }
            }
            if(a[i]){
                sum++;
            }
        }
        printf("%d\n",sum);
        
    }
    return 0;
}

