#include <stdio.h>

int main() {
    int n; // Khai báo biến n để lưu số dòng
    
    // Yêu cầu người dùng nhập số dòng
    printf("Please enter the positive integer N: ");
    scanf("%d", &n); // Đọc giá trị n từ bàn phím
    
    // Kiểm tra điều kiện n phải lớn hơn 0
    if (n <= 0) {
        printf("N must be greater than 0!\n");
        return 1; // Thoát chương trình nếu n không hợp lệ
    }
    
    printf("The star-triangle that has %d lines is:\n", n);
    
    // Vòng lặp ngoài: duyệt qua từng dòng (từ 1 đến n)
    for (int i = 1; i <= n; i++) {
        // Vòng lặp trong: in i ngôi sao trên dòng thứ i
        for (int j = 1; j <= i; j++) {
            printf("* "); // In ngôi sao và khoảng trắng
        }
        printf("\n"); // Xuống dòng sau khi in xong một dòng
    }
    
    return 0;
}