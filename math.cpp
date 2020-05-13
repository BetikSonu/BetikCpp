#include<iostream> // @BetikSonu
#include<cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	int x;
	cout<<"Sayý giriniz: ";
	cin>>x;
	cout<<"\nSayýnýz: "<<x<<endl;
	
	cout<<x<<"^2 ="<<pow(x,2)<<endl;
	
	return 0;
}
