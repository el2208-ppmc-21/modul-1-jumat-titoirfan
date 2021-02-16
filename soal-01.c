#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kolom,baris,tinggi;
int tinggicek, urutancek, fibo, bilfibo, batas;

int main() {
    printf("Masukkan tinggi segitiga pascal: ");
    scanf("%d", &tinggi);
    
    if (tinggi < 1) {
        printf("Input salah, tinggi segitiga harus > 0!");
    } 
    else if (tinggi > 20) {
        printf("Input salah, tinggi segitiga harus <= 20!"); //biar output ga kepanjangan
    } 
    else {
        int nilai[tinggi][tinggi];
        int jarak1 = tinggi;
        
        for (baris = 0; baris < tinggi; baris++) {
            
            for (int jarak = jarak1; jarak >= 0; jarak -= 1) { // untuk menentukan jarak dari tepi
                printf(" ");
            }

            for (kolom = 0; kolom <= baris; kolom++) {
                nilai[baris][kolom] = nilai[baris - 1][kolom] + nilai[baris - 1][kolom - 1];
                if(kolom == baris || kolom == 0)
                    nilai[baris][kolom] = 1;
                if (kolom != baris)
                    printf("%d ", nilai[baris][kolom]);
                else
                    printf("%d", nilai[baris][kolom]);
            }

            jarak1 -= 1;   // untuk mengurangi jarak dari tepi agar membentuk segitiga
            printf("\n");
        }

        printf("Urutan baris bilangan fibonacci: ");
        scanf("%d", &fibo);
        
        if (fibo > tinggi) {
            printf("Input salah, urutan bilangan harus <= tinggi segitiga pascal!");
        }
        else if (fibo < 0) {
            printf("Input salah, urutan bilangan harus >= 0!");
        } 
        else {
            if (fibo == 0){
                bilfibo = 0;
            } 
            else {
                if (fibo % 2 == 1) { //ngecek kalo dia ganjil batasnya +1 /2 (batas diagonal)
                    batas = (fibo + 1) / 2;
                }
                else {
                    batas = fibo / 2;
                }

                fibo -= 1;

                for(int i = 0; i < batas; i++) {
                    bilfibo += nilai[fibo - i][i];
                }
            }
            
            printf("Bilangan fibonacci: %d\n", bilfibo);
        }
    }
}

//source : http://aryawiradarma23.blogspot.com/2016/10/tutorial-membuat-segitiga-pascal-dengan.html && by. JoshAdi
