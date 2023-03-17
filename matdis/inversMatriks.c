#include <stdio.h>
#include <stdlib.h>

void tulis_matriks(int M[][3]);
void cetak_matriks(int M[3][3]);
void cetak_hasil_invers_matriks(double M[3][3]);
void cetak_invers_matriks(int M[3][3], int det);

int mencari_determinan(int M[3][3]);
int mencari_kofaktor(int M[3][3], int K, int B);
void mencari_adj(int adj_matriks[][3], int kofaktor_matriks[][3]);

int main() {
    int matriks[3][3], kofaktor_matriks[3][3], adj_matriks[3][3]; 
    double invers_matriks[3][3];
    int determinan;

    // Input nilai matriks
    printf("Masukkan nilai matriks : \n");
    tulis_matriks(matriks);

    // Tampilkan nilai matriks awal
    printf("\nNilai matriks A: \n");
    cetak_matriks(matriks);

    // Tentukan determinan matriks kemudian cetak nilainya
    determinan = mencari_determinan(matriks);
    printf("|A| = %d\n", determinan);

    // Kofaktor matriks
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            kofaktor_matriks[i][j] = mencari_kofaktor(matriks, i, j);
        }
    }

    // Tampilkan nilai dari kofaktor matriks
    printf("\nKof(A) =\n");
    cetak_matriks(kofaktor_matriks);

    // Transpose matriks dari hasil kofaktor matriks (Adjoin matriks)
    mencari_adj(adj_matriks, kofaktor_matriks);
    
    // Tampilkan adjoin matriks
    printf("\nAdj(A) =\n");
    cetak_matriks(adj_matriks);

    // Hentika program jika determinan adalah nol
    if(determinan == 0) {
        printf("Determinan adalah 0, matriks tidak memiliki invers\n");
        exit(1);
    }

    // Invers matriks = (1 / |A|) * adj(A)
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            invers_matriks[i][j] = (double) adj_matriks[i][j]/determinan;
        }
    }

    // Tampilkan invers matriks
    printf("\nInvers(A) =\n");
    cetak_invers_matriks(adj_matriks, determinan);
    
    // Tampilkan hasil dari invers matriks
    printf("\nInvers(A) =\n");
    cetak_hasil_invers_matriks(invers_matriks);

    return 0;
}

/*
    Fungsi berikut untuk menerima dan memasukkan nilai matriks
*/
void tulis_matriks(int M[][3]) {
    for (int i = 0; i < 3; i++) {
        printf("-> ");
        for (int j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }
}

/*
    Fungsi untuk mencetak matriks
*/
void cetak_matriks(int M[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("| ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", M[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

/*
    Fungsi untuk mencetak hasil dari invers matriks
*/
void cetak_hasil_invers_matriks(double M[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("| ");
        for (int j = 0; j < 3; j++) {
            printf("%.2lf ", M[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

/*
    Fungsi untuk mencetak invers matriks
*/
void cetak_invers_matriks(int M[3][3], int det) {
    for (int i = 0; i < 3; i++) {
        printf("| ");
        for (int j = 0; j < 3; j++) {
            printf("%d/%d ", M[i][j], det);
        }
        printf("|\n");
    }
    printf("\n");
}

/*
    Fungsi untuk mencari nilai dari determinan matriks (3x3)
    - Mengunakan metode sarrus
    - Jumlahkan secara diagonal
    - Hitung selisih dari penjumlahan diagonal turun dan naik
    - Selisih tersebut adalah nilai dari determinan matriks
*/
int mencari_determinan(int M[3][3]) {
    int diagonalTurun = 0, diagonalNaik = 0;

    // Menghitung diagonal naik
    for(int i=0; i<3; i++) {
        int temp = 1;
        for(int j =0; j<3; j++) {
            temp *= M[j][(i+j)%3];
        }
        diagonalTurun += temp;
    }

    // Menghitung diagonal turun
    for(int i=0; i<3; i++) {
        int temp = 1;
        for(int j=2; j>=0; j--) {
            temp *= M[j][(i+(2-j))%3];
        }
        diagonalNaik += temp;
    }
    
    return diagonalTurun - diagonalNaik;
}

/*
    Fungsi untuk menentukan kofaktor
    - Buat sebuah array untuk menampung nilai dari kolom dan baris dari parameter yang dikirim
    - Cari determinan dari array tersebut
    - Rumus: array1 * array4 + array3 * array4
*/
int mencari_kofaktor(int M[3][3], int K, int B) {
    int hasil, nilai[4], x=0;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++){
            if(i != K && j != B) {
                nilai[x] = M[i][j];
                x++;
            }
        }
    }

    hasil = nilai[0] * nilai[3] - nilai[2] * nilai[1];
    if((K + B) % 2 == 1) hasil *= -1;

    return hasil;
}

/*
    Fungsi mencari adjoin matriks
    - Kolom menjadi baris
    - Baris menjadi kolom
*/
void mencari_adj(int adj_matriks[][3], int kofaktor_matriks[][3]) {
    // Adjoin matriks = transpose kofaktor matriks
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            adj_matriks[i][j] = kofaktor_matriks[j][i];
        }
    }
}
