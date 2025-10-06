// ============== BÀI 39b: FILLED RECTANGLE (HÌNH CHỮ NHẬT ĐẶC) ==============
// Chương trình vẽ hình chữ nhật đầy đủ (tất cả đều là sao)

#include <stdio.h>

int main() {
    int W, H; // Khai báo biến W (width - chiều rộng) và H (height - chiều cao)
    
    // Yêu cầu người dùng nhập chiều rộng
    printf("Please enter the width W: ");
    scanf("%d", &W); // Đọc giá trị chiều rộng từ bàn phím
    
    // Yêu cầu người dùng nhập chiều cao
    printf("Please enter the height H: ");
    scanf("%d", &H); // Đọc giá trị chiều cao từ bàn phím
    
    // In thông báo kích thước hình chữ nhật
    printf("The filled rectangle which size is %dx%d:\n", W, H);
    
    // Vòng lặp ngoài: Duyệt qua từng dòng (từ 1 đến H)
    for (int i = 1; i <= H; i++) {
        
        // Vòng lặp trong: Duyệt qua từng cột (từ 1 đến W)
        for (int j = 1; j <= W; j++) {
            printf("* "); // In dấu sao cho tất cả vị trí (không có điều kiện)
        }
        
        printf("\n"); // Xuống dòng sau khi in xong 1 hàng
    }
    
    return 0; // Kết thúc chương trình thành công
}

/*
VÍ DỤ VỚI W=6, H=4:
Dòng 1: * * * * * *
Dòng 2: * * * * * *
Dòng 3: * * * * * *
Dòng 4: * * * * * *

Logic đơn giản:
- Với mỗi dòng từ 1 đến H
  - In W dấu sao (mỗi sao cách nhau 1 khoảng trắng)
  - Xuống dòng
- Không cần kiểm tra điều kiện gì vì tất cả vị trí đều in sao
*/