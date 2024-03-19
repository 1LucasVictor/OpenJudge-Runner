#include<stdio.h>
#include<string.h>
int main(){
  int n,i,j,m,m2,s,t,k,T;
  char a[1001],b[100],c[1001],d[1001];
  
  scanf("%s",a);
  m=strlen(a);
  
  scanf("%d",&n);
  
  for(j=0;j<n;j++){
    
    scanf("%s",b);
    m2=strlen(b);
    
    scanf("%d %d",&s,&t);
    
    if(b[0]=='r' && b[1]=='e' && b[2]=='p') {
      scanf("%s",c);
      
      for(i=s;i<=t;i++){
	a[i]=c[i-s];
      }
      
    }

  else if(b[0]=='r' && b[1]=='e' && b[2]=='v'){
      
        for(i=s;i<=t;i++){
	d[i]=a[i];
      }
	
      for(k=t;k>=s;k--){
	a[t-k]=d[k];
      }
    }
    
    else {
      for(i=s;i<=t;i++){
	printf("%c",a[i]);
      }
      printf("\n");
    }
  }
  
return 0;
}