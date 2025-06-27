#include <iostream>
using namespace std;

class NilaiMatkul{
    private:
    float mahasigma[100][100];
    int jumMhs;

   public:

   void input(){
    cout<<"Masukkan jumlah mahasigma: ";
    cin>>jumMhs;

    for(int i=0;i<jumMhs;i++){
        cout<<"Masukkan nim siswa "<<i+1<<" : ";
        cin>>mahasigma[i][0];
        cout<<"Masukkan nilai matkul 1 : ";
        cin>>mahasigma[i][1];
        cout<<"Masukkan nilai matkul 2 : ";
        cin>>mahasigma[i][2];
        cout<<"Masukkan nilai matkul 3 : ";
        cin>>mahasigma[i][3];

        //hitung rata rata
        mahasigma[i][4]=(mahasigma[i][1]+mahasigma[i][2]+mahasigma[i][3])/3;
    }
   }

   void tampilkan(){
    cout<<"======================================="<<endl;
    cout<<"| Siswa  | Nim  | M1 | M2 | M3 | Rata |"<<endl;
    cout<<"======================================="<<endl;
    for (int i=0;i<jumMhs;i++){
        cout<<"|  "<<i+1;
        cout<<"      | "<<mahasigma[i][0];
        cout<<" | "<<mahasigma[i][1];
        cout<<" | "<<mahasigma[i][2];
        cout<<" | "<<mahasigma[i][3];
        cout<<" | "<<mahasigma[i][4]<<"  "<<endl;
    }
    cout<<"========================================"<<endl;
   }

   void Ascending() {
        for (int i = 0; i < jumMhs - 1; i++) {
            for (int j = i + 1; j < jumMhs; j++) {
                if (mahasigma[i][4] > mahasigma[j][4]) {
                    for (int k = 0; k < 5; k++) {
                        swap(mahasigma[i][k], mahasigma[j][k]);
                    }
                }
            }
        }
    }

    void Descending(){
        for (int i = 0; i < jumMhs - 1; i++) {
            for (int j = i + 1; j < jumMhs; j++) {
                if (mahasigma[i][4] < mahasigma[j][4]) {
                    for (int k = 0; k < 5; k++) {
                        swap(mahasigma[i][k], mahasigma[j][k]);
                    }
                }
            }
        }
    }

    void menu(){
        int pilihan;
        do{
        cout<<"===== Menu ====="<<endl;
        cout<<"1. Input nilai siswa\n2. Tampilkan nilai rata rata siswa\n3. Sorting rata rata asecending\n4. Soritng rata rata Descending\n5. Keluar"<<endl;
        cout<<"Pilihan: ";
        cin>>pilihan;

        if(pilihan==1){
            input();
        }else if(pilihan==2){
            tampilkan();
        }else if(pilihan==3){
            Ascending();
            tampilkan();
        }else if(pilihan==4){
            Descending();
            tampilkan();
        }else if(pilihan==5){
            cout<<"Thannk you boss"<<endl;
        }
    }while(pilihan !=5);

    }
};

int main(){
    NilaiMatkul x;
    x.menu();
}