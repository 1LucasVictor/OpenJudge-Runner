//AOJ 0021
#include <stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    double m1,m2,n1,n2;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    	m1=(y2-y1);
        n1=(x2-x1);
    	m2=(y4-y3);
        n2=(x4-x3);
if(n1==0){
 if(n2==0){
  if(n1==n2)puts("YES");
  else puts("NO");
 }else puts("NO");
}else if(n2==0){
puts("NO");}
else{if(m1/n1==m2/n2)puts("YES");
    	else puts("NO");
    	}}
	return 0;
}