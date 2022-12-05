#include <stdio.h>
int main()
{
int matrix2D[3][4] = {{0,1,2,3},{1,2,3,0},{2,3,1,0}};
int A[3][4];
int C[3][4];
for(int baris=0;baris<3;baris++){
    for(int kolom=0;kolom<4;kolom++)
    printf("%d\t",matrix2D[baris][kolom]);
    printf("\n");
}
printf("mencetak lokasi alamat dari setiap elemen\n");
for(int baris=0;baris<3;baris++){
    for(int kolom=0;kolom<4;kolom++)
    printf("%p\t",&matrix2D[baris][kolom]);
    printf("\n");
}
for(int baris=0;baris<3;baris++){
    for(int kolom=0;kolom<4;kolom++)
    A[baris][kolom]=kolom+baris*4;
}
printf("menampilkan isi array A dan menjumlahkannya dengan matrix2D\n");
for(int baris=0;baris<3;baris++){
    for(int kolom=0;kolom<4;kolom++){
    printf("%d\t",A[baris][kolom]);
    C[baris][kolom]=matrix2D[baris][kolom] + A[baris][kolom];
    }
    printf("\n");
}
printf("menampilkan isi array C\n");
for(int baris=0;baris<3;baris++){
    for(int kolom=0;kolom<4;kolom++)
        printf("%d\t",C[baris][kolom]);
        printf("\n");
    
}
return 0;
}