#include<stdio.h>
double det(int a,int b,int c,int d);
int main(){
int a,b,c,d,e,f;
while(scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f)!=EOF){
printf("%.3f %.3f\n",round(det(c,f,b,e)/det(a,d,b,e)),round(det(a,d,c,f)/det(a,d,b,e)));
}
return 0;
}
double det(int a,int b,int c,int d){
double determinant;
determinant=a*d*1.0-b*c*1.0;
return determinant;
}