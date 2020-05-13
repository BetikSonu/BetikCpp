//Dosya ��lemleri  // @BetikSonu
/*  fstream (Okuma ve Yazma)
	ifstream (Okuma)
	ofstream (Yazma) */

/*	ios::in (Veri okuma modu)
	ios::out (Veri yazma modu)
	ios::app (Veri ekleme modu) */ 
#include<iostream>
#include<fstream>  //Dosyalama i�lemleri i�in gerekli olan k�t�phane

using namespace std;

int main()
{
	//Dosyan�n var olup olmad���m� ve a��labilir olup olmad���n� nas�l ��renebiliriz?
	
	ofstream dosyam("ilkDosyam.txt");
	if ( dosyam.is_open())
	{
		dosyam<<"Y�ksel K�rek�i";
		dosyam.close();
	}
	
	//Dosya Okuma
	/*
	Dosya okuma i�lemi i�in ifstream s�n�f�n�n kurucu methoduna dosya ad�n�n verilmesi 
	ve bi�imine g�re getline veya get methodunun kullan�lmas� yeterli olucakt�r.
	*/
	ifstream dosyam3("yeniDosya.txt");
	string satir = "";
	if (dosyam3.is_open())
	{
		while (getline(dosyam3,satir))
		{
			
			cout<<satir<<endl;
		}
		dosyam3.close()
	}
	
	// Dosyay� karakter karakter okumak i�in ifstream s�n�f�na ait get methodu kulan�l�r.
	
	#include <iostream>
#include <fstream>


  ifstream dosyaOku("dosya.txt");
  char karakter;

  if ( dosyaOku.is_open() ){

    while ( dosyaOku.get(karakter) ){
      cout << karakter;
    }

    dosyaOku.close();
  }
	// Dosya Silme
	// Dosya silme i�lemi i�in remowe fonksiyonu kullan�l�r.
	
	
	int sonuc = remove("dosya.txt");
	
	if (sonuc == 0)
	{
		cout<<"Dosya Silindi";
	}
	else
	{
		
		cerr <<"Dosya Silinemedi";
		return -1;
	}
  return 0;
}
	
	
	
	return 0;
}
