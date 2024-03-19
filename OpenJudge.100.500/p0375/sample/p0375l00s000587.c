#include<stdio.h>
int main(){
  int n,a[10000],i,j=0,k;
    scanf("%d",&n);
    for(i=3;i<=n;i++){
        if(i%3==0){
            a[j]=i;
            j++;
        }else{
            k=i;
            while(1){
                if(k%10==3){
                    a[j]=i;
                    j++;
                    break;
                }
                if(k/10==0)break;
                k=k/10;
            }
        }
    }
    for(i=0;i<j;i++){
        printf(" %d",a[i]);
    }
	 printf("\n");
  return 0;
}

