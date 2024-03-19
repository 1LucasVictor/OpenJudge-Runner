#include <stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    
    if(n==0||n==1){
      
        printf("1\n");
        return 0;
	
    }
    
    int data[n+1];
    int i;
    
    data[0]=1;
    data[1]=1;
    
    for(i=2;i<=n;i++){
      
        data[i]=data[i-1]+data[i-2];
    }
    
    printf("%d\n",data[n]);
    
    return 0;
}

