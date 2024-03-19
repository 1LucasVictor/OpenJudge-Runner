#include <stdio.h>
  
 int main(){  
   int n,i,j,k,s=0,minj,l=0,o=0,r=0,t=0;
    scanf("%d",&n);
    char m[n],S[n],C[n],Tas[n],ma,sc;
    int mi[n],Si[n],A[n],Tasi[n];

      for(i = 0; i < n; i++){
	scanf("%c%c%d",&ma,&m[i],&mi[i]);
	  }
      for(i = 0; i < n; i++){
	  S[i] = m[i];
	  Si[i] = mi[i];
	  C[i] = m[i];
	  A[i] = mi[i];
      }

      //kakuyou
      for(i = 0; i < n; i++){
	for( j = i+1; j < n; j++){
	  if(mi[i] == mi[j]){
	    Tas[l] = m[i];
	    Tasi[l] =  mi[i];
	    //Tas[l+1] = m[j];
	    //Tasi[l+1] =  mi[j];
	    l++;
	      }
	}
      }
  


      //bubble

      for(i = 0; i < n; i++){
	for(j = n -1; j > i; j--){
	  
	  if(A[j] < A[j-1]){
	      s = A[j];
	  A[j] = A[j - 1];
	  A[j - 1] = s;

	       sc = C[j];
	  C[j] = C[j - 1];
	  C[j - 1] = sc;
	  }

	}
      }

      for(k = 0; k < n; k++){
	printf("%c%d",C[k],A[k]);
	if ( k != n - 1)printf(" ");
	}
      printf("\n");


     //kakunin  
      for(i = 0; i < n; i++){
	for( j = 0; j < n; j++){

	  if(C[i] == Tasi[j]){
	       r++;
	    if(A[i] == Tas[j]){
	      o++;
	   
	  }
	    if(A[i] != Tas[j]){
	      t++;
	  }
	  }

    }
	if(t > 0)break;
    }

    if(r == 0) printf("Stable\n");
    else if(o > 0)printf("Stable\n");
    else printf("Not stable\n");
    o = 0;
    r = 0;
    t = 0;
    
  

      //selection
      for( i = 0; i < n; i++){
	minj = i;
	   for (j = i; j < n; j++){
	     if (Si[j] < Si[minj]){
	       minj = j;
	     }
	   }
    if(minj > i){
      s = Si[i];
      Si[i] = Si[minj];
      Si[minj] = s;

        sc = S[i];
      S[i] = S[minj];
      S[minj] = sc;
      }
      }

       for(k = 0; k < n; k++){
	printf("%c%d",S[k],Si[k]);
	if ( k != n - 1)printf(" ");
	}
      printf("\n");

      //kakunin2


           for(i = 0; i < n; i++){
	for( j = 0; j < n; j++){

	  if(Si[i] == Tasi[j]){
	       r++;
	    if(S[i] == Tas[j]){
	      o++;
	   
	  }
	    if(S[i] != Tas[j]){
	      t++;
	  }
	  }

    }
	if(t > 0)break;
    }

    if(r == 0) printf("Stable\n");
    else if(o > 0)printf("Stable\n");
    else printf("Not stable\n");
    o = 0;
    r = 0;
    t = 0;

    return 0;
}