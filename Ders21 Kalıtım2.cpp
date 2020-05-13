#include<iostream> // @BetikSonu
using namespace std;
/*
Kalýtým almýþ sýnýflardan nesne oluþturulduðunda ilk olarak temel sýnýfýn kurucu fonk ççaðýrýlýr.
Buna göre öðrenci sýnýflardan bir nesne oluþturursak öncelikle Calisan sýnýfýnýn kurucu fonksiyonlarý çaðýrýlýcaktýr.
Ardýndan Öðrenci sýnýfýn kurucu fonksiyonu çaðýrýlýcaktýr.
Yok edici Fonksiyonlar Kurucu Fonksiyonun tam tersi sýrada çalýþýrlar en sondan ilke doðru . :)
Türetilmiþ sýnfýlar kalýtým aldýklarý Temel Sýnýflarýn private üyelerine eriþemezler.
Fakat protected ve public üyelerine eriþebilirler.

<<<<<<<<<<<<<<<<<<<<<Tekar bak mutlaka>>>>>>>>>>>>>>>>>>>>>>>> 

*/


class Sekil
{
public:
	int Alan;
	string Birim;
	string SekilTuru;
	Sekil()
	{
		cout<<"SEKÝL Ben Çaðýrýldým."<<endl;
		Birim = "cm^2";
	}
	void AlanYaz()
	{
		cout<<SekilTuru<<" "<<Alan<<" "<<Birim<<" Alana Sahiptir."<<endl;
		
	}
	~Sekil()
	{
		cout<<"SEKÝL yok edildi"<<endl;
	}
	//Sekil(int _Alan):Alan(_Alan){}
	Sekil(int _Alan)
	{
		this->Alan = Alan;   //this dersem Bulunduðu Sýnýfýn deðiþkenini kastettiðimi belirtirim. Normal Alan Parametre olan alan
	}

};
class Ucgen:public Sekil  //Private hariç hepsine eriþimim var þuan.    ->>Protected dahil.<<-
{	
public:
	int taban;
	int yukseklik;
	Ucgen ()       //Uçgen sýnýfýmýz.Burada Düzenliyebiliriz.
	{
		cout<<"Ucgen Ben Çaðýrýldým."<<endl;
		SekilTuru = "Ucgen";
	}
	~Ucgen()
	{
		cout<<"Ucgen yok edildi"<<endl;
	}
};
class Dortgen:public Sekil  //Private hariç hepsine eriþimim var þuan.  ->>Protected dahil.<<-
{	
public:
	int en;
	int boy;
	Dortgen ()      //Dörtgen sýnýfýmýzýn Kurucusu
	{
	cout<<"Dortgen Ben Çaðýrýldým."<<endl;
	SekilTuru = "Dikdortgen";
	}
	~Dortgen()
	{
		cout<<"Dortgen yok edildi"<<endl;
	}
};
int main()
{
	setlocale(LC_ALL,"Turkish");
	Dortgen d1;
	d1.en = 11;
	d1.boy = 12;
	d1.Alan = d1.en * d1.boy;
	d1.AlanYaz();
	Ucgen u1;
	u1.taban = 15;
	u1.yukseklik = 15;
	u1.Alan = u1.taban * u1.yukseklik;
	u1.AlanYaz();
	
	
	return 0;
}
