#include<iostream> //@BetikSonu
//Fonksiyonlar Deðer Ýle Çaðýrma.
using namespace std;

void degistirici (int sayi1,int sayi2) //Her zaman geri dönüþ deðeri(return value) olmasý zorunlu deðildir.
// Eðer return komutu bulunmuyorsa, fonksiyon iþlemlerini bitirince kendiliðinden sonlanýr.
// Bu tür fonksiyonlar tipi void olarak belirtilir.
{
	int temp = sayi1;
	sayi1 = sayi2;
	sayi2 = sayi1;
	sayi1 = 120;
	sayi2 = 240;
	cout<<"sayi1 : "<<&sayi1<<endl;
	cout<<"sayi2 : "<<&sayi2<<endl;
}
int main()
{
	int sayi1 = 5, sayi2 = 10;
	cout<<"Sayi 1:  "<<&sayi1<<endl;
	cout<<"Sayi 2:  "<<&sayi2<<endl;
	degistirici(sayi1,sayi2);
	cout<<"Sayi 1:  "<<sayi1<<endl;
	cout<<"Sayi 2:  "<<sayi2<<endl;
	
	return 0;
}
