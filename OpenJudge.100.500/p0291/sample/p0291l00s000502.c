//D
#include <stdio.h>

int main(){

	int n;
	int i;
	int Max,min;
	int out;
	
	scanf("%d",&n);
	
	int x[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	
	if(x[0]>x[1]){Max=-1;min=x[1];}	//??????
	else{Max=x[1];min=x[0];}
	
	for(i=2;i<n-1;i++){
		if(x[i]>Max){Max=x[i];}
		if(x[i]<min){min=x[i];Max=-1;}
	}
	
	if(x[n-1]>=min && Max!=-1){			//???
		if(x[n-1]<Max){out = Max-min;}
		else{out = x[n-1]-min;}
	}
	else{out = x[n-1]-min;}				//???
	
	printf("%d\n",out);
	
	return 0;

}