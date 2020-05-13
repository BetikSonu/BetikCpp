#include<iostream> // @BetikSonu
#include<conio.h>
#include<string>

using namespace std;
//Kal�t�m-�nheritance -Kal�t�m al�nan s�n�ftan yeni s�n�flar �retilir(Temel S�n�f(base class) ) �retilenlere de T�retilmi� S�n�f (derived class)Denir.
class Sekil
{
public:
	int Alan;
	string Birim;
	string SekilTuru;
	Sekil()
	{
		Birim = "cm^2";
	}
	void AlanYaz()
	{
		cout<<SekilTuru<<" "<<Alan<<" "<<Birim<<" Alana Sahiptir."<<endl;
		
	}

};
class Ucgen:public Sekil  //Private hari� hepsine eri�imim var �uan.    ->>Protected dahil.<<-
{	
public:
	int taban;
	int yukseklik;
	Ucgen ()       //U�gen s�n�f�m�z.Burada D�zenliyebiliriz.
	{
		SekilTuru = "Ucgen";
	}
};
class Dortgen:public Sekil  //Private hari� hepsine eri�imim var �uan.  ->>Protected dahil.<<-
{	
public:
	int en;
	int boy;
	Dortgen ()      //D�rtgen s�n�f�m�z�n Kurucusu
	{
	SekilTuru = "Dikdortgen";
	}
};

int main ()
{
	setlocale(LC_ALL,"Turkish");
	Dortgen d1;
	d1.en = 11;
	d1.boy = 12;
	d1.Alan = d1.en * d1.boy;
	d1.AlanYaz();
	
	return 0;
}
