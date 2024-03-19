#include<stdio.h>
int main(void){
int n,m,l,i,r,t,sum=0;
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
scanf("%ld",&ni[i][r]);
}
}
for(i=0;i<n;i++){
for(r=0;r<l;r++){
for(t=0;t<m;t++){
sum+=iti[i][t]*ni[t][r];
}
if(r!=l-1){
printf("%d ",sum);
}else{
printf("%d\n",sum);
}
sum=0;
}
}
return 0;
}