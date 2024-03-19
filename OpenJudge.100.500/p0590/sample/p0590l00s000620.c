#include <stdio.h>
#include <string.h>
int main(){
    int a[5],k,i,j,ok=1;
	for(i=0;i<5;i++)scanf("%d",&a[i]);
	scanf("%d",&k);
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[j]-a[i]<=k)ok*=1;
            else ok*=0;
        }
    }
   if(ok==1) printf("Yay!");
   else printf(":(");
	
}