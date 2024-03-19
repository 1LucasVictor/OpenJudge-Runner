#include<stdio.h>

int main(void){

int n,a,b,c,d, i;
int q = 0;
int z = 0;
char s[200000];
int w[200000];
int p = 0;

scanf("%d", &n);
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);
scanf("%s", s);

for(i = 0; i < n; i++){
  if(s[i] == '.') w[i] = 0;
  else w[i] = 1;
}


if(c<d){
  for(i = b+1; i < d; i++){
    if(w[i]*w[i+1] != 0) q = 1;
  }
  for(i = a+1; i < c; i++){
    if(w[i]*w[i+1] != 0) z = 1;
  }
if(q == 0 && z==0) printf("Yes\n");
else printf("No\n");
}

else{
  for(i = b+1; i < d; i++){
    if(w[i]*w[i+1] != 0) q = 1;//先移動
  }
  for(i = a+1; i < c; i++){
    if(w[i]*w[i+1] != 0) z = 1;
  }
  for(i = b+1; i < d-1; i++){
    if(w[i] == 0 && w[i+1] == 0 && w[i + 2] == 0) p = 1;//先移動
  }
if(q == 0 && z == 0 && p == 1) printf("Yes\n");
else printf("No\n");
}


  return 0;
}
