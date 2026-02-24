#include <stdio.h> // kütüphane
#include <windows.h> // türkçe karakterler için kütüphane

int main(void) {
    SetConsoleOutputCP(65001); // Türkçe karakter desteği için
    printf("İletişim ve Sunum Teknikleri Dersine Hoşgeldiniz\n"); // ekrana ayzdırmak istediğimiz çıktı
    return 0;
}
