#include<stdio.h>
int main()
{
  int a,b,c;
  int five;
  int seven;
  scanf("%d %d %d",&a,&b,&c);
  five=((a==5)?1:0)+((b==5)?1:0)+((c==5)?1:0);
  seven=((a==7)?1:0)+((b==7)?1:0)+((c==7)?1:0);
  if((five==2)&&(seven==1)){
    printf("YES\n");
  }
  else{
  	printf("NO\n");
  }
  return 0;
}