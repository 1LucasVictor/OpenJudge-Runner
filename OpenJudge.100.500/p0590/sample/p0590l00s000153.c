#include <stdio.h>
 
main(){
	int a,b,c,d,e,k;
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e,&k);
    
    int dis;
    dis = e - a;
    if(dis >= k){
    	printf(":(");
    }
    else{
    	printf("Yay!");
    }
}