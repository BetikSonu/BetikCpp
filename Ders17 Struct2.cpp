#include<iostream> // @BetikSonu

using namespace std;

struct Dikdortgen {
	
	int yukseklik;
	int genislik;
};


int AlanBul(Dikdortgen* d1)  //Bizden adres istiyor. Her İşaretci 4byte alan kaplar.
//int AlanBul(Dikdortgen& d1)
{
	d1->genislik = 20;
//d1.genislik = 20;
	d1->yukseklik = 40;
	return d1->genislik * d1->yukseklik;
	
}

void arttir(int& a)
{
	a++	;
}

int main()
{
	int b = 15;
	arttir(b)
	
	Dikdortgen d1;
	d1.genislik = 30;
	d1.yukseklik = 60;
	cout<<AlanBul(&d1)<<endl;
  //cout<<AlanBul(d1)<<endl;	
	cout<<d1.genislik<<endl;
	cout<<d1.yukseklik<<endl;
	
	
	
	return 0;
}
