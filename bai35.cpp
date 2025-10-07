#include <stdio.h>

int main() {
    int n; // Khai báo biến n để lưu số dòng
    
    // Yêu cầu người dùng nhập số dòng
    printf("Please enter the positive integer N: ");
    scanf("%d", &n); // Đọc giá trị n từ bàn phím
    
    printf("The star-triangle that has %d lines is:\n", n);
    
    // Vòng lặp ngoài: duyệt qua từng dòng (từ n xuống 1)
    for (int i = n; i >= 1; i--) {
        // In khoảng trắng đầu dòng: (n-i) khoảng trắng
        // Dòng đầu có 0 khoảng trắng, dòng 2 có 1 khoảng trắng...
        for (int j = 1; j <= n - i; j++) {
            printf("  "); // In 2 khoảng trắng để căn lề
        }
        
        // In i ngôi sao
        for (int j = 1; j <= i; j++) {
            printf("* "); // In ngôi sao và khoảng trắng
        }
        printf("\n"); // Xuống dòng
    }
    
    return 0;
}