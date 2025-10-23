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
    
    // Tính tổng các phần tử
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    // Tính trung bình
    float average = (float)sum / n;
    
    // In kết quả
    printf("The total value of the numeric array is %d\n", sum);
    printf("The average value of the numeric array is %.2f\n", average);
    
    return 0;
}