#include <stdio.h>
int main(){
int n,i,j;

int a[200000];
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   (void)getchar();   
  }
    
   
 for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
  if(a[i]==a[j]){
    printf("NO");
    break;
  }
}
   if(a[i]==a[j])
    break;
  }

  if(i==n && j==n)
    printf("YES");


}