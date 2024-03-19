#include<stdio.h>

int main(){
	int l,r;

	scanf("%d" "%d",&l,&r);
	if(l>=2019){
    if(l%2019<r%2019){
	r=l+1;
    }else{
	l=r-1;
    }}
	printf("%d\n",(l*r)%2019);
	return 0;
}