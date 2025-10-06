// ============== BÀI 39a: HOLLOW RECTANGLE (HÌNH CHỮ NHẬT RỖNG) ==============
// Chương trình vẽ hình chữ nhật rỗng (chỉ có viền)

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
    printf("The rectangle which size is %dx%d:\n", W, H);
    
    // Vòng lặp ngoài: Duyệt qua từng dòng (từ 1 đến H)
    for (int i = 1; i <= H; i++) {
        
        // Vòng lặp trong: Duyệt qua từng cột (từ 1 đến W)
        for (int j = 1; j <= W; j++) {
            
            // Kiểm tra xem vị trí hiện tại có phải là viền không
            // Viền gồm: dòng đầu (i=1), dòng cuối (i=H), cột đầu (j=1), cột cuối (j=W)
            if (i == 1 || i == H || j == 1 || j == W) {
                printf("* "); // In dấu sao nếu là viền
            } else {
                printf("  "); // In 2 khoảng trắng nếu là phần rỗng bên trong
            }
        }
        
        printf("\n"); // Xuống dòng sau khi in xong 1 hàng
    }
    
    return 0; // Kết thúc chương trình thành công
}

/*
VÍ DỤ VỚI W=6, H=4:
Dòng 1 (i=1): Tất cả đều là viền → * * * * * *
Dòng 2 (i=2): Chỉ cột 1 và cột 6 là viền → *         *
Dòng 3 (i=3): Chỉ cột 1 và cột 6 là viền → *         *
Dòng 4 (i=4): Tất cả đều là viền → * * * * * *

Logic kiểm tra viền:
- Nếu i == 1 hoặc i == H: là dòng đầu hoặc dòng cuối → in sao
- Nếu j == 1 hoặc j == W: là cột đầu hoặc cột cuối → in sao
- Các trường hợp khác: phần rỗng bên trong → in khoảng trắng
*/