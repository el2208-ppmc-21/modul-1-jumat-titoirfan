/*  EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
*   Modul               : 1
*   Nama (NIM)          : Danu Ihza Pamungkas (13218022)
*   Nama File           : M1.c
*   Deskripsi           : Program sortir paket.
*/

#include <stdio.h>

void bubble_sort(int list[], int n){
    int c, d, t;

    for (c = 0 ; c < n - 1; c++) {
        for (d = 0 ; d < n - c - 1; d++) {
            if (list[d] > list[d+1]) {
                /* Swapping */
                t         = list[d];
                list[d]   = list[d+1];
                list[d+1] = t;
            }
        }
    }
}

int main(){
    int n, barang[20], kota[10]={0};
    printf("Masukkan jumlah barang: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Jumlah barang harus lebih besar dari nol");
        return 0;
    }
    if(n>20){
        printf("Jumlah barang melebihi kapasitas");
        return 0;
    }

    printf("Masukkan kode tujuan barang:\n");

    for(int i=0; i<n; i++){
        scanf("%d", &barang[i]);
    }

    bubble_sort(barang, n);

    printf("Barang yang sudah disortir: [");
    for(int i=0; i<n; i++){
        if (i != n - 1)
            printf("%d ", barang[i]);
        else
            printf("%d", barang[i]);
        
        if(barang[i]==0){
            kota[0]++;
        } else if(barang[i]==1){
            kota[1]++;
        } else if(barang[i]==2){
            kota[2]++;
        } else if(barang[i]==3){
            kota[3]++;
        } else if(barang[i]==4){
            kota[4]++;
        } else if(barang[i]==5){
            kota[5]++;
        } else if(barang[i]==6){
            kota[6]++;
        } else if(barang[i]==7){
            kota[7]++;
        } else if(barang[i]==8){
            kota[8]++;
        } else if(barang[i]==9){
            kota[9]++;
        }
    }
    
    printf("]\n");
    printf("Jumlah barang yang harus dikirim ke setiap kota:\n");

    for(int i=0; i<10; i++){
        if(kota[i]>0){
            if(i==0){
                printf("Jakarta: %d\n", kota[i]);  
            } else if(i==1){
                printf("Bandung: %d\n", kota[i]);  
            } else if(i==2){
                printf("Surabaya: %d\n", kota[i]);  
            } else if(i==3){
                printf("Denpasar: %d\n", kota[i]);  
            } else if(i==4){
                printf("Gorontalo: %d\n", kota[i]);  
            } else if(i==5){
                printf("Manado: %d\n", kota[i]);  
            } else if(i==6){
                printf("Balikpapan: %d\n", kota[i]);  
            } else if(i==7){
                printf("Jayapura: %d\n", kota[i]);  
            } else if(i==8){
                printf("Padang: %d\n", kota[i]);  
            } else if(i==9){
                printf("Palembang: %d\n", kota[i]);  
            } 
        }
    }
}
