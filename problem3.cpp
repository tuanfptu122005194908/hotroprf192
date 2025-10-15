#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    // So sánh hai phân số bằng cách nhân chéo
    // A/B = C/D khi A*D = B*C
    long long left = (long long)A * D;
    long long right = (long long)B * C;
    
    if (left == right) {
        printf("the same\n");
    } else {
        printf("difference\n");
    }
    
    return 0;
}