#include<stdio.h>
main(){
	int x,a,b,c,d,count;
	while(scanf("%d",&x)!=EOF){
		count=0;
		for(a=0;a<10;a++){
			for(b=0;b<10;b++){
				for(c=0;c<10;c++){
					for(d=0;d<10;d++){
						if((a+b+c+d)==x)count++;
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}