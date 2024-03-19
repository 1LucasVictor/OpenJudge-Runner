#include <stdio.h>
 
int main(void) {
	char o[10000];
	int a[10000],b[10000],i[10000],z,x,n;
	z=0;
	x=0;
	while(1){
		scanf("%d ",&a[z]);
		scanf("%c ",&o[z]);
		scanf("%d",&b[z]);
		if(o[z] == '?'){break;}
		if(o[x] == '+'){
			i[x]=a[x]+b[x];
		}else if(o[x] == '-'){
			i[x]=a[x]-b[x];
		}else if(o[x] == '*'){
			i[x]=a[x]*b[x];
		}else if(o[x] == '/'){
			i[x]=a[x]/b[x];
		}else{
			break;
		}
		z++;
		x++;
	}
	for(n=0;n<x;n++){
		printf("%d\n",i[n]);
	}
	return 0;
}
