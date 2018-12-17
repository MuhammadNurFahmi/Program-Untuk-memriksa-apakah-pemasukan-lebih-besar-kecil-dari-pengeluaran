#include <iostream>
#include <conio.h>

using namespace std;

int main(){
int bil;

cout<<"Berapa Pendapatan BUlan ini = ";
cin>>bil;

if (bil > 400)
   cout<<bil<<" Pemasukkan Lebih Besar Dari Pengeluaran";
else if (bil < 400)
   {
     cout<<bil<<" Pemasukan Lebih Kecil Dari Pengeluaran";
   }
else if (bil==0)
    {
     cout<<"inputan salah";
   }
return 0;
}
