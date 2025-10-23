#include <stdio.h>

int main() {
    int n;
    
    // Nhập số lượng phần tử Fibonacci cần hiển thị
    printf("Please enter positive integer N: ");
    scanf("%d", &n);
    
    // Kiểm tra điều kiện n > 0
    if (n <= 0) {
        printf("N must be greater than 0!\n");
        return 0;
    }
    
    // Hiển thị dãy Fibonacci
    printf("The Fibonacci sequence with %d numbers is:\n", n);
    
    // Khởi tạo hai số Fibonacci đầu tiên
    long long fib1 = 0;  // F(0) = 0
    long long fib2 = 1;  // F(1) = 1
    
    // Hiển thị dãy Fibonacci
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%lld", fib1);  // In F(0)
        } else if (i == 1) {
            printf("%lld", fib2);  // In F(1)
        } else {
            // Tính số Fibonacci tiếp theo: F(n) = F(n-1) + F(n-2)
            long long fibNext = fib1 + fib2;
            printf("%lld", fibNext);
            
            // Cập nhật cho vòng lặp tiếp theo
            fib1 = fib2;
            fib2 = fibNext;
        }
        
        // In dấu phẩy và khoảng trắng giữa các số
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}