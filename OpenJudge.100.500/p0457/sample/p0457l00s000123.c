#include <stdio.h>
int main(void){
    // Your code here!
    int n,m;
    long int k;
    scanf("%d %d %ld",&n,&m,&k);
    
    long int a[200000]={};
    long int as[200000]={};
    int iamax=0;
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
        if(i==0){
            as[i]=a[i];
        }else{
            as[i]=as[i-1]+a[i];
        }
        if(as[i]>k && iamax==0){
            iamax=i-1;
        }
        //printf("%d ",as[i]);
    }//printf("\n");
    
    long int b[200000]={};
    long int bs[200000]={};
    for(int i=0;i<m;i++){
        scanf("%ld",&b[i]);
        if(i==0){
            bs[i]=b[i];
        }else{
            bs[i]=bs[i-1]+b[i];
        }
        //printf("%d ",bs[i]);
    }//printf("\n");
    
    int num=0;
    int bkari=0;
    for(int i=n-1;i>=0;i--){
        if(as[i]>k)continue;
        
        for(int j=bkari;j<m;j++){
            //printf("%d %d %d\n",as[i]+bs[j],i,j);
            if(as[i]+bs[j]>k){
                if(i+j+1>num){
                    num=i+j+1;
                    //printf("%d %d %d %d\n",as[i],bs[j],i,j);
                }
                bkari=j-1;
                break;
            }else if( i+j==n+m-2 && as[i]+bs[j]<=k){
                num=i+j+2;
            }
        }
    }
    printf("%d\n",num);
}
