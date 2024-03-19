#include<stdio.h>
int c[200002];
void merge(int i,int j,int *s){
  if(i!=j){
    merge(i,(i+j)/2,s);
    merge((i+j)/2+1,j,s);
    int a=i,b=(i+j)/2+1;
    int d;
    for(d=i;d<=j;d++){
      if((i+j)/2<a){
        c[d]=s[b];
        b++;
      }
      else if(j<b){
        c[d]=s[a];
        a++;
      }
      else if(s[a]<s[b]){
        c[d]=s[a];
        a++;
      }
      else{
        c[d]=s[b];
        b++;
      }
    }
    for(d=i;d<=j;d++)
      s[d]=c[d];
  }
}

int main(){
  int i,n,check=0;
  scanf("%d",&n);
  int a[n+2];
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  merge(1,n,a);
  for(i=1;i<n;i++)
    if(a[i]==a[i+1])
      check=1;
  if(check==1)
    printf("NO\n");
  else
    printf("YES\n");
  return 0;
}
