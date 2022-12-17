#include <iostream>
using namespace std;

int say1,sayi2,toplam;
string secim;

void sayial(){

    cout<<"Sayı1:"<<endl;
    cin>>say1;
    cout<<"sayi2:"<<endl;
    cin>>sayi2;
    
}






int main()

{
    while (true){  
        cout<<"1-toplama\n2-cikarma\n3-carpma\n4-bolme"<<endl;
        cin>>secim;
        if (secim!="1" and secim!="2" and secim!="3" and secim!="4"){
            cout<<"Adam gibi islem sec"<<endl;
        }
        else if (secim=="1"){
            sayial();
            cout<<"Sonuc:"<<say1+sayi2<<endl;
            break;
        }
        else if (secim=="2"){
            sayial();
            cout<<"Sonuc:"<<say1-sayi2<<endl;
            break;
        }
        else if (secim=="3"){
            sayial();
            cout<<"Sonuc:"<<say1*sayi2<<endl;
            break;
        }
        else if (secim=="4"){
            sayial();
            if (sayi2==0){
                cout<<"paydaya 0 girme oc"<<endl;
                continue;
            }
            cout<<"Sonuc:"<<say1/sayi2<<endl;
            break;
        }
    }
}
