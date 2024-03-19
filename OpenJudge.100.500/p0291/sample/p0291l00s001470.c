#include <stdio.h>
#define inf 200000
int max(int a,int b){
  return (a<b?b:a);
}
int min(int a,int b){
  return (a<b?a:b);
}

int main(){
int n;
int minv;
int maxv;
scanf("%d¥n",&n);
int r[inf];
for(int j;j<n;j++){
  scanf("%d\n",&r[j]);
}
maxv=-2000000;
minv = r[0];
for (int j = 0;j< n;j++) {
  maxv=max(r[j]-minv,maxv);
  minv=min(r[j],minv);

}
printf("%d\n",maxv );
return  0;
}

