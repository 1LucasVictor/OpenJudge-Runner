#include<stdio.h>
#include<math.h>

int main(){
  int h,i,j,max,counter;

  scanf("%d",&counter);

  int a[counter][3];

  for (i=0;i<counter;i++){
    scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
  }

  for (h=0;h<counter;h++){
    for (i=0;i<3;i++){
      max=a[h][i];
      for (j=i+1;j<3;j++){
        if(max<a[h][j]){
          max=a[h][j];
          a[h][j]=a[h][i];
          a[h][i]=max;
        }
      }
    }
  }

  for (h=0;h<counter;h++){
    if(pow(a[h][0],2)==pow(a[h][1],2)+pow(a[h][2],2)){
      printf("YES\n");
    }
    else printf("NO\n");
  }

  return 0;
}