#include<iostream> // @BetikSonu
using namespace std;
/*
Kal�t�m alm�� s�n�flardan nesne olu�turuldu�unda ilk olarak temel s�n�f�n kurucu fonk ��a��r�l�r.
Buna g�re ��renci s�n�flardan bir nesne olu�turursak �ncelikle Calisan s�n�f�n�n kurucu fonksiyonlar� �a��r�l�cakt�r.
Ard�ndan ��renci s�n�f�n kurucu fonksiyonu �a��r�l�cakt�r.
Yok edici Fonksiyonlar Kurucu Fonksiyonun tam tersi s�rada �al���rlar en sondan ilke do�ru . :)
T�retilmi� s�nf�lar kal�t�m ald�klar� Temel S�n�flar�n private �yelerine eri�emezler.
Fakat protected ve public �yelerine eri�ebilirler.

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
		cout<<"SEK�L Ben �a��r�ld�m."<<endl;
		Birim = "cm^2";
	}
	void AlanYaz()
	{
		cout<<SekilTuru<<" "<<Alan<<" "<<Birim<<" Alana Sahiptir."<<endl;
		
	}
	~Sekil()
	{
		cout<<"SEK�L yok edildi"<<endl;
	}
	//Sekil(int _Alan):Alan(_Alan){}
	Sekil(int _Alan)
	{
		this->Alan = Alan;   //this dersem Bulundu�u S�n�f�n de�i�kenini kastetti�imi belirtirim. Normal Alan Parametre olan alan
	}

};
class Ucgen:public Sekil  //Private hari� hepsine eri�imim var �uan.    ->>Protected dahil.<<-
{	
public:
	int taban;
	int yukseklik;
	Ucgen ()       //U�gen s�n�f�m�z.Burada D�zenliyebiliriz.
	{
		cout<<"Ucgen Ben �a��r�ld�m."<<endl;
		SekilTuru = "Ucgen";
	}
	~Ucgen()
	{
		cout<<"Ucgen yok edildi"<<endl;
	}
};
class Dortgen:public Sekil  //Private hari� hepsine eri�imim var �uan.  ->>Protected dahil.<<-
{	
public:
	int en;
	int boy;
	Dortgen ()      //D�rtgen s�n�f�m�z�n Kurucusu
	{
	cout<<"Dortgen Ben �a��r�ld�m."<<endl;
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
