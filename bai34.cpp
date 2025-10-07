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
        // Dòng 1 có (n-1) khoảng trắng, dòng 2 có (n-2) khoảng trắng...
        for (int j = 1; j <= n - i; j++) {
            printf("  "); // In 2 khoảng trắng
        }
        
        // In i ngôi sao trên dòng thứ i
        for (int j = 1; j <= i; j++) {
            printf("* "); // In ngôi sao và khoảng trắng
        }
        printf("\n"); // Xuống dòng
    }
    
    return 0;
}