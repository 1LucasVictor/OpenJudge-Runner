
#include<stdio.h>
int main(){
int n,i,temp;
int ai[100];
scanf("%d", &n);
for(i=0; i<n; i++){
	scanf("%d", &ai[i]);
}

for(i=0; i<n/2; i++){
	temp=ai[i];
	ai[i]=ai[n-1-i];
	ai[n-1-i]=temp;
}

for(i=0; i<n; i++){
	
  if(i<n-1){
    printf("%d ", ai[i]);
  }else{
    printf("%d\n", ai[i]);
  }
}
return 0;

}