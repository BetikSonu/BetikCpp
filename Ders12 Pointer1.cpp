#include<iostream> // @BetikSonu

using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi1 = 5;
	int *p = &sayi1;            //p i�aretcisi int t�r�nden bir de�i�kenin adresini tutuyor.4 byte alan kapl�yor. *Adres tutma g�revi
	                            //Kullan�m� ��aretciT�r� * ��aretci�smi
	
	int sayi2 = 6;
	int* p2;
	p2 = &sayi2;
	cout<<p2<<endl;
	cout<<*p2<<endl  ;          //4 byte veri �ekiyor. De�i�ken t�r� ile pointer t�r� ayn� olmal�d�r.
	
	int sayi3 = 56;
	int* p3 = &sayi3;
	cout<<"p3     : "<<p3<<endl;
	cout<<"&sayi3 : "<<&sayi3<<endl;
	cout<<"*p3    : "<<*p3<<endl;
	
	
	cout<<"------------De�isim yapt�m-----------"<<endl;
	
	int a = 89;
	int* p4 = &a;
	*p4 = 220;                  //p nin bulundu�u h�creyi manip�le eder.
	cout<<"p4  : "<<p4<<endl;
	cout<<"&a  : "<<&a<<endl;
	cout<<"*p4 : "<<*p4<<endl;  
	cout<<"a   : "<<a<<endl;    //a'n�n de�eri de�i�ti.
	
	
	return 0; 
}
