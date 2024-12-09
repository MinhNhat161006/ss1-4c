#include <stdio.h>

int main() {
    float diem;

    // Nhập điểm số
    printf("Nhập điểm: ");
    scanf("%f", &diem);

    // Kiểm tra điều kiện xếp loại
    if (diem >= 5) {
        printf("Xếp loại: Đạt\n");
    } else {
        printf("Xếp loại: Không đạt\n");
    }

    return 0;
}
