#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct {
    char name[100];
    int t;
} P;

P Q[100];
int head, tail, n;

void enqueue(P x){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P dequeue(){
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a, int b){
    return a < b ? a :b;
}

int main(){
    int elaps = 0, c;
    int i, q;
    P u;
    
    scanf("%d %d", &n, &q);
    for(i=0; i<n; i++){
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].t);
    }

　　head = 0;
    tail = n + 1;

　　while(head != tail){
        u = dequeue();
        c = min(q, u.t);
        u.t -= c;
        elaps += c;
        
        if(u.t > 0){
            enqueue(u);
        }
        else{
            if(c>0){
                printf("%s %d\n", u.name, elaps);
                
            }
        }
    }
    return 0;

}
