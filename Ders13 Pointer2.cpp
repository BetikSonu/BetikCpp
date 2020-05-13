#include<iostream> // @BetikSonu
using namespace std;

int Degistir(int* sayi1,int* sayi2)
{
	
	*sayi1 = 20;
	*sayi2 = 40;
	cout<<sayi1<<sayi2<<endl;
	return *sayi1 + *sayi2;	
}

void Arttir(int *a)
	{
		(*a)++;
	}
int main()
{	
	int sayi1,sayi2;
	sayi1 = 3;
	sayi2 = 5;
	int sonuc = Degistir(&sayi1,&sayi2);
	cout<<sonuc<<endl;
	
	setlocale(LC_ALL,"Turkish");
	int sayi = 120;
	cout<<"\nArtýrdýktan Önce : "<<sayi<<endl;
	Arttir(&sayi);
	cout<<"Artýrdýktan Sonra: "<<sayi<<endl;
	
	
	
	
	
	return 0;
}
