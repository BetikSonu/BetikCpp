#include<iostream> //@BetikSonu
using namespace std;
//Kurucu Method
class Rec
{
private:
	int pyuk;
	int pgenis;
	int palan;
	char at[10];
public:
	Rec()          //Default Constructor  --  Parametresiz olur.-- Parametreli açarsam derleyici parametresiz üretmez.Public de yaratýlýr.
	{
	cout<<"Sen bilmesende ben oluþturuluyorum."<<endl;
	}
	~Rec()   //Parametre almaz !!!!
	{
		cout<<"Yok ettim abe"<<endl;
	}
	void VeriGir()
	{
		cout<<"Yukseklik Gir: ";
		cin>>pyuk; 
		cout<<"\nGenislik Gir: ";
		cin>>pgenis;
	}
	void AlanBul()                   
	{	
		palan = pgenis * pyuk;
		cout<<"Didörtgenin alaný: "<<palan<<endl;
	}
	//destructor  Yýkýcý Method
};
int main()
{
	setlocale(LC_ALL,"Turkish");
	{

		{
		Rec d1,d2;
			{
				Rec d3;    
			}                      //d3 burada bitiði an yok edici methodu çaðýrýlýyor arka planda
		return 0;
  		}
  	}
}	
