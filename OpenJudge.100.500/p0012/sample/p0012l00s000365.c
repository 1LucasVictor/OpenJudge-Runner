#include<stdio.h>
#define ioo 300
int main(){
        int a[500]={0},i,j,n,o,flg=0;
        while(scanf("%d",&n)!=EOF){
        if(n==0){
                for(i=0;i<ioo;i++){
                        if(a[i]==0){
                                o=a[i-1];
                                a[i-1]=0;
                                flg=1;
                                break;
                        }
                }
        }
        else if(n!=0){
                for(j=0;j<ioo;j++){
                        if(a[j]==0){
                                a[j]=n;
                                break;
                        }
                }
        }
        if(flg==1)printf("%d\n",o);
        flg=0;
        }
        return 0;
}