#include<stdio.h>

int gettriangle(int,int,int);
int triangle[1005][1005];
  
int main(){
    int i,j,n,result;
    
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
        scanf("%d",&triangle[i][j]);
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
    if((int)pow(a,2) + (int)pow(b,2) == (int)pow(c,2)) return 0;
    else return 1;
}