#include<iostream> // @BetikSonu
// Struct  -->  Birden fazla de�i�keni birle�tirerek yeni bir de�i�ken t�r� olu�turmas�na izin veriyor.

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
	cout<<"Ad� Giriniz: ";
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
		cout<<"�kiside ayn� "<<endl;
	else
		cout<<"�kisi Farkl� Karde�im"<<endl;
	
	
	
	/*
	Insan Ogrenci1;       //�nsan yap�s�ndan  ��renci1 olu�turdum.
	
	// Ogranci1.TC = 1234  gibi eri�ebilriiz
	cout<<"��renci Ad� Giriniz: ";
	cin>>Ogrenci1.Ad; //Alt �zelliklerine "." operat�r� ile ula�abiliyoruz.
	cout<<"\n"<<Ogrenci1.Ad;
	*/
	
}
