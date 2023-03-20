#include <stdio.h>

void tulis_matriks(int m[2][2]);
void cetak_matriks(int m[2][2]);
void cetak_adj(float adj[2][2]);
void mencari_invers(float invers[2][2],float adj[2][2], int det);
void cetak_invers(float in[2][2]);

int main(int argc, char const *argv[]){
    //Variabel
    int matriks[2][2],a, det;
    float adj[2][2],invers[2][2];

    //Matriks
    tulis_matriks(matriks);
    
    //Output nilai matriks
    printf("\nMatriks :\n");
    cetak_matriks(matriks);

    //Determinan
    det=(matriks[0][0]*matriks[1][1])-(matriks[0][1]*matriks[1][0]);
    printf("Determinan = %d\n", det);

    //adj
    a=matriks[0][0];
    adj[0][0]=matriks[1][1];
    adj[0][1]=-1*matriks[0][1];
    adj[1][0]=-1*matriks[1][0];
    adj[1][1]=a;
    printf("adj : \n");
    cetak_adj(adj);

    //Invers
    if (det!=0){
        mencari_invers(invers,adj,det);
        printf("\nInvers :\n");
        cetak_invers(invers);
    }else{
        printf("Invers tidak ada");
    }
    return 0;
}
void tulis_matriks(int m[][2]) {
    char n='a';
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Masukkan Nilai %c: ", n);
            scanf("%d", &m[i][j]);
            n++;
        }
    }
}
void cetak_matriks(int m[2][2]){
    for (int i = 0; i < 2; i++) {
        printf("| ");
        for (int j = 0; j < 2; j++) {
            printf("%d ", m[i][j]);
        }
        printf("|\n");
    }
}
void cetak_adj(float adj[2][2]){
    for (int i = 0; i < 2; i++) {
        printf("| ");
        for (int j = 0; j < 2; j++) {
            printf("%.0f ", adj[i][j]);
        }
        printf("|\n");
    }
}
void mencari_invers(float invers[2][2], float adj[2][2], int det){
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            invers[i][j] = 1*adj[i][j]/det;
        }
    }
}
void cetak_invers(float in[2][2]){
    for (int i = 0; i < 2; i++) {
        printf("| ");
        for (int j = 0; j < 2; j++) {
            printf("%.2f ", in[i][j]);
        }
        printf("|\n");
    }
}
