#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    printf("%d\n", N-1 + (M-1)*N);
    return 0;
}
