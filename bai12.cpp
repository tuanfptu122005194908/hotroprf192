#include <stdio.h>

int main() {
    int n;
    
    // Nhập vị trí của số Fibonacci cần tìm
    printf("Please enter positive integer N: ");
    scanf("%d", &n);
    
    // Kiểm tra điều kiện n > 0
    if (n <= 0) {
        printf("N must be greater than 0!\n");
        return 0;
    }
    
    // Xử lý trường hợp đặc biệt
    if (n == 1) {
        printf("0 is the 1st element of the Fibonacci sequence\n");
        return 0;
    }
    if (n == 2) {
        printf("1 is the 2nd element of the Fibonacci sequence\n");
        return 0;
    }
    
    // Tính số Fibonacci thứ N
    long long fib1 = 0;  // F(0)
    long long fib2 = 1;  // F(1)
    long long fibN = 0;
    
    // Tính từ F(2) đến F(n-1)
    for (int i = 2; i < n; i++) {
        fibN = fib1 + fib2;  // F(n) = F(n-1) + F(n-2)
        fib1 = fib2;         // Cập nhật F(n-2)
        fib2 = fibN;         // Cập nhật F(n-1)
    }
    
    // In kết quả với định dạng phù hợp (1st, 2nd, 3rd, 4th, ...)
    printf("%lld is the ", fibN);
    if (n % 10 == 1 && n % 100 != 11) {
        printf("%dst", n);
    } else if (n % 10 == 2 && n % 100 != 12) {
        printf("%dnd", n);
    } else if (n % 10 == 3 && n % 100 != 13) {
        printf("%drd", n);
    } else {
        printf("%dth", n);
    }
    printf(" element of the Fibonacci sequence\n");
    
    return 0;
}