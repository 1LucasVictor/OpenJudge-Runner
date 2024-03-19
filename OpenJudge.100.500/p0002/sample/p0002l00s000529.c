#include<stdio.h>
#include<math.h>

int judge(double a,double b,double c){
  int j=0;
  if(a*a==b*b+c*c) j=1;
 else if(b*b==a*a+c*c) j=1;
 else if(c*c==a*a+b*b) j=1;
 else ;
return j;
}



int main(void){
  int n;
  
  scanf("%d",&n);

  int tri[n][3];
  
  int i=0;
  for(i;i<n;i++){
      scanf("%d %d %d",&tri[i][0],&tri[i][1],&tri[i][2]);
	}
  i=0;
  for(i;i<n;i++){
    int j=0;
    j=judge(tri[i][0],tri[i][1],tri[i][2]);
    
    if(j==1)
      printf("YES");
    else
      printf("NO");
  }
  return 1;
}