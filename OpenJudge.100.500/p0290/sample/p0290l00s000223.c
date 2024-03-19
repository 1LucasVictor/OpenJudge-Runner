#include <stdio.h>

int main(){
    int array[10000];
    int n,i,j,count,result=0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=2;j<array[i];j++){
            if((array[i]%j)==0){
                count++;
                break;
            }
        }
        if(count==0) result++;
    }
    printf("%d\n",result);
    return 0;
}
