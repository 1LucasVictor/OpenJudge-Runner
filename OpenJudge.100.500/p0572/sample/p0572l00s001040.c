#include <stdio.h>
int main(){
int temp,L,R,i,ans =3000,m;
scanf("%d%d",&L,&R);
  temp = L%2019;
  if(R-L > 2019){
    printf("0");
  }
  else if(temp+R-L >= 2019){
    printf("0");
  }
  else{
    for(i = temp;i<=R%2019;i++){
      for(m =temp;m<=R%2019;m++){
      if(i!=m){
        if(ans>(i*m)%2019){
          ans=(i*m)%2019;
          }
      }
      }
    }
    printf("%d",ans);
  }
return 0;
}