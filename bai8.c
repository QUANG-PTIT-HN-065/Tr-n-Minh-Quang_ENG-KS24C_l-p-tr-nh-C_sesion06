#include <stdio.h>

int main() {
    float tien, lai, tienlai, tiennhan;
    int thang;

    printf("Hay nhap so tien gui ban dau (VND): ");
    scanf("%f", &tien);
    printf("Hay nhap lai suat hang thang (%%): ");
    scanf("%f", &lai);
    printf("Hay nhap so thang gui: ");
    scanf("%d", &thang);
    tiennhan = tien;
    for (int i = 1; i <= thang; i++) {
        tiennhan = tiennhan * (1 + lai / 100);  
    }
    tienlai = tiennhan - tien;
    printf("So tien lai sau %d thang gui la: %.3f VND\n", thang, tienlai);
    printf("So tien nhan duoc sau %d thang gui la: %.3f VND\n", thang, tiennhan);

    return 0;
}
