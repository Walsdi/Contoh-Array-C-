#include <iostream>
using namespace std;

int main(){
    cout<<"Program Menampilkan Ordo 3x3 C++"<<endl;
    cout<<endl<<"============================"<<endl;
    cout<<"Progammer    :   Fitri Waldi"<<endl;
    cout<<"NIM          :   22343021"<<endl;
    cout<<"============================"<<endl;

    int A[3][3] = { {1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int i,j;

    cout<<endl<<"Menampilkan matrik :"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"(^-^)";
    return 0;
}
