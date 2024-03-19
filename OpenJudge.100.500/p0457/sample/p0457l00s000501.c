#include <stdio.h>

int main()
{long int a,b,c,i,j,d=0,e=0,f=0,g=0,h=0,k;
scanf("%ld%ld%ld",&a,&b,&c);
long int A[a],B[b];
for(i=0;i<a;i++){
    scanf("%ld",&A[i]);
}
for(i=0;i<b;i++){
    scanf("%ld",&B[i]);
}
for(i=0;i<b;i++){
    d=d+B[i];
    if(c<d){break;} // 57tggx: <= を < に
    e++;
}
d=0;
for(i=0;i<a;i++){
    d=d+A[i];
    if(c<d){break;} // 57tggx: <= を < に
    f++;
}
d=0;
f++; // 57tggx 追記
long int C[f];
for(k=0;k<f;k++){
 g=0;   
  for(i=0;i<k;i++){
    g=g+A[i];}
  h = 0; // 57tggx 追記
  for(j=0;j<e;j++){
    g=g+B[j];
    if(c<g){break;} // 57tggx: <= を < に
    h++;
    }
C[k]=h+k;
}

for(i=0;i<f;i++){
    for(j=i+1;j<f;j++){
        if(C[i]<C[j]){
            k=C[i];
            C[i]=C[j];
            C[j]=k;
        }
    }
}
printf("%ld",C[0]);
    return 0;
}