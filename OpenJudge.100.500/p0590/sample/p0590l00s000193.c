#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	int k;
	int z[5];
	int f=0;
	int g=0;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&k);
	
	z[0]=a;
	z[1]=b;
	z[2]=c;
	z[3]=d;
	z[4]=e;
	
	 for(int i=0;i<5;i++){
		 for(int j=i+1;j<5;j++){
			  f=z[j]-z[i];
			      if(f>k){
			  	  printf(":(");
			  	  return 0;
			  }else{};
		}
	}
	
	printf("Yay!");
	return 0;
	
}