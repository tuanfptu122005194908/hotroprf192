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
        printf("The value of a[%d] is: ", i);
        scanf("%d", &a[i]);
    }
    
    // Khởi tạo bộ đếm
    int countNegative = 0;  // Đếm số âm
    int countZero = 0;      // Đếm số 0
    int countPositive = 0;  // Đếm số dương
    
    // Duyệt mảng và đếm
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            countNegative++;  // Số âm
        } else if (a[i] == 0) {
            countZero++;      // Số 0
        } else {
            countPositive++;  // Số dương
        }
    }
    
    // In kết quả
    printf("The number of negative elements is %d\n", countNegative);
    printf("The number of zero elements is %d\n", countZero);
    printf("The number of positive elements is %d\n", countPositive);
    
    return 0;
}