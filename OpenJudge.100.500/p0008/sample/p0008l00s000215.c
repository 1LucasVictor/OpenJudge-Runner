#include<stdio.h>
int main(){

        int i,n,j;
        int k=0;
        int count=0;
        int a[50];
        int l=0;

        while(scanf("%d",&n)!=EOF){
                for(j=2;j<=n;j++){
                        for(i=2;i<j;i++){
                                if((j%i)==0) break;
                                k++;
                        }
                if(k==j-2) count++;
                k=0;
                }
                a[l]=count;
                l++;
                count=0;
        }

        for(i=0;i<l;i++){
        printf("%d\n",a[i]);
        }

        return 0;
}