//For Döngüsü @BetikSonu
#include<iostream>
using namespace std;

int main()
{ //for(Sayaç Tanýmla;Devam Koþulu;SayacýArýtr/Azalt)
	for(int i=0;i<5;i+=1)                                 //i deðiþkenini oluþturdum ve 10 dan küçük olacaðý tekrar sayýsý kadar her defasýnda 1 artýrdým.
  //for(int i=0;i<10;i++)                                 //Yukarýdakiyle ayný iþlemleri uygulamakta.
 	cout<<"Persona Non Grata Tekrar Sayisi: "<<i<<endl;   //10dan her küçük olduðunda Ekrana yazýmý bastýrdým.
	cout<<"Telegraf.";		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Toplam = 0;
for(int i=0;i<10;i+=1)
	{
	Toplam += i;                                          //i her 10dan küçük olduðu zaman Toplamýn üzerine eklenicek.
	if (i==5)
		break;
	
	cout<<"Toplam Yeni Degeri: "<<Toplam<<endl;
	}







return 0;		
}
