#include <stdio.h>

int main(){

    int n,m,l,i,j,k;
    long a[110][110],bb[110][110],c[110][110];
    
	 scanf("%d",&n);  	 
  	 scanf("%d",&m);
   	 scanf("%d",&l);
    
     for(i=1;i<=n;++i){
	  for(j=1;j<=m;++j){             
            scanf("%ld",&a[i][j]);
        }
      }
      
     for(i=1;i<=m;++i){
	  for(j=1;j<=l;++j){             
            scanf("%ld",&bb[i][j]);
        }
      }
     
     for(i=1;i<=n;++i){
	   for(j=1;j<=l;++j){
	    for(k=1;k<=m;++k){
	      c[i][j]+=a[i][k]*bb[k][j];       
		}
       
        if (j==1) {
		 printf("%ld",c[i][j]);
        }else{
	     printf(" %ld",c[i][j]);
        }
       } 
         printf("\n");
	  }
	    
    	  

	return 0;
}