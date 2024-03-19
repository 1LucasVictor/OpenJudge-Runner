#include <stdio.h>

int main(void) {
int g[4][14];
int a,b,c,e,f; 
char d; 
scanf("%d",&a);
a*=2; 
for(b=0;b<a;b++){ 
scanf("%c %d",&d,&c); 
if(d=='S'){
  g[0][c]=3;} 
else if(d=='H'){
  g[1][c]=3;} 
else if(d=='C'){
  g[2][c]=3;} 
else if(d=='D'){
  g[3][c]=3;}}
  for(f=1;f<14;f++){
   if(g[0][f]!=3){
    printf("S %d\n",f);}}
  for(f=1;f<14;f++){
   if(g[1][f]!=3){
    printf("H %d\n",f);}}
  for(f=1;f<14;f++){
   if(g[2][f]!=3){
    printf("C %d\n",f);}}
  for(f=1;f<14;f++){
   if(g[3][f]!=3){
    printf("D %d\n",f);}}
return 0;
}
