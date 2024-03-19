#include<stdio.h>
int main(void){
  /* long int n,a[200000],i,j,f;
  scanf("%ld",&n);
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j=j+2){
      if(a[i]==a[j]||a[i]==a[j+1]){
	f++;
	break;
      }}
      if(f==1){
	break;
      }
    }
  if(f!=1){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return 0;
  }*/

int n,a[200000],b[200000],i,f;
scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  b[i]=0;
 }
for(i=0;i<n;i++){
  b[a[i]]++;
  if(b[a[i]]==2){
    f++;
    break;
  }
 }
if(f!=1){
  printf("YES\n");
 }else{
  printf("NO\n");
 }
return 0;
}
