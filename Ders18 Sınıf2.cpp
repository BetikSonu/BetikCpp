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
	Rec()          //Default Constructor  --  Parametresiz olur.-- Parametreli a�arsam derleyici parametresiz �retmez.Public de yarat�l�r.
	{
	cout<<"Sen bilmesende ben olu�turuluyorum."<<endl;
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
		cout<<"Did�rtgenin alan�: "<<palan<<endl;
	}
	//destructor  Y�k�c� Method
};
int main()
{
	setlocale(LC_ALL,"Turkish");
	{

		{
		Rec d1,d2;
			{
				Rec d3;    
			}                      //d3 burada biti�i an yok edici methodu �a��r�l�yor arka planda
		return 0;
  		}
  	}
}	
