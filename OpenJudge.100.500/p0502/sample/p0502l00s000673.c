#include <stdio.h>
int main(void){
    int i,n;
    scanf("%d\n",&n);
    int a,j=0;
    
    for (i=0;i<n;i++){
	scanf("%d",&a);
	if(a%2==0&&a%3!=0&&a%5!=0){
	        printf("DENIED");
	        j++;
	        break;
	    }
	}
    if(j==0)printf("APPROVED");
 
    return 0;
    }