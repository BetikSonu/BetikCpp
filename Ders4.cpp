//@ykslkrkci tarafýndan Persona Non Grata için hazýrlanmýþtýr.
#include<iostream>
//Koþullar Ders1
using namespace std;
int main()
{
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int sayi1,sayi2,sonuc,sonuc2;           //Farklý Ýnteger deðiþkenler yarattým.
	
	cout<<"Birinci Sayi: ";  
	cin>>sayi1;                             //sayi1 deðiþkeninin deðerini kullanýcýdan aldým.
	cout<<endl<<"Ýkinci Sayi: ";
	cin>>sayi2;                             //sayi2 deðiþkeninin deðerini kullanýcýdan aldým.
	
	if(sayi1>sayi2)                         //Eðer sayi1 sayi2 den büyük ise
	{
	
		cout<<"Sayi1 Daha Buyuk."<<endl;    //Koþula baðlý ne yazdýrmasýný istediðimi söyledim.
		cout<<"Merhaba Persona"<<endl;	    //Ýf'e baðlý deðil sayý1 sayi2 den küçük olsada bunu ekrana bastýrýcak peki nasýl bunu aþabiliriz?
	}                                       //Süslü parantez ile blok içine almazsam if koþulunu Persona yazýcaktý if den baðýmsýz. Ama blok haline sokarsak sadece if koþulu true olursa Persona yazdýrýcak.
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	sonuc = (sayi1>=0)&&(sayi2>=0);          //Ýkili koþulu bu halde yazabiliriz. &&-->Anlamý (VE DURUMU) yani solununda saðýnýnda true olmasýný istiyoruz.Eðer iksinden birisi false ise sonuc false olucaktýr.
	if(sonuc)
	{
		cout<<"Ýki tarafta true oldu :)"<<endl;
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	sonuc2 = (sayi1>=0)||(sayi2>=0);         // || --> Veya anlamýna gelir.Koþullardan birisi saðlandýðýnda true deðerini alýr.Ýkiside saðlanmazsa false deðerinia alýr.
	if(sonuc2)
	{
		cout<<"Koþullardan en az 1 tanesi true deðerini aldi."<<endl;
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if(-1)
	{
		cout<<"if içindeki 0 dan farklý tüm sayýlarý true olarak görüyor."<<endl;  //Yani if blogunun içerisine giriyor.
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if("Persona Non Grata")
	{
		cout<<"if içindeki 0 dan farklý tum sayýlarý true olarak göruyor."<<endl;  //Yani if blogunun içerisine giriyor.
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int persona,non,grata;
	cout<<"Ýlk deger: ";
	cin>>persona;
	cout<<endl<<"Ýkinci Deger: ";
	cin>>non;
	
	grata = persona == non ;               //Birnevi bir koþul yaratmýþ oldum.
	
	if (grata)                             //Grata deðiþkeni true olursa if'in içerisine giricek, grata false olursan koþula girmiyecek.
  //if(sayi1==sayi2)                         Bu halde de yazabilirdim.Yukarýdaki koþulun aynýsý.
  //if(sayi1!=saiy2)                         Eðer sayi1 sayi2'ye eþit deðilse...
	{
	cout<<"Persona Non'a eþittir.";
	}	
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	return 0;
}

