 // @BetikSonu#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	system("COLOR F2");   //�lki arka plan 2. yaz� rengi
	/*
	0 siyah 
	1 mavi
	2 yesil
	3 aqua
	3 k�rm�z�
	5 mor
	6 sar�
	7 beyaz
	8 gri
	9 ac�k mavi
	A ACIK YES�L
	B ACIK AQUA
	C ACIK KIRMIZI
	D ACIK MOR
	E ACIK SARI
	F PARLAK BEYAZ
	
	*/
	
	cout<<"Y�ksel"<<endl;
	
	int x;
	cout<<"ilk say�y� giriniz: ";
	cin>>x;
	
	x%2 == 0 && x%5 == 0 ? cout<<"Tamam" : cout<<"Yok daha neler";	
	
	return 0;
}
