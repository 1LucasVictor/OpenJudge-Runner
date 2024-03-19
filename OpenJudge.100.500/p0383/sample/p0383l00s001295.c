#include<stdio.h>
#include<math.h>
long long mat1[100][100] = {0};
long long mat2[100][100] = {0};
long long product[100][100] = {0};
int main(){

int n,m,l;
scanf("%d %d %d",&n,&m,&l);
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%lli",&mat1[i][j]);
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<l;j++){
        scanf("%lli",&mat2[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0,k=-i;j<l;j++,k++){
        for(int p=0;p<m;p++){
            product[i][j] += mat1[i][p]*mat2[p][k+i];
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
        if(j==0){
        printf("%lli",product[i][j]);
        }
        else {
            printf(" %lli",product[i][j]);
        }
    }
    printf("\n");
}
return 0;
}

