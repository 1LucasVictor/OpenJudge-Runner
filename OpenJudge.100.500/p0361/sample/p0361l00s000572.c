#include<stdio.h>

int main(){

int s,h,m,ss,sm;
scanf("%d",&s);

if(s<60){
	printf("0:0:%d\n",s);
}
else if(s<3600 && s>= 60){
	m = s/60;
	ss = s - (m*60);
    printf("0:%d:%d\n",m,ss);
}
else if(s>=3600 && s<=86400){
	h = s/3600;
	sm = s - (h*3600);
	m = sm/60;
	ss = sm - (m*60);
    printf("%d:%d:%d\n",h,m,ss);
}
return 0;
}
