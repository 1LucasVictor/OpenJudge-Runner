#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

int n,m;
scanf("%d %d",&n,&m);

int i, j, last;
if(n == 1){
last = 0;
}else{
last = (int)pow(10,n-1);
}
int ch[m][2];
for(i = 0; i < m; i++){
scanf("%d %d",&ch[i][0],&ch[i][1]);
}

int answer = -1;
for(i = pow(10,n)-1; i >= last; i--){
int judge = 0;
for(j = 0; j < m; j++){
if(i % (int)pow(10,ch[j][0]*n%(n+1)) / (int)pow(10,ch[j][0]*n%(n+1)-1) != ch[j][1]){
judge = 1;
}
}
if(judge == 0){
answer = i;
}
}

printf("%d",answer);

return 0;
}