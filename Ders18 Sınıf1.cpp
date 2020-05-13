#include<iostream> //@BetikSonu
using namespace std;


class Rec
{
private:
	int pyuk;
	int pgenis;
	int palan;
public:  //Eriþim belirteci- Dýþarýdan Eriþim Var.
	 	 //private- Dýþarýdan Eriþilemez.               Ýçerlerinde sadece deðiþkenleri belirleriz, atama yapamayýz.
		 //protected- Dýþarýdan Eriþilemez.
	int yuk;
	int genis;
	int alan;
	//VeriGir();                  //Bu halde bir çaðrý yapamam.
	void VeriGir()
	{
		cout<<"Yukseklik Gir: ";
		cin>>yuk;
		cout<<"\nGenislik Gir: ";
		cin>>genis;
	}
	void AlanBul()                      //Fonksiyonu çaðýrmanýn yolu nesne oluþturmak.
	{	
		alan = genis * yuk;
		cout<<"Didörtgenin alaný: "<<alan<<endl;
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
	// d3.palan = 25; Dýþarýdan Eriþim Yok.
	
	return 0;
}
