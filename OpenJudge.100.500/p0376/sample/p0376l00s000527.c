#include<stdio.h>
int main(){
        int n,i;
        int a[100];
	
	    scanf("%d",&n);
        for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
        }
        for(i = n-1;0 < i;i--){
        	printf("%d ",a[i]);
        }
        printf("%d\n",a[i]);
        return 0;
}
