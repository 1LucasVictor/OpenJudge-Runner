#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void){
    int n,k;
    scanf("%d %d",&n,&k);
    int w[n];
    for(int i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    
    int P=0;
    int sum=0;
    int count=0;
        for(int j=0;j<n;j++){
        sum=sum+w[j];
    }
    P=sum/k;
    int lift=0;
    int l=0;
    while(1){
    	for(l=0;l<n;l++){
    		
    		lift+=w[l];
    		if(P<lift){
    			lift=0;
    			l--;
    			count++;
    			if(count>=k){
    				count=0;
    				P++;
    				l++;
    				break;
				}
			}
		}
		if(l==n) break;
	}
  printf("%d\n",P);


    return 0;
}

