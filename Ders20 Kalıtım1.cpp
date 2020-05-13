#include<iostream> // @BetikSonu
#include<conio.h>
#include<string>

using namespace std;
//Kalýtým-Ýnheritance -Kalýtým alýnan sýnýftan yeni sýnýflar üretilir(Temel Sýnýf(base class) ) Üretilenlere de Türetilmiþ Sýnýf (derived class)Denir.
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
class Ucgen:public Sekil  //Private hariç hepsine eriþimim var þuan.    ->>Protected dahil.<<-
{	
public:
	int taban;
	int yukseklik;
	Ucgen ()       //Uçgen sýnýfýmýz.Burada Düzenliyebiliriz.
	{
		SekilTuru = "Ucgen";
	}
};
class Dortgen:public Sekil  //Private hariç hepsine eriþimim var þuan.  ->>Protected dahil.<<-
{	
public:
	int en;
	int boy;
	Dortgen ()      //Dörtgen sýnýfýmýzýn Kurucusu
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
