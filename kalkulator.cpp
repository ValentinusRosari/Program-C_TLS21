#include <iostream>
using namespace std;

int main()
{
    int operasi;
    float x,y,z;
    
    cout<<"=====KALKULATOR SEDERHANA=====\n\n";
    cout<<"Masukkan bilangan pertama:\t"; cin>>x; cout<<"\n";
    cout<<"Masukkan bilangan kedua:\t"; cin>>y; cout<<"\n";
    cout<<"\nMenu operasi hitungan:\n";
    cout<<"1. Penjumlahan (+)\n2. Pengurangan (-)\n3. Perkalian (*)\n4. Pembagian(/)\n";
    cout<<"\nOperasi hitungan yang anda pilih: "; cin>>operasi;
    cout<<"\n\n===HASIL===\n";
    
    switch(operasi)
    {
        case 1: z= x+y; cout<<x<<"+"<<y<<"="<<z; break;
        case 2: z= x-y; cout<<x<<"-"<<y<<"="<<z; break;
        case 3: z= x*y; cout<<x<<"*"<<y<<"="<<z; break;
        case 4: z= x/y; cout<<x<<"/"<<y<<"="<<z; break;
        default: cout<<"Operasi hitungan yang anda pilih tidak ada di menu!";
    }
    
    return 0;
}

//test