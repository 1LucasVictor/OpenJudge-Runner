#include <stdio.h>
int main(){
    int n,i,kin=100000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        kin*=1.05;
        if(kin%1000!=0){
            kin=kin-(kin%1000)+1000;
        }
    }
    printf("%d\n",kin);
	return 0;
}