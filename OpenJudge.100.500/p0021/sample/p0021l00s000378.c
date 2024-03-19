#include<stdio.h>

int main(){
  int si,i,j,n,sq[5000],m,prev,sum,max,k;
  do{
    scanf("%d",&n);
    if(!n) break;
    for(si=0,i=0,prev=2,sq[0]=0,j=0;i<n;i++){
      scanf("%d",&m);
      if(prev*m>=0){
	if(prev==2) prev=1;
	sq[si]+=m;
      }else{
	if(prev!=2){
	  si++;
	  sq[si]=m;
	  prev*=-1;
	}
      }
      if(prev==2){
	if(j==0||m>j){
	  j=m;
	}
      }	
    }
    if(prev==2){
      printf("%d\n",j);
      continue;
    }
    if(sq[si]<0) si--;
    n=si+1;
    for(sum=0,i=0;i<n;i++){
      sum+=sq[i];
    }
    max=sum;

    for(i=n-2;i>0;i-=2){
      for(j=0;j<((n-i)/2+1);j++){
	for(k=0,sum=0;k<i;k++){
	  sum+=sq[k+j*2];
	}
	if(sum>max) max=sum;
      }
    }
    printf("%d\n",max);
  }while(1);
  return 0;
}