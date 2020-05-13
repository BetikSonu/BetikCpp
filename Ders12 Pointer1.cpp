#include<iostream> // @BetikSonu

using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1 = 5;
	int *p = &sayi1;            //p iþaretcisi int türünden bir deðiþkenin adresini tutuyor.4 byte alan kaplýyor. *Adres tutma görevi
	                            //Kullanýmý ÝþaretciTürü * ÝþaretciÝsmi
	
	int sayi2 = 6;
	int* p2;
	p2 = &sayi2;
	cout<<p2<<endl;
	cout<<*p2<<endl  ;          //4 byte veri çekiyor. Deðiþken türü ile pointer türü ayný olmalýdýr.
	
	int sayi3 = 56;
	int* p3 = &sayi3;
	cout<<"p3     : "<<p3<<endl;
	cout<<"&sayi3 : "<<&sayi3<<endl;
	cout<<"*p3    : "<<*p3<<endl;
	
	
	cout<<"------------Deðisim yaptým-----------"<<endl;
	
	int a = 89;
	int* p4 = &a;
	*p4 = 220;                  //p nin bulunduðu hücreyi manipüle eder.
	cout<<"p4  : "<<p4<<endl;
	cout<<"&a  : "<<&a<<endl;
	cout<<"*p4 : "<<*p4<<endl;  
	cout<<"a   : "<<a<<endl;    //a'nýn deðeri deðiþti.
	
	
	return 0; 
}
