#include<iostream> // @BetikSonu
using namespace std;


int Degistir(int sayi1,int sayi2)
{
	cout<<"Ust al basladi"<<endl;
	sayi1 = 20;
	sayi2 = 40;
	cout<<sayi1<<sayi2<<endl;         // 20 - 40
	return sayi1 + sayi2;
		
}
	
//                                     �OH �NEML� !!!!
int main()
{
	int sayi1,sayi2;
	sayi1 = 3;
	sayi2 = 5;
	int sonuc = Degistir(sayi1,sayi2); // De�i�kenlerin de�erleri i�eri atan�yor !!!
	cout<<sayi1<<sayi2<<sonuc<<endl;   //3 - 5 - 60
	

	
	
	return 0;
}
