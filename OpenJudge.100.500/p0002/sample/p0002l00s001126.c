#include<stdio.h>

int gettriangle(int,int,int);
int triangle[1005][1005];
  
int main(){
    int i,j,n,result,temp;
    
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
        scanf("%d",&triangle[i][j]);
        }
    }
    

 for(i=1; i<=n; i++){
    for(j=3; j>i; j--){
      if(triangle[i][j] < triangle[i][j-1]){
      temp=triangle[i][j-1];
      triangle[i][j-1]=triangle[i][j];
      triangle[i][j]=temp;     
      }
    }
}

    for(i=0; i<n; i++){
        result = gettriangle(triangle[i][0],triangle[i][1],triangle[i][2]);
        if(result == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

int gettriangle(int a,int b,int c){
    if(a*a + b*b == c*c) return 0;
    else return 1;
}