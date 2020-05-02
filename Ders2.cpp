//@ykslkrkci tarafýndan Persona Non Grata için hazýrlanmýþtýr.
#include<iostream>
// Deðiþken Tipleri ve Deðiþkenler
using namespace std;

int main()
{
	/*
	int                         Tamsayý
	float                       Ondalýklý Sayýlar
	double                      Ondalýklý Sayýlar
	char                        Bir tane karakter saklýyan veri tipi
	bool                        Mantýksal veri tipi
	short int
	long int
	long double
	*/
	int a = 32;
	float b = 3.52;
	double c = 4.546;
	char d = 'y';
	bool e = false;
	bool f = true;
	
	cout<<"a deðiþkeninin deðeri: "<< a << endl;  //Ekrana Deðiþkenleri Bastýrdýk.
	cout<<"b deðiþkeninin deðeri: "<< b << endl;  //Ekrana Deðiþkenleri Bastýrdýk.
	cout<<"c deðiþkeninin deðeri: "<< c << endl;  //Ekrana Deðiþkenleri Bastýrdýk.
	cout<<"d deðiþkeninin deðeri: "<< d << endl;  //Ekrana Deðiþkenleri Bastýrdýk.
	cout<<"e deðiþkeninin deðeri: "<< e << endl;  //Ekrana Deðiþkenleri Bastýrdýk.
	cout<<"f deðiþkeninin deðeri: "<< f << endl;  //Ekrana Deðiþkenleri Bastýrdýk.
	
	int x,y,z,toplam = 0;                         //4 adet integer deðiþkent tanýmladým.
	x = 12;                                       //Deðiþkenlerin deðerlerini verdim.
	y = 4;                                        //Deðiþkenlerin deðerlerini verdim.
	z = 6;                                        //Deðiþkenlerin deðerlerini verdim.
	toplam = x + y + z;                           //Deðiþkenlerin deðerlerini verdim.
	cout<<"Toplam: "<< toplam <<endl;             //Toplam deðiþkenini ekrana bastýrdým.
	
	// Þu halde de tanýmlýyabilirsiniz.
	
	int persona,grata;
	int sayi1;
	int Sayi1 = 4;
	int sayi3 = 5;
	int sayi2;
	
	sayi1 = 1;
	sayi2 = Sayi1 + 5;                             //Büyük Küçük harf dikkate almalýsýnýz. Sayi1 ile sayi1 ayný deðiþkenler deðildir.
	//sayi3 = sayi3 + 1;                           //Deðerini bir artýrdýk
	//sayi3 += 1;                                  //Üstteki yapýlanla birebir ayný iþlemi yapmaktadýr.
	
	cout<<sayi3++<<endl;                           //Sayýnýn ilk deðerini bastýrdý. Ardýndan artýrmaya baþlýyacak.
	cout<<sayi3<<endl;
	cout<<++sayi3<<endl;                           //Sayýnýn artýrýlmýþ hali ekrana bastýrýlýyor.Yani Öncelikle artýrýyor.
	
	
	return 0;
}
