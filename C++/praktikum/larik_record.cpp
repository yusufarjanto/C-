#include<iostream>
#include<iomanip>
using namespace std;
typedef int Matrix[10][10];
Matrix A, B, hasil;
int barA, kolA, barB, kolB;
int pilih;

//create
void input_matrix(int m, int n, Matrix &X){
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            cout<<"Masukkan matrix elemen ke ["<<i<<","<<j<<"] = ";
            cin>>X[i][j];
        }
    }
    cout<<"Input matrix selesai"<<endl;
}

//read
void cetak_matrix(int m, int n, Matrix &X){
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<setw(5)<<X[i][j];
        }
        cout<<endl;
    }
}

void tambah_matrix(Matrix X, Matrix Y, Matrix &Z, int m, int n){
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++)
        Z[i][j]=X[i][j]+Y[i][j];
    }
}

void kurang_matrix(Matrix X, Matrix Y, Matrix &Z, int m, int n){
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++)
        Z[i][j]=X[i][j]-Y[i][j];
    }
}

void transpose(Matrix X, Matrix &Z, int m, int n){
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++)
        Z[i][j]=X[i][j];
    }
}

int main(){
    do{
        system("cls");
        cout<<"Menu pilihan: "<<endl;
        cout<<"1. Input Matrix A"<<endl;
        cout<<"2. Input Matrix B"<<endl;
        cout<<"3. Cetak Matrix A"<<endl;
        cout<<"4. Cetak Matrix B"<<endl;
        cout<<"5. A+B"<<endl;
        cout<<"6. A-B"<<endl;
        cout<<"7. B-A "<<endl;
        cout<<"8. Transpose A"<<endl;
        cout<<"9. Transpose B"<<endl;
        cout<<"0. Selesai"<<endl;
        cout<<"Pilih menu (0-9): ";
        cin>>pilih;

        switch(pilih){
        case 1:
        cout<<"Input matrix A: "<<endl;
        cout<<"Masukkan jumlah baris matrix A: ";
        cin>>barA;
        cout<<"Masukkan jumlah kolom matrix A: ";
        cin>>kolA;
        input_matrix(barA,kolA,A);
        break;

        case 2:
        cout<<"Input matrix B: "<<endl;
        cout<<"Masukkan jumlah baris matrix B: ";
        cin>>barB;
        cout<<"Masukkan jumlah kolom matrix B: ";
        cin>>kolB;
        input_matrix(barB,kolB,B);
        break;

        case 3:
        cout<<"Matrix A : "<<endl;
        if(barA==0) cout<<"Matrix A belum dibuat"<<endl;
        else
        cetak_matrix(barA,kolA,A);
        break;

        case 4:
        cout<<"Matrix B : "<<endl;
        if(barB==0) cout<<"Matrix B belum dibuat"<<endl;
        else
        cetak_matrix(barB,kolB,B);
        break;

        case 5:
        cout<<"Matrix A + Matrix B"<<endl;
        if((barA!=barB)||(kolA!=kolB))
        cout<<"Prde matrix tidak sama, tidak bisa dijumlahkan"<<endl;
        else{
            tambah_matrix(A,B,hasil,barA,kolA);
            cout<<"Matrix A: "<<endl;
            cetak_matrix(barA,kolA,A);
            cout<<"Matrix B: "<<endl;
            cetak_matrix(barB,kolB,B);
            cout<<"Matrix hasil: "<<endl;
            cetak_matrix(barA,kolA,hasil);
        }
        break;

        case 6:
        cout<<"Matrix A - Matrix B"<<endl;
        if((barA!=barB)||(kolA!=kolB))
        cout<<"Ordo matrix tidak sama, tidak bisa dijumlahkan"<<endl;
        else{
            kurang_matrix(A,B,hasil,barA,kolA);
            cout<<"Matrix A: "<<endl;
            cetak_matrix(barA,kolA,A);
            cout<<"Matrix B: "<<endl;
            cetak_matrix(barB,kolB,B);
            cout<<"Matrix hasil: "<<endl;
            cetak_matrix(barA,kolA,hasil);
        }
        break;

        case 7:
        cout<<"Matrix B - Matrix A"<<endl;
        if((barA!=barB)||(kolA!=kolB))
        cout<<"Prde matrix tidak sama, tidak bisa dijumlahkan"<<endl;
        else{
            kurang_matrix(A,B,hasil,barA,kolA);
            cout<<"Matrix A: "<<endl;
            cetak_matrix(barA,kolA,A);
            cout<<"Matrix B: "<<endl;
            cetak_matrix(barB,kolB,B);
            cout<<"Matrix hasil: "<<endl;
            cetak_matrix(barA,kolA,hasil);
        }
        break;

        case 8:
        cout<<"Transpose Matrix A"<<endl;
        if(barA==0)
        cout<<"Matrix A: "<<endl;
        else{
            transpose(A,hasil,barA,kolA);
            cout<<"Matrix A: "<<endl;
            cetak_matrix(barA,kolA,A);
            cout<<"Matrix hasil (Transpose A): "<<endl;
            cetak_matrix(kolA,barA,hasil);
        }
        break;

        case 9:
        cout<<"Transpose Matrix B"<<endl;
        if(barB==0)
        cout<<"Matrix B: "<<endl;
        else{
            transpose(B,hasil,barB,kolB);
            cout<<"Matrix A: "<<endl;
            cetak_matrix(barB,kolB,B);
            cout<<"Matrix hasil (Transpose B): "<<endl;
            cetak_matrix(kolB,barB,hasil);
        }
        break;

        case 0:
        cout<<"Terimakasih"<<endl;
        break;

        default:
        cout<<"Salah pilih menu"<<endl;
        break;
        }
        system("pause");
   }while(pilih!=0);

   return 0;
}