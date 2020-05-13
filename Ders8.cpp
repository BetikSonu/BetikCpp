//Diziler --Birden fazla deðiþken oluþturma | @BetikSonu
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main() 
{
	int tekler[10];
	int ciftler[10];
  //Dizi tanýmlama ----> Deðiþken Türü DiziÝsimi[Eleman ismi]
	int sayilar[10];
	srand(time(0));      //Besleme yapýyor ve rand fonksiyonu sürekli farklý sonuçlar çýkarýcak.
	
	/*
	for(int i=0;i<5;i++)
		cin>>sayilar[i]<<endl;
	for(int i=0;i<5;i++)
		cout<<sayilar[i]<<endl;
	*/
	for(int i=0;i<10;i++)
		sayilar[i] = rand();
	
	
	int ciftindex = 0;
	int tekindex = 0;
	int toplam3 = 0;
	int toplam2 = 0;
	for(int i=0;i<10;i++)
	{
		if (sayilar[i]%2 !=0)
		{
			cout<<sayilar[i]<<endl;
			toplam2 += sayilar[i];
		}
		else
			toplam3 += sayilar[i];
			
	}
	cout<<"Toplam: ";
	cout<<toplam2<<endl;
	cout<<"Çift: "<<toplam3<<endl;
	cout<<""<<endl;
	
	
	
	
	
	return 0;
}
