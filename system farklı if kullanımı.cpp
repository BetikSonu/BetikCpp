 // @BetikSonu#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	system("COLOR F2");   //Ýlki arka plan 2. yazý rengi
	/*
	0 siyah 
	1 mavi
	2 yesil
	3 aqua
	3 kýrmýzý
	5 mor
	6 sarý
	7 beyaz
	8 gri
	9 acýk mavi
	A ACIK YESÝL
	B ACIK AQUA
	C ACIK KIRMIZI
	D ACIK MOR
	E ACIK SARI
	F PARLAK BEYAZ
	
	*/
	
	cout<<"Yüksel"<<endl;
	
	int x;
	cout<<"ilk sayýyý giriniz: ";
	cin>>x;
	
	x%2 == 0 && x%5 == 0 ? cout<<"Tamam" : cout<<"Yok daha neler";	
	
	return 0;
}
