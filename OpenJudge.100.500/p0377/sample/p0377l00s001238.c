#include <stdio.h>
int main(void){

int a,b,c;

b=0;
c=0;
int S[13],H[13],C[13],D[13]={0};
char ca;

for(b=0;b<13;b++){
S[b]=b+1;
H[b]=b+1;
C[b]=b+1;
D[b]=b+1;
}

//#########################;
scanf("%d",&c);
//#########################
for(b=0;b<c;b++){
scanf(" %c %d",&ca,&a);

//printf("a=%d,b=%d,c=%d,ca=%c\n",a,b,c,ca);

if(ca=='S'){
S[a-1]=0;
}
if(ca=='H'){
H[a-1]=0;
}
if(ca=='C'){
C[a-1]=0;
}
if(ca=='D'){
D[a-1]=0;
}

}
//########################
for(b=0;b<13;b++){
if(S[b]!=0){
printf("S %d\n",S[b]);
}
}
for(b=0;b<13;b++){
if(H[b]!=0){
printf("H %d\n",H[b]);
}
}
for(b=0;b<13;b++){
if(C[b]!=0){
printf("C %d\n",C[b]);
}
}
for(b=0;b<13;b++){
if(D[b]!=0){
printf("D %d\n",D[b]);
}
}
return 0;
}