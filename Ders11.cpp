#include<iostream> // @BetikSonu
//Fonksiyonlar De�er �le �a��rma.
using namespace std;

void degistirici (int a,int b) //Her zaman geri d�n�� de�eri(return value) olmas� zorunlu de�ildir.
// E�er return komutu bulunmuyorsa, fonksiyon i�lemlerini bitirince kendili�inden sonlan�r.
// Bu t�r fonksiyonlar tipi void olarak belirtilir.
{
	int temp = a;
	a = b;
	b = a;
}
int main()
{
	int sayi1 = 5, sayi2 = 10;
	cout<<"Sayi 1:  "<<sayi1<<endl;
	cout<<"Sayi 2:  "<<sayi2<<endl;
	degistirici(sayi1,sayi2);
	cout<<"Sayi 1:  "<<sayi1<<endl;
	cout<<"Sayi 2:  "<<sayi2<<endl;
	
	return 0;
}
