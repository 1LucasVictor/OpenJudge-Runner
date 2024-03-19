#include <stdio.h>
#include<math.h>
int main(){
    int i , flag=0, count=0,n,j,A;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&A);
        for(j=3; j<=A; j+=2){
            if(A%j==0 && A%2!=0) flag++;
        }
        if(flag==1 || A==2){
            count++;
            //printf("%d ",A);
        }
        flag=0;
    }
    printf("%d\n",count);
    return 0;
}
    


