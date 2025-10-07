#include <stdio.h>

int main() {
    int n; // Khai báo biến n để lưu số dòng
    
    // Yêu cầu người dùng nhập số dòng
    printf("Please enter the positive integer N: ");
    scanf("%d", &n); // Đọc giá trị n từ bàn phím
    
    printf("The star-triangle that has %d lines is:\n", n);
    
    // Vòng lặp ngoài: duyệt qua từng dòng (từ 1 đến n)
    for (int i = 1; i <= n; i++) {
        // In khoảng trắng để căn giữa: (n-i) khoảng trắng
        for (int j = 1; j <= n - i; j++) {
            printf("  "); // In 2 khoảng trắng
        }
        
        // In (2*i-1) ngôi sao trên dòng thứ i
        // Dòng 1: 1 sao, dòng 2: 3 sao, dòng 3: 5 sao, dòng 4: 7 sao...
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* "); // In ngôi sao và khoảng trắng
        }
        printf("\n"); // Xuống dòng
    }
    
    return 0;
}