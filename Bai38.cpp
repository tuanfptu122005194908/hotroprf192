// ============== BÀI 38: STAR-RHOMBUS (HÌNH THOI SAO) ==============
// Chương trình vẽ hình thoi bằng dấu sao với 2N-1 dòng

#include <stdio.h>

int main()
{
    int N; // Khai báo biến N để lưu số nhập vào từ người dùng

    // Yêu cầu người dùng nhập số nguyên dương N
    printf("Please enter the positive integer N: ");
    scanf("%d", &N); // Đọc giá trị N từ bàn phím

    // Tính tổng số dòng của hình thoi theo công thức 2N-1
    int total_lines = 2 * N - 1;
    printf("The star-rhombus that has %d lines is:\n", total_lines);

    // ===== PHẦN TRÊN của hình thoi (bao gồm dòng giữa) =====
    // Vòng lặp từ dòng 1 đến dòng N
    for (int i = 1; i <= N; i++)
    {
        // In khoảng trắng đầu dòng để căn giữa hình thoi
        // Số khoảng trắng = N - i (giảm dần từ N-1 về 0)
        for (int j = 1; j <= N - i; j++)
        {
            printf("  "); // In 2 khoảng trắng (1 cho khoảng cách)
        }

        // In các dấu sao cho dòng hiện tại
        // Số sao ở dòng i = 2*i - 1 (1, 3, 5, 7, ...)
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* "); // In dấu sao và 1 khoảng trắng
        }

        printf("\n"); // Xuống dòng sau khi in xong 1 dòng
    }

    // ===== PHẦN DƯỚI của hình thoi =====
    // Vòng lặp từ dòng N-1 giảm dần về 1
    for (int i = N - 1; i >= 1; i--)
    {
        // In khoảng trắng đầu dòng
        // Số khoảng trắng = N - i (tăng dần từ 1 về N-1)
        for (int j = 1; j <= N - i; j++)
        {
            printf("  "); // In 2 khoảng trắng
        }

        // In các dấu sao cho dòng hiện tại
        // Số sao = 2*i - 1 (giảm dần: 5, 3, 1 khi N=4)
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* "); // In dấu sao và 1 khoảng trắng
        }

        printf("\n"); // Xuống dòng
    }

    return 0; // Kết thúc chương trình thành công
}

/*
VÍ DỤ VỚI N = 4:
- Tổng số dòng = 2*4-1 = 7 dòng
- Dòng 1 (i=1): 3 khoảng trắng + 1 sao
- Dòng 2 (i=2): 2 khoảng trắng + 3 sao
- Dòng 3 (i=3): 1 khoảng trắng + 5 sao
- Dòng 4 (i=4): 0 khoảng trắng + 7 sao (dòng giữa)
- Dòng 5 (i=3): 1 khoảng trắng + 5 sao
- Dòng 6 (i=2): 2 khoảng trắng + 3 sao
- Dòng 7 (i=1): 3 khoảng trắng + 1 sao
*/