#include<stdio.h>

int main(){
    int n,x;
    int i,j,k,posi=0,counter[10000];
    
    for(i=0;i<10000;i++){
        counter[i]=0;
    }
    
    while(1){
        
        scanf("%d %d",&n,&x);
        
        if(n==0&&x==0){
            counter[posi]=-1;
            break;
        }
        
        for(i=1;i<n-1;i++){
            for(j=i+1;j<n;j++){
                k=x-i-j;
                if(k<=j){
                    break;
                }else if(k>n){
                    continue;
                }else{
                    counter[posi]++;
                }
            }
        }
        posi++;
    }
    
    posi=0;
    while(counter[posi]!=-1){
        printf("%d\n",counter[posi]);
        posi++;
    }
    
    return 0;
}