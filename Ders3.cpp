//@ykslkrkci tarafýndan Persona Non Grata için hazýrlanmýþtýr.
#include<iostream>
                                //Deðiþkenler Bölüm 2 - Deðiþken Ezme :)
using namespace std;
                                //Farklý etki alanlarýnda ayný isimde deðiþkenler oluþturulabilir.
                                //En son tanýmlanan öncekileri bastýrýyor.Yani sondaki tanýmlanan görülür.

int sayi1 = 5;                  //Global Deðiþkenlerdir.Hiç bir etki alanýnda dahil deðildir fakat heryerde görünürdür. Porgramýn baþýndan sona tanýmlýdýr.Hafýzadadýr.Oluþturulduðunda 0 deðerini alýrlar.
const int le = 100;             //const int Sabit sayýlardýr. deðiþtirilemez.Globaldeyken direk 0 deðeri alýyor, fakat globalde tanýmlanmadýyse Deðerini mutlaka direk vermeliyiz vermezsek hata vericektir.


int main()
{	
	int sayi1 = 6;
	{
		
		int sayi1 = 7;
		cout<<sayi1<<endl;       //En son tanýmlanan 7 ekrana bastýrýldý.
	
	}
	cout<<sayi1<<endl;           // Bu blokta son tanýmlanan 6 olduðu için 6 bastýrýldý.
	
	float a = 2.0f;              //f koyarsak float olduðunu anlýyacaktýr.Koymazsak double olarak görür.
	double d = 3.9999999999999; 
	int k = 5;
	short t = 10;
	
	t = d;                       //d nin deðeri t ye verildi fakat d double olduðu için ve t tam sayý olduðundan sadec tam sayý kýsmý t ye verildi.
	cout<<"\nT nin yeni degeri: "<<t<<endl;  
	
	int araba = 2147483647;      //Ýnt taþýyabileceði max sayý budur.
	cout<<araba + 1<<endl;       //üzerine 1 daha eklersem taþma olur ve sayý - ye çevirilir.
	
	unsigned int l = araba + 1;  //unsigned int 0 dan 4 milyar küsüre kadar deðer alýyor.
	cout<<l<<endl;               //Sayýyý baþarýlý bir þekilde bastýrdý.
	
	return 0;                    //Programý bitirmesini söylüyorum.	
}	

