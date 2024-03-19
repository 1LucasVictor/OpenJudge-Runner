#include<stdio.h>

int main(){
    int i=0,n,data[10000];
    while(scanf("%d",&n)!=EOF){
       if(n!=0){
            data[i]=n;
            i++;
       }
        else {
        i--;
        printf("%d\n",data[i]);
        }
    }
	return 0;
}