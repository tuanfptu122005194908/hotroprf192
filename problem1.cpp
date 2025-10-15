#include <stdio.h> // Thư viện chuẩn dùng cho hàm nhập xuất (printf, scanf)

int main() { 
    int N; // Khai báo biến N để lưu số nguyên nhập vào
    scanf("%d", &N); // Nhập giá trị từ bàn phím

    int chuc = N / 10;  // Lấy chữ số hàng chục bằng phép chia 10
    int donvi = N % 10; // Lấy chữ số hàng đơn vị bằng phép chia lấy dư

    // ===== Xử lý hàng chục =====
    if (chuc == 1) { // Nếu hàng chục là 1
        printf("muoi"); // In "muoi" (ví dụ: 10 → muoi)
    } else { // Nếu hàng chục khác 1
        switch (chuc) { // In chữ số hàng chục tương ứng
            case 2: printf("hai"); break;
            case 3: printf("ba"); break;
            case 4: printf("bon"); break;
            case 5: printf("nam"); break;
            case 6: printf("sau"); break;
            case 7: printf("bay"); break;
            case 8: printf("tam"); break;
            case 9: printf("chin"); break;
        }
        printf(" muoi"); // Thêm từ “muoi” phía sau (ví dụ: 23 → “hai muoi”)
    }

    // ===== Xử lý hàng đơn vị =====
    if (donvi != 0) { // Nếu hàng đơn vị khác 0 thì mới đọc
        printf(" "); // In khoảng trắng giữa hai phần
        if (donvi == 5 && chuc >= 1) { // Nếu hàng đơn vị là 5 và có hàng chục (ví dụ: 15, 25, ...)
            printf("lam"); // Đọc là “lam”
        } else {
            switch (donvi) { // Đọc chữ số hàng đơn vị bình thường
                case 1: printf("mot"); break;
                case 2: printf("hai"); break;
                case 3: printf("ba"); break;
                case 4: printf("bon"); break;
                case 5: printf("nam"); break;
                case 6: printf("sau"); break;
                case 7: printf("bay"); break;
                case 8: printf("tam"); break;
                case 9: printf("chin"); break;
            }
        }
    }

    printf("\n"); // Xuống dòng sau khi in kết quả
    return 0; // Kết thúc chương trình
}
