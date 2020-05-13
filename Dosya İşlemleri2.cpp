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
	//Dosyanýn var olup olmadýðýmý ve açýlabilir olup olmadýðýný nasýl öðrenebiliriz?
	
	ofstream dosyam("ilkDosyam.txt");
	if ( dosyam.is_open())
	{
		dosyam<<"Yüksel Kürekçi";
		dosyam.close();
	}
	
	//Dosya Okuma
	/*
	Dosya okuma iþlemi için ifstream sýnýfýnýn kurucu methoduna dosya adýnýn verilmesi 
	ve biçimine göre getline veya get methodunun kullanýlmasý yeterli olucaktýr.
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
	
	// Dosyayý karakter karakter okumak için ifstream sýnýfýna ait get methodu kulanýlýr.
	
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
	// Dosya silme iþlemi için remowe fonksiyonu kullanýlýr.
	
	
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
