#include<iostream> // @BetikSonu
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int *p = &a[1];
	
	cout<<"*p: "<<*p<<endl;
	cout<<"p[0]: "<<p[0]<<endl;
	
	for(int i=0;i<10;i++)
	{
		cout<<"p : "<<p+i<<endl;
		cout<<"*(p+"<<i<<") :"<<*(p+i)<<endl;
	}
	return 0;
}
