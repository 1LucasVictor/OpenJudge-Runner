#include <stdio.h>

int get_uint() {
    int n = 0;
    int c = getchar_unlocked();
    if(c < 48 || 57 < c) return c;
    while(47 < c && c < 58) {
        n = 10 * n + (c & 0xf);
        c = getchar_unlocked();
    }
    return n;
}
int loadable_num(const int cap, int qty, const int *arr, const int N) {
    int i = 0;
    while(qty--) {
        int now = 0;
        while(arr[i] + now <= cap) {
            now += arr[i];
            if(++i == N) return N;
        }
    }
    return i;
}
int main(int argc, char **argv) {
    int n = get_uint();
    int k = get_uint();
    int w[100001];
    for(int i = 0; i < n; ++i) w[i] = get_uint();

    int left = 0;
    int right = 10000 * 100000;
    int mid;
    while(right - left > 1) {
        mid = left + (right - left) / 2;
        if(n > loadable_num(mid, k, w, n)) left = mid;
        else right = mid;
    }
    printf("%d\n", right);
}

