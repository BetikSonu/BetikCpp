//Diziler --Birden fazla de�i�ken olu�turma | @BetikSonu
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main() 
{
	int tekler[10];
	int ciftler[10];
  //Dizi tan�mlama ----> De�i�ken T�r� Dizi�simi[Eleman ismi]
	int sayilar[10];
	srand(time(0));      //Besleme yap�yor ve rand fonksiyonu s�rekli farkl� sonu�lar ��kar�cak.
	
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
	cout<<"�ift: "<<toplam3<<endl;
	cout<<""<<endl;
	
	
	
	
	
	return 0;
}
