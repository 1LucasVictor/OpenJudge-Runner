
#include <stdio.h>

int main(){

    int n,m,l,a[110][110],bb[110][110],c[110][110],i,j,k;
  
	 scanf("%d",&n);  	 
  	 scanf("%d",&m);
   	 scanf("%d",&l);
    
     for(i=1;i<=n;++i){
	  for(j=1;j<=m;++j){             
            scanf("%d",&a[i][j]);
        }
      }
      
     for(i=1;i<=m;++i){
	  for(j=1;j<=l;++j){             
            scanf("%d",&bb[i][j]);
        }
      }
     
     for(i=1;i<=n;++i){
	   for(j=1;j<=l;++j){
	    for(k=1;k<=m;++k){
	      c[i][j]+=a[i][k]*bb[k][j];       
		}
       
        if (j==1) {
		 printf("%d",c[i][j]);
        }else{
	     printf(" %d",c[i][j]);
        }
       } 
         printf("\n");
	  }
	    
    	  

	return 0;
}