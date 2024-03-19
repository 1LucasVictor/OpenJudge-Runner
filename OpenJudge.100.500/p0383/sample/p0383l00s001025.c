#include<stdio.h>
int main(){
int a,b,c,d,e,f,g,h;
long  int A[101][101],B[101][101],C[101][101]={0};

scanf("%d %d %d",&a,&b,&c);
for(d=0;d<a;d++){
for(e=0;e<b;e++){
scanf("%d",&A[d][e]);
}
}
for(d=0;d<b;d++){
for(e=0;e<c;e++){
scanf("%d",&B[d][e]);
}
}
for(f=0;f<a;f++){
for(d=0;d<b;d++){
for(e=0;e<c;e++){
	C[f][e]+=A[f][d]*B[d][e];
}
}
}
for(d=0;d<a;d++){
for(e=0;e<c;e++){
printf("%ld",C[d][e]);
if(e!=c-1)
printf(" ");
else
printf("\n");
}
}
return 0;
}