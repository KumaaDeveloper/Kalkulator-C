#include <stdio.h>

int main(){

    /*Variable Yang Di Perlukan*/
    /*Float Untuk Desimal*/
    float angka1, angka2, hasil;
    /*Integer Untuk Bilangan Bulat*/
    int pilihan;

    /*Pesan Input Kepada User*/
    printf("Masukkan Angka Pertama: ");
    scanf("%f", &angka1);

    printf("Masukkan Angka Kedua: ");
    scanf("%f", &angka2);

    /*Pesan Pilihan Kepada User*/
    printf("Sistem Operasi:\n 1 = Penjumlahan\n 2 = Pengurangan\n 3 = Perkalian\n 4 = Pembagian\n");
    printf("Pilih Sistem Operasi Yang Di Inginkan: ");
    scanf("%d", &pilihan);

    /*Jika Pilihan Adalah (angka)*/
    if (pilihan == 1) {
        hasil = angka1 + angka2;
    } else if (pilihan == 2) {
        hasil = angka1 - angka2;
    } else if (pilihan == 3) {
        hasil = angka1 * angka2;
    } else if (pilihan == 4) {
        hasil = angka1 / angka2;
    }

    /*Hasil Yang Di Tampilkan*/
    printf("Hasilnya: %.2f", hasil);
    return 0;
}