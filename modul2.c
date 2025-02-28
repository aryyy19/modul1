#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &a);

    // Inisialisasi status pintu berdasarkan pembagi 2
    bool pintu = (a % 2 != 0);
    
    // Daftar pembagi untuk toggle berikutnya
    int pembagi[] = {3, 5, 8, 11, 17, 26};
    for(int i = 0; i < 6; i++) {
        if(a % pembagi[i] == 0) {
            pintu = !pintu;
        }
    }
    
    printf("Pintu dengan nomor %d: %s\n", a, pintu ? "terbuka" : "tertutup");
    return 0;
}
