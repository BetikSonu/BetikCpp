#include<iostream> // @BetikSonu
using namespace std;
//Fonksiyonlar
	//Tan�mlama
	//int(D�n�� t�r�) Faktoriyel(Fonksiyon ismi,de�i�kenden farkl� olmal�) { int sayi}(Parametreler)
	
int Faktoriyel(int sayi)
{
	int sonuc =1;
	for (int i=1;i<=sayi;i++)
		sonuc*=i;
	return sonuc;		
		
}

int Ustal (int sayi2,int ust)
{
	int sonuc = 1;
	for (int i=0;i<sayi2;i++);
	sonuc *= sayi2;
	return sonuc;
}
int main()
{
	/* int sayi;
	cin>>sayi;
	
	int son = Faktoriyel(sayi);
	cout<<son<<endl; */
	
	int sayi2,ust;
	cin>>sayi2>>ust;
	
	int son2 = Ustal(sayi2,ust);
	cout<<son2<<endl;
	
	///////////////////////////////////////////////////////////////////////////////////////
	// �nden fonk tan�ml�yarak sonrada kullanabiliriz ama �nermiyorum.
	int Ustal (int sayi2,int ust);
	int main()
	{
		int son2 = Ustal(sayi2,ust);
		cout<<son2<<endl;
		
	int Ustal (int sayi2,int ust)
	{
	int sonuc = 1;
	for (int i=0;i<sayi2;i++);
	sonuc *= sayi2;
	return sonuc;
	}
		
	}
	return 0;
}


