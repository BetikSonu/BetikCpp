//Dosya Ýþlemleri  // @BetikSonu
/*  fstream (Okuma ve Yazma)
	ifstream (Okuma)
	ofstream (Yazma) */

/*	ios::in (Veri okuma modu)
	ios::out (Veri yazma modu)
	ios::app (Veri ekleme modu) */ 
#include<iostream>
#include<fstream>  //Dosyalama iþlemleri için gerekli olan kütüphane

using namespace std;

int main()
{
	//Dosya oluþturma
	ofstream dosyam("ilkDosyam.txt");
	dosyam.close();
	
	//Dosya Yazma
	ofstream dosyam2("ikinciDosyam.txt");
	dosyam2 << "Persona Non Grata";
	dosyam2.close();
	

	return 0;
}
 
