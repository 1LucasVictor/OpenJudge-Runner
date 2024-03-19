#include<stdio.h>

int main(){
  char a[3]; scanf("%s",a);
  if (a[0]==a[1] && a[1]==a[2]) printf("No\n");
  else {
    for(int i=0; i<3; i++){
      if (a[i]=='A' || a[i]=='B'){
        if (i==2) printf("Yes\n");
        continue;
      }
      else printf("No\n");
    }
  }
  return 0;
}