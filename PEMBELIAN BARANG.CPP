#include <iostream.h>
#include <conio.h>
int main()
{
	char Nama[25], Kode;
   int Pil,Harga, JumlahBelanja, Discount, TotalBelanja, TotalBayar, Bayar, Kembalian;
   cout<<"Masukkan Nama Anda : ";
   cin>>Nama;
   cout<<endl;
   cout<<"SELAMAT DATANG "<<Nama<<" DI PENJALAN ALAT RUMAH TANGGA";
   cout<<endl;
   cout<<"         STRUK BELANJA         \n";
   cout<<"_______________________________:\n";
   cout<<"Kategori Barang Yang Akan Anda Beli :\n";
   cout<<"A. Kursi \n";
   cout<<"B. Meja \n";
   cout<<"C. Lemari \n";
   cout<<"E. Keluar  : \n";
   cout<<"Pilih Barang Yang Ingin And beli (A - E) : "; cin>>Kode;
   cout<<"Masukkan Jumalah Barang Yang dibeli : ";cin>>JumlahBelanja;
   switch(Kode)
{
	case 'A' :
   	Harga = 1000000;
  	   cout<<"Kursu \n";
   	cout<<"Harga Satuan : Rp "<<Harga<<endl;
   break;
   case 'B' :
   	Harga = 2000000;
  	   cout<<"Kursu \n";
   	cout<<"Harga Satuan : Rp "<<Harga<<endl;
   break;
   case 'C' :
   	Harga = 25000000;
  	   cout<<"Kursu \n";
   	cout<<"Harga Satuan : Rp "<<Harga<<endl;
   break;
   case 'E' :
   cout<<"Kode yang anda masukkan salah"<<endl;
   break; }
TotalBelanja = JumlahBelanja * Harga;
cout<<"Kode Barang "<<Kode<<endl;
cout<<"Total Belanja anda adalah : Rp. "<<TotalBelanja<<endl;
if (TotalBelanja >= 10000000)
	{Discount = TotalBelanja * 20/100;}
else
	{Discount = 0;}
cout<<"Discount = Rp. "<<Discount<<endl;
TotalBayar = TotalBelanja - Discount;
cout<<"Total yang harus anda bayar : Rp. "<<TotalBayar<<endl;
cout<<"Masukkan Uang Pembayaran : " ; cin>>Bayar;
Kembalian = Bayar - TotalBayar;
cout<<"Kembalian :Rp. "<<Kembalian<<endl;
cout<<"THANKS YOU AND SEE YOU NEXT TIME"<<endl;
getch();}
