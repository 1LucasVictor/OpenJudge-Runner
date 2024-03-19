#include <stdio.h>

int main(){

    int n,m,i,j,d,A[100][100],b[100],c[100]; 
 
	 scanf("%d",&n);  	 
  	 scanf("%d",&m);  	 
 	 
  	 
    for(i=1;i<=n;++i){
	  for(j=1;j<=m;++j){
	   scanf("%d",&d);
	     A[i][j]=d;
	     c[i]=0;   	     
	  }
    }	 	  

    for(j=1;j<=m;++j){
 	    scanf("%d",&d);
	     b[j]=d;
     }

    for(i=1;i<=n;++i){
 	  for(j=1;j<=m;++j){
         c[i]+=A[i][j]*b[j];
        //printf("%c %d \n",sut,num);
      }
	}	 
	
	for(i=1;i<=n;++i){ 
        printf ("%d\n",c[i]);
    }
    	

	return 0;
}