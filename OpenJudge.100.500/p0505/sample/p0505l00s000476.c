  #include <stdio.h>
  #include <math.h>
  int min(int a,int b){
    return a<b ? a:b;
  }
  int max(int a,int b){
    return a>b ? a:b;
  }

  int main() {
    int a,b,c,som=0;
    scanf("%d %d",&a,&b);
    for (int i = 0; i < b; i++) {
      scanf("%d",&c);
      som+=c;
    }
    if (som>=a) {
      printf("Yes\n");
    }
    else
    printf("No\n");
    return 0;
  }
