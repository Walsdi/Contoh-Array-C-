#include<iostream>
using namespace std;

int main(){
    cout<<"Program Penghitung Rata-Rata Nilai Tugas C++"<<endl;
    cout<<endl<<"============================"<<endl;
    cout<<"Progammer    :   Fitri Waldi"<<endl;
    cout<<"NIM          :   22343021"<<endl;
    cout<<"============================"<<endl;
    cout<<endl<<"Masukkan nilai tugas 1 Sampai 5"<<endl;

    int nilaiTugas[5]={75, 80, 90, 100, 95};
    for(int i=0; i<5; i++){
        cout<<"Nilai tugas-"<<i+1<<" adalah "<< nilaiTugas[i]<<endl;
    }
    int length = sizeof(nilaiTugas) / sizeof(nilaiTugas[0]);
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum += nilaiTugas[i];
    }
    float rata_rata = (float)sum / (float)length;

    cout<<endl<<"============================================"<<endl;
    cout<<"Rata-rata nilai tugas 1 sampai 5 adalah "<<rata_rata<<endl;
    cout<<"============================================"<<endl;

    return 0;
}
