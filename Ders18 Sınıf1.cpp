#include<iostream> //@BetikSonu
using namespace std;


class Rec
{
private:
	int pyuk;
	int pgenis;
	int palan;
public:  //Eri�im belirteci- D��ar�dan Eri�im Var.
	 	 //private- D��ar�dan Eri�ilemez.               ��erlerinde sadece de�i�kenleri belirleriz, atama yapamay�z.
		 //protected- D��ar�dan Eri�ilemez.
	int yuk;
	int genis;
	int alan;
	//VeriGir();                  //Bu halde bir �a�r� yapamam.
	void VeriGir()
	{
		cout<<"Yukseklik Gir: ";
		cin>>yuk;
		cout<<"\nGenislik Gir: ";
		cin>>genis;
	}
	void AlanBul()                      //Fonksiyonu �a��rman�n yolu nesne olu�turmak.
	{	
		alan = genis * yuk;
		cout<<"Did�rtgenin alan�: "<<alan<<endl;
	}
};
int main()
{
	setlocale(LC_ALL,"Turkish");
	Rec d1;
	Rec d2;
/*  d1.genis = 125;
	d1.yuk = 145;    */
	d2.genis = 22;
	d2.yuk = 32;
	//d2.AlanBul();
	//d1.VeriGir();
	//d1.AlanBul();
	
	Rec d3;
	// d3.palan = 25; D��ar�dan Eri�im Yok.
	
	return 0;
}
