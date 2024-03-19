#include<stdio.h>
int main(void){
int n,m,l,i,r,t;
unsigned sun=0,sum=0,sum2=0,sum3=0;
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
if(t%4==0){
sum+=iti[i][t]*ni[t][r];
}else if(t%4==1){sun+=iti[i][t]*ni[t][r];}
else if(t%4==2){sum3+=iti[i][t]*ni[t][r];}
else{sum2+=iti[i][t]*ni[t][r];}
}
if(r!=l-1){
printf("%lu ",sun+sum+sum2+sum3);
}else{
printf("%lu\n",sun+sum+sum2+sum3);
}
sum=0;
sun=0;
sum2=0;
}
}
return 0;
}