#include<stdio.h>



void tambah_array2D(int a[][3], int b[][3], int c[][3]);
int main( int argc,char *argv){
    int jumlah_kata;
    int a[3][3]={{0,1,2},{3,4,5,},{6,7,8}};
    int b[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int c[3][3]={0,0,0,0,0,0,0,0,0};
    tambah_array2D(a,b,c);
    for( int baris=0;baris<3;baris++){
        for( int kolom=0;kolom<3;kolom++)
        printf("%d\t",c[baris][kolom]);
    printf("\n");
    }

   return 0;

}

void tambah_array2D(int a[][3], int b[][3], int c[][3]){
    for(int baris = 0;baris<3;baris++)
        for(int kolom = 0;kolom<3;kolom++)
        c[baris][kolom] = a[baris][kolom] + b[baris][kolom];
    
}