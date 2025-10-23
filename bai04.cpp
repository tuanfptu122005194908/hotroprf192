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
        // In với thứ tự 1st, 2nd, 3rd, 4th, ...
        if (i == 0) {
            printf("Value of the 1st element is: ");
        } else if (i == 1) {
            printf("Value of the 2nd element is: ");
        } else if (i == 2) {
            printf("Value of the 3rd element is: ");
        } else {
            printf("Value of the %dth element is: ", i + 1);
        }
        scanf("%d", &a[i]);
    }
    
    // Khởi tạo min và max bằng phần tử đầu tiên
    int min = a[0];
    int max = a[0];
    
    // Duyệt mảng để tìm min và max
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];  // Cập nhật min nếu tìm thấy giá trị nhỏ hơn
        }
        if (a[i] > max) {
            max = a[i];  // Cập nhật max nếu tìm thấy giá trị lớn hơn
        }
    }
    
    // In kết quả
    printf("The minimum value of the numeric array is %d\n", min);
    printf("The maximum value of the numeric array is %d\n", max);
    
    return 0;
}