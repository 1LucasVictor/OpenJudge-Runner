#include<stdio.h>
int main(){
	
     int n,i,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
        k=i;
        if(i%3==0){
            printf(" %d",i);
        
        }else{
            while(k>0){
                if(k%10==3){
                    printf(" %d",i);
                    break;
                }
                k/=10;
            }
        }
    }
    printf("\n");
	return 0;
   
}

