#include <stdio.h>

int main(void) {
	int w,h,x,y,r;
	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
	if(w<0){
		w=-(w);
	}
	if(h<0){
		h=-(h);
	}
	if(x<0){
		x=-(x);
	}
	if(y<0){
		y=-(y);
	}
	if(r<0){
		r=-(r);
	}
	if((x<=w-r)&&(y<=h-r)){
		printf("Yes\n");
	}else{
		printf("No\n");
	} 
	
	return 0;
}