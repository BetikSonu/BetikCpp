#include<iostream> // @BetikSonu
// Struct  -->  Birden fazla deðiþkeni birleþtirerek yeni bir deðiþken türü oluþturmasýna izin veriyor.

using namespace std;

struct Insan {
		char Ad[100];
		char SoyadAd[100];
		int TC;
		int DogumYili;	
	};

Insan VeriGir()
{
	
	Insan Ogr;
	cout<<"Adý Giriniz: ";
	cin>>Ogr.Ad;
	cout<<"\nTc Giriniz: ";
	cin>>Ogr.SoyadAd;	
	return Ogr;
}

bool Karsilastir(Insan d1, Insan d2)
{
	if(d1.TC == d2.TC)
		return true;
	
	return false;
	
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	//Insan Ogr1 = VeriGir();
	Insan Ogr1;
	Insan Ogr2;
	Ogr1.TC = 1234;
	Ogr2.TC = 1234;
	if (Karsilastir(Ogr1, Ogr2))
		cout<<"Ýkiside ayný "<<endl;
	else
		cout<<"Ýkisi Farklý Kardeþim"<<endl;
	
	
	
	/*
	Insan Ogrenci1;       //Ýnsan yapýsýndan  öðrenci1 oluþturdum.
	
	// Ogranci1.TC = 1234  gibi eriþebilriiz
	cout<<"Öðrenci Adý Giriniz: ";
	cin>>Ogrenci1.Ad; //Alt özelliklerine "." operatörü ile ulaþabiliyoruz.
	cout<<"\n"<<Ogrenci1.Ad;
	*/
	
}
