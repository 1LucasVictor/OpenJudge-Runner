#include<stdio.h>
int main(){
	int n,a[500001],j,k,num,i,t;
	while(scanf("%d",&n)!=EOF){
		num=0;
	 for(i=1;i<=n;i++){
	 	scanf("%d",&a[0]);
	 	k=j=i;
	 	if(i==1){
	 	    a[1]=a[0];
		 }else{
		 	j--;
	 	 	while(j){
	 	 		if(a[0]>a[j]||a[0]==a[j]) break;
	 	 		j--;
			  }
			  num=num+i-j;
			  for(;k>j;k--) a[k+1]=a[k];
			  a[j+1]=a[0];
		  }
	 }
	 for(i=1;i<=n;i++){
	 	if(i!=n)printf("%d ",a[i]);
	 	 else printf("%d",a[i]);
	 } 
	 printf("\n"); 
	 printf("%d\n",num);
     }
	return 0;
   }