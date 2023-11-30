#include <stdio.h>
int tinhTong(int batDau, int ketThuc) {
    int tong = 0;
    int i;
    for (i = batDau; i <= ketThuc; i++) {
        tong += i;
    }
    return tong;
}
int main() {
    int batDau, ketThuc;
    printf("Nhap gia tri bat dau: ");
    scanf("%d", &batDau);
    printf("Nhap gia tri ket thuc: ");
    scanf("%d", &ketThuc);
    int tong = tinhTong(batDau, ketThuc);
    printf("Tong cac so nguyen tu %d den %d la: %d\n", batDau, ketThuc, tong);
    return 0;
}
