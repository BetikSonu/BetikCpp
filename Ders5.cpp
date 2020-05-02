#include<iostream>
// Koþullar 2
using namespace std;

int main()
{
int sayi1,sayi2,sonuc;

cout<<"Birinci Sayi: ";  
cin>>sayi1;                
cout<<endl<<"Ikinci Sayi: ";
cin>>sayi2;

if (sayi1<sayi2)
{
	cout<<"Sayi2 Buyuk."<<endl;
}
else                         //Deðilse diyerek ardýndan yapmasýný istediðim iþlemleri blok açarak içine yazdým.
{
	cout<<"Sayi1 Buyuk."<<endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

//Koþul Daraltma  --- Sýra sýra tüm koþullarý gezerek hangisinin uygun olduðunu arýyor.


int sayi3;

cout<<"Sayiyi Giriniz: ";         
cin>>sayi3;                         //Kullanýcýdan sayý aldým.

if (sayi3==80)                      //Eðer 80e eþitse dedim.
{
	cout<<"80e esit.";
}
else if (sayi3==70)                 //eðer 70e eþitse dedim.
{
	cout<<"70e esit..";
}
else if (sayi3==60)                 //eðer 60a eþitse dedim.
{
	cout<<"60a esit.";
}
else                                //Hiç biri deðilse :) kýsacasý Ýf ile Else arasýna istediðimiz kadar else if kullanarak koþullarýmýzý daraltabiliyoruz.
{
	cout<<"Böyle bir sayi olamaz. ";
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Koþul Operatörü (Çok fazla karþýnýza çýkmayacak)

//switch else if'in bir karþýlýðýdýr. Fakat tüm koþullarý gezmez, direk kendisine uygun olan koþula gider.

int a = 5;
switch(a)
{
	case 1:
		cout<<"Bir";
		break;              //break Switch içerisinden çýkmamýzý saðlýyor.
	case 2:
		cout<<"Ýki";
		break;              //break Switch içerisinden çýkmamýzý saðlýyor.
	case 4:
		cout<<"Dört";	
		break;              //break Switch içerisinden çýkmamýzý saðlýyor.
	case 5:
		cout<<"Bes"<<endl;	
		break;              //break Switch içerisinden çýkmamýzý saðlýyor.
	default:                //else görevi görmektedir.
		cout<<"Hicbirisi";	
}
	cout<<"Sona geldinn :)";
////////////////////////////////////////////////////////////////////////////////////////
	int sayi67;
	
	cout<<"Sayiyi Giriniz :";
	cin>>sayi67;
	cout<<((sayi67>=0)?"Pozitif":"Negatif"); //?'nin buradaki iþlevi, belirttiðim koþul saðlandýðýnda ekrana Pozitif yazýcak deðilse Negatif yazdýrýcak.

	return 0;				
}
