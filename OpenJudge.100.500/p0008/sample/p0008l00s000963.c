#include <stdio.h>
#include <string.h>

int main(){
int n[3];
int i;
int q;
int a;
int z=0;
int x=0;
int c[3];
for(q=0;q<3;q++){
	scanf("%d",&n[q]);
	for(a=1;a<=n[q];a++){
	for(i=1;i<=n[q];i++){
		if(a%i==0){
			
			z++;
			
			
		}
		
		
		
		
		
		
		
	}
	
	if(z==2){
		
		x++;
		
		
	}

	
	z=0;
}
c[q]=x;
x=0;


	
}
for(i=0;i<3;i++){
	printf("%d\n",c[i]);
	
	
}


	return 0;
}