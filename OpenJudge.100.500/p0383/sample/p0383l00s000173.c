#include<stdio.h>
int main(void){
int n,m,l,i,r,t;
unsigned sun=0,sum=0;
int iti[100][100];
int ni[100][100];
scanf("%d %d %d",&n,&m,&l);
for(i=0;i<n;i++){
for(r=0;r<m;r++){
scanf("%d",&iti[i][r]);
}
}
for(i=0;i<m;i++){
for(r=0;r<l;r++){
scanf("%d",&ni[i][r]);
}
}
for(i=0;i<n;i++){
for(r=0;r<l;r++){
for(t=0;t<m;t++){
if(t%2==0){
sum+=iti[i][t]*ni[t][r];
}else{sun+=iti[i][t]*ni[t][r];}
}
if(r!=l-1){
printf("%u ",sun+sum);
}else{
printf("%u\n",sun+sum);
}
sum=0;
sun=0;
}
}
return 0;
}