#include <iostream>
#include <cstdlib> //system("CLS");
#include <stdio.h>
using namespace std;
short x;
void Meniu()
{short select;long double a;
menu:
    select=0;
cout<<"1)Lungime"<<endl;
cout<<"2)Arie"<<endl;
cout<<"3)Volum"<<endl;
cout<<"4)Timp"<<endl;
cout<<"5)Viteza"<<endl;
cout<<"6)Temperatura"<<endl;
cout<<"7)Masa"<<endl;
cout<<"8)Energia"<<endl;
cout<<"9)Presiune"<<endl;
cout<<"10)Densitatea"<<endl;
cout<<"11)Consum Combustibil"<<endl;
cout<<"Selectati unitatea de conversie:";cin>>select;system("CLS");
    switch (select){

case 1:
cout<<"0)Meniu anterior"<<endl;
cout<<"1)Milimetri"<<endl;
cout<<"2)Centimetri"<<endl;
cout<<"3)Metri"<<endl;
cout<<"4)Kilometri"<<endl;
cout<<"5)Tol"<<endl;
cout<<"6)Piciare"<<endl;
cout<<"7)Yarzi"<<endl;
cout<<"8)Mile"<<endl;
cout<<"9)Mile Navale"<<endl;
cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}


case 2:
cout<<"0)Meniu anterior"<<endl;
cout<<"1)Milimetri patrati"<<endl;
cout<<"2)Centimetri patrati"<<endl;
cout<<"3)Decimetri patrati"<<endl;
cout<<"4)Metri patrati"<<endl;
cout<<"5)Decametri patrati"<<endl;
cout<<"6)Hectari"<<endl;
cout<<"7)Kilometri patrati"<<endl;
cout<<"8)Ari"<<endl;
cout<<"9)Acri"<<endl;
cout<<"10)Picioare patrate"<<endl;
cout<<"11)Yarzi patrati"<<endl;
cout<<"12)Mile patrate"<<endl;
cout<<"Alegeti unitatea curenta:"<<endl;
cout<<"Alegeti unitatea in care doriti sa efectuati cobversia:"<<endl;
cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}

case 3:
cout<<"0)Meniu anterior"<<endl;
cout<<"1)Milimetri patrati"<<endl;
cout<<"2)Centimetri patrati"<<endl;
cout<<"3)Decimetri patrati"<<endl;
cout<<"4)Metri patrati"<<endl;
cout<<"5)Decametri patrati"<<endl;
cout<<"6)Hectari"<<endl;
cout<<"7)Kilometri patrati"<<endl;
cout<<"8)Ari"<<endl;
cout<<"9)Acri"<<endl;
cout<<"10)Picioare patrate"<<endl;
cout<<"11)Yarzi patrati"<<endl;
cout<<"12)Mile patrate"<<endl;
cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}

case 4:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)Milisecunde"<<endl;
    cout<<"2)Secunde"<<endl;
    cout<<"3)Minute"<<endl;
    cout<<"4)Ore"<<endl;
    cout<<"5)Zile"<<endl;
    cout<<"6)Luni"<<endl;
    cout<<"7)Ani"<<endl;
cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}

case 5:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)Metri/secunda"<<endl;
    cout<<"2)Kilometri/secunda"<<endl;
    cout<<"3)Kilometri/ora"<<endl;
    cout<<"4)Mile/ora"<<endl;
    cout<<"5)Picioare/secunda"<<endl;
    cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}
case 6:
cout<<"0)Meniu anterior"<<endl;
cout<<"1)Grade Celsius"<<endl;
cout<<"2)Grade Farenheit"<<endl;
cout<<"3)Grade Kelvin"<<endl;
cout<<"4)Grade Rankine"<<endl;

cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}


case 7:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)Miligrame"<<endl;
    cout<<"2)Centigrame"<<endl;
    cout<<"3)Dicagrame"<<endl;
    cout<<"4)Grame"<<endl;
    cout<<"5)Decagrame"<<endl;
    cout<<"6)Hectograme"<<endl;
    cout<<"7)Kilograme"<<endl;
    cout<<"8)Tone"<<endl;
    cout<<"9)Uncie"<<endl;
    cout<<"10)Livre"<<endl;
cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}

case 8:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)Jouli"<<endl;
    cout<<"2)Kilojouli"<<endl;
    cout<<"3)Calorii"<<endl;
    cout<<"4)Kilocalorii"<<endl;
    cout<<"5)Watt"<<endl;
    cout<<"6)KiloWatt"<<endl;
    cout<<"7)KiloWatt/ora->Watt/ora"<<endl;
    cout<<"8)Watt/ora->KiloWatt/ora"<<endl;
    cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}
case 9:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)mmHG/Milimetri coloana de mercur"<<endl;
    cout<<"2)Pascali"<<endl;
    cout<<"3)Bari"<<endl;
    cout<<"4)Atmosfere"<<endl;

    cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}
case 10:
    cout<<"0)Meniu Anterior"<<endl;
    cout<<"1)Gram/milimetru cub"<<endl;
    cout<<"2)Gram/centimetru cub"<<endl;
    cout<<"3)Gram/metru cub"<<endl;
    cout<<"4)Kilogram/metru cub"<<endl;
cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}

case 11:
cin>>x;
if(x==0)
    {system("CLS");
    goto menu;}



    }
}

int main()
{
Meniu();

    return 0;
}
