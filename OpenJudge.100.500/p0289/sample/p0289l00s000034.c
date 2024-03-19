#include <stdio.h>
int main(){
  int x,y,smo,big,arr=1,arr2,ans;
  scanf("%d%d",&x,&y);
  if(x>=y){
    smo=y;
    big=x;
  }
    else{
      smo=x;
      big=y;
    }

    while(1){
      arr=(big%smo);
      if(arr==0){
	ans=smo;
	break;
      }
      arr2=smo;
      smo=arr;
      big=arr2;
    }
    printf("%d\n",ans);
    return 0;
}