/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,m,k;
    scanf("%d%d%d", &n, &m, &k);
    
    
    int a[n], b[m];
    
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i< m; i++){
        scanf("%d", &b[i]);
    }
    a[n] =0;
    b[m] =0;
    int posa = 0, posb = 0, count = 0;
    while(((k > a[posa]) || (k > b[posb])) && ((posa<n)||(posb<m)))
    {
        
        if(posa == n ){
            k = k - b[posb];
            count = count + 1;
            posb = posb + 1;
        }
        else if(posb == m ){
            k = k - a[posa];
            count = count + 1;
            posa = posa + 1;
        }
        else if(a[posa] == b[posb])
        {
            if(a[posa] < b[posb]){
                k = k - a[posa];
                count = count + 1;
                posa = posa + 1;
            } 
            else{
                 k = k - b[posb];
                count = count + 1;
                posb = posb + 1;
            }
        }
        else if(a[posa] < b[posb])
        {
            k = k - a[posa];
            count = count + 1;
            posa = posa + 1;
        } 
        else
        {
            k = k - b[posb];
            count = count + 1;
            posb = posb + 1;
        }
        
    }
    printf("%d", count);
    

    return 0;
}
