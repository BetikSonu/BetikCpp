//For D�ng�s� @BetikSonu
#include<iostream>
using namespace std;

int main()
{ //for(Saya� Tan�mla;Devam Ko�ulu;Sayac�Ar�tr/Azalt)
	for(int i=0;i<5;i+=1)                                 //i de�i�kenini olu�turdum ve 10 dan k���k olaca�� tekrar say�s� kadar her defas�nda 1 art�rd�m.
  //for(int i=0;i<10;i++)                                 //Yukar�dakiyle ayn� i�lemleri uygulamakta.
 	cout<<"Persona Non Grata Tekrar Sayisi: "<<i<<endl;   //10dan her k���k oldu�unda Ekrana yaz�m� bast�rd�m.
	cout<<"Telegraf.";		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Toplam = 0;
for(int i=0;i<10;i+=1)
	{
	Toplam += i;                                          //i her 10dan k���k oldu�u zaman Toplam�n �zerine eklenicek.
	if (i==5)
		break;
	
	cout<<"Toplam Yeni Degeri: "<<Toplam<<endl;
	}







return 0;		
}
