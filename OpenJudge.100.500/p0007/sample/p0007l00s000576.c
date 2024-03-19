#include<stdio.h>
int main(){

        int n,i,j,k,l;
        int s1,s2,s3,s4;
        int count=0;
        int a[51];
        int r=0;

        while(scanf("%d",&n)!=EOF){

                for(i=0;i<=9;i++){
                        for(j=0;j<=9;j++){
                                for(k=0;k<=9;k++){
                                        for(l=0;l<=9;l++){
                                        if(i+j+k+l==n) count++;
                                        }
                                }
                        }
                }

                a[r]=count;
                r++;
                count=0;
        }

        for(i=0;i<r;i++){
                printf("%d\n",a[i]);
        }

        return 0;
}