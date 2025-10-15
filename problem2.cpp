#include <stdio.h> // Thư viện chuẩn dùng cho hàm nhập và xuất dữ liệu (printf, scanf)

int main() {
    long long N; // Khai báo biến N kiểu long long để có thể chứa số lớn
    scanf("%lld", &N); // Nhập giá trị của N từ bàn phím (đọc số nguyên dài)

    // --- Trường hợp đặc biệt: nếu N = 0 ---
    if (N == 0) {
        printf("Yes\n"); // 0 có tổng và tích chữ số đều bằng 0 → thỏa mãn điều kiện
        return 0; // Kết thúc chương trình sớm
    }

    long long sum = 0;       // Biến lưu tổng các chữ số
    long long product = 1;   // Biến lưu tích các chữ số
    long long temp = N;      // Sao chép N sang temp để không làm thay đổi N gốc

    // --- Tính tổng và tích của từng chữ số ---
    while (temp > 0) {            // Lặp cho đến khi temp hết chữ số
        int digit = temp % 10;    // Lấy chữ số cuối cùng (bằng phép chia lấy dư)
        sum += digit;             // Cộng chữ số đó vào tổng
        product *= digit;         // Nhân chữ số đó vào tích
        temp /= 10;               // Bỏ chữ số cuối (chia 10 để sang chữ số tiếp theo)
    }

    // --- Kiểm tra điều kiện "Z number" ---
    // Số được gọi là "Z number" nếu tổng các chữ số = tích các chữ số
    if (sum == product) {
        printf("Yes\n"); // Nếu bằng nhau → in "Yes"
    } else {
        printf("No\n");  // Nếu không bằng nhau → in "No"
    }

    return 0; // Kết thúc chương trình, trả về 0 cho hệ điều hành
}
