#include<stdio.h>
#include<string.h>
int main(){
int N;
scanf("%d",&N);

int A[N];

for(int i = 0;i < N;i++){
scanf("%d",&A[i]);
}

int dou = 0;

for(int i = 0;i < N-1;i++){
for(int j = i+1;j < N;j++){
if(A[i] == A[j]){
dou++;
}
}
}

if(dou > 0){
printf("NO");
}

else{
printf("YES");
}

return 0;
}