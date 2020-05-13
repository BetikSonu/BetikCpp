#include<iostream> // @BetikSonu
using namespace std;

class i_Dizi
{
	private:
		int *p;   //dizinin adresini tutucak pointer
		int say;  //sayý adedi
		int ts;   //max eleman sayýsý
	public:
		i_Dizi()
		{
			p = new int[10];
			ts = 10;
			say = 0;
		}
		i_Dizi(int boyut)
		{
			p = new int[boyut];
			ts = boyut;
			say = 0;
		}
		void ekle(int a)
		{
			if(ts==say)
				
		}
		void genislet(int boyut)
		{
			int *yenialan = new int[ts+boyut];
		}
	
};


int main()
{
	setlocale(LC_ALL,"Turkish");
	i_Dizi d(6);
	i_Dizi b;;
	
	
	
	return 0;
}
