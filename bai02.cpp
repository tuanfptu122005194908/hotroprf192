#include <stdio.h>

int main() {
    int n;
    
    // Nhập số phần tử của mảng
    printf("How many element of numeric array? ");
    scanf("%d", &n);
    
    // Kiểm tra điều kiện n > 0
    if (n <= 0) {
        printf("The number of element of numeric array must be greater than 0!\n");
        return 0;
    }
    
    // Khai báo mảng
    int a[n];
    
    // Nhập các phần tử của mảng
    printf("Please enter value for %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("The value of element %d is: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    // Khởi tạo bộ đếm
    int countOdd = 0;   // Đếm số lẻ
    int countEven = 0;  // Đếm số chẵn
    
    // Duyệt mảng và đếm
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            countEven++;  // Số chẵn (chia hết cho 2)
        } else {
            countOdd++;   // Số lẻ (không chia hết cho 2)
        }
    }
    
    // In kết quả
    printf("The number of odd elements is %d\n", countOdd);
    printf("The number of even elements is %d\n", countEven);
    
    return 0;
}