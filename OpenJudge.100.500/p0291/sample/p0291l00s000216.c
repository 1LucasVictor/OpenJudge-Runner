#include<stdio.h>

#define TMIN 2
#define TMAX 200000
#define nMIN 1
#define nMAX 1000000


int main(){
int n[nMAX],Time,i,max=0,sub;

scanf("%d",&Time);
if(TMIN<=Time&&Time<=TMAX){
for(i=0;i<Time;i++){
scanf("%d",&n[i]);
//if(nMIN>n[i]||n[i]>nMAX)exit(1);
}
max=n[i-1];
sub=n[i-1]-n[i-2];
for(i=Time-2;i>=0;i--){

if(max<n[i]&&i!=0){
max=n[i];
}
if(sub<max-n[i]&&n[i]!=max){
sub=max-n[i];
}
}
}
 else exit(1);

printf("%d\n",sub);
return 0;
}

