#include <stdio.h>

int main() {
    int n; // Khai báo biến n để lưu số dòng
    
    // Yêu cầu người dùng nhập số dòng
    printf("Please enter the positive integer N: ");
    scanf("%d", &n); // Đọc giá trị n từ bàn phím
    
    printf("The star-triangle that has %d lines is:\n", n);
    
    // Vòng lặp ngoài: duyệt qua từng dòng (từ n xuống 1)
    for (int i = n; i >= 1; i--) {
        // Vòng lặp trong: in i ngôi sao trên mỗi dòng
        for (int j = 1; j <= i; j++) {
            printf("* "); // In ngôi sao và khoảng trắng
        }
        printf("\n"); // Xuống dòng
    }
    
    return 0;
}