#include<stdio.h>
#include<string.h>
#include<math.h>
int sub (int h[15]){
	int a;
	for(a=0;a<11;a++){
		if(h[a]==0)return a;
	}
}



int saidai(int h[15]){
	int a=10;;
	while(1){
		if(h[a]!=0){return a;}
		a--;
	}
}
		
	
	
	
int main(){
	int a,b,c,d,e,f,g,h[15]={};
	while(scanf("%d",&a)!=EOF){
		if(a!=0){
			h[sub(h)]=a;
		}else{
			printf("%d\n",h[saidai(h)]);
			h[saidai(h)]=0;
		}
	}
			
	return 0;
}