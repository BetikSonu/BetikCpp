#include<iostream> // @BetikSonu
#include<fstream>
#include<iomanip>
using namespace std;


class Ogrenci
{
public:
    string ad;
    string soyad;
    string numara;
    int Sınıf;

    void BilgileriGir();
    void BilgiYazdir();
};
void Ogrenci::BilgileriGir()
{
    cout<<setw(20)<<"Ad: ";
    cin>>ad;
    cout<<setw(20)<<"\nSoyad: ";
    cin>>soyad;
    cout<<setw(20)<<"\nNumara: ";
    cin>>numara;
    cout<<setw(20)<<"\nSınıf: ";
    cin>>Sınıf;
}
void Ogrenci::BilgiYazdir()
{
    cout<<setw(20)<<"Ad: "<<ad;
    
    cout<<setw(20)<<"Soyad: "<<soyad;
    
    cout<<setw(20)<<"Numara: "<<numara;
    
    cout<<setw(20)<<"Sınıf: "<<Sınıf;
    
}
class Okul
{
    public:
    Ogrenci Ogrenciler[100];
    fstream dosya3;
    int ogrenciSayisi;

};

int main()
{
    //ofstream Bir dosyaya yazı yazmak için kullanılıyor.
    //ifstream Dosyadan veri okuması yapıyor.
    //fstream İkisinin yaptığı işi aynı anda yapıyor.

    fstream dosya;
    dosya.open("Video.txt",ios::out|ios::in|ios::app); //Bişiler yazmak istediğim için out.Eğer dosyam yoksa ios::app (app) üzerine ekleme yapıyor.
    char text[100];
    dosya>>text;  //Dosyadan okuma yaptı.
    cout<<text;   //Ekrana bastırdım okumayı.
    dosya<<"\nHello Yüksel";
    //ios::app demezsem ilk başa ekliyor.
    dosya.close();
    fstream dosya2;
    dosya2.setf(ios::left); //Sola yatık olmasını söykledim.
    dosya2.open("Video2.txt",ios::out|ios::in|ios::app);
    dosya2<<setw(20)<<"Aaa"<<setw(20)<<"Bbb"<<setw(20)<<"Ccc"<<endl;
    dosya2<<setw(20)<<"43243223"<<setw(20)<<"432432432"<<setw(20)<<"432432432c"<<endl;
    dosya2.close();

    
    return 0;
}
