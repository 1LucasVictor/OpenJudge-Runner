#include<stdio.h>
#include<stdlib.h>

int main(){
  int n,m,k;
  int sum=0,check=0,check2=0;
  int i,j,h,g;
  scanf("%d %d %d",&n,&m,&k);
  int a[n],b[m];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<m;i++)
    scanf("%d",&b[i]);

  i=0,j=0;
  while(sum<=k){
    //printf("sum:%d\n",sum);

    if(a[i]<b[j]){
      if(sum+a[i]<=k){
	sum=sum+a[i];
	i++;
      }
      else
	check++;
    }
    else if(a[i]>b[j]){
      if(sum+b[j]<=k){
	sum=sum+b[j];
	j++;
      }
      else
	check++;
    }
    else{ //a[i]==b[j]
      if(a[i]<=k){
	for(h=1;i+h<=n-1||j+h<=m-1;h++){
	  if(a[i+h]<b[j+h]){
	    if(sum+a[i]<=k){
	      sum=sum+a[i];
	      i++;
	    }
	  }
	  else if(a[i+h]>b[j+h]){
	    if(sum+b[j]<=k){
	      sum=sum+b[j];
	      j++;
	    }
	  }
	  else{
	    check2++;
	    //printf("%d\n",check2);
	  }
	  if(check2+i>=n||check2+j>=m){
	    sum=0;
	    if(n<=m){
	      for(g=0;g<n;g++){
		if(sum+a[g]<=k)
		  sum=sum+a[g];
		//printf("sum2:%d\n",sum);
	      }
	    }
	    else{
	      for(g=0;g<m;g++){
		if(sum+b[g]<=k)
		  sum=sum+b[g]; 
	      }
	    }
	    
	    printf("%d",sum);
	    exit(0);
	  }
	}
      }
      else
	break;
    }
      
    //printf("check:%d\n",check);
    //printf("check2:%d\n",check2);
    
    if(check>=1)
      break;
  }
  printf("%d",i+j);
	  
}
