#include<stdio.h>
int max_pro(int [],int);
int max(int [],int);
int main(){
  int number;
  int list[200000];
  int i;
  scanf("%d",&number);
  for(i=0;i<number;i++){
    scanf("%d",&list[i]);
  }
  printf("%d\n",max_pro(list,number));
  return 0;
}
int max_pro(int l[],int n){
int i;
int value;
  for(i=1;i<n;i++){
    l[i]-=l[0];
  }
  value=max(l,n);
  int dif=l[value];
  for(i=1;i<value;i++){
    if(dif<l[value]-l[i])dif=l[value]-l[i];
  }
  return dif;
}
int max(int l[],int n){
int i;
int maxn=l[1];
int maxi=1;
  for(i=2;i<n;i++){
    if(maxn<=l[i]){
      maxn=l[i];
      maxi=i;
    }
}
  return maxi;
}

