#include<stdio.h>

int main(){
  int n,m,k;
  int sum=0,check=0;
  int i,j,h;
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
	
      }
    }
    //printf("check:%d\n",check);
    if(check>=1 || (sum==0 && check==0))
      break;
  }
  printf("%d",i+j);
	  
}