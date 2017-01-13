#include <iostream>
#include <cstdlib> //system("CLS");
#include <math.h>
#include <iomanip>
using namespace std;
short Ucurent,Uconversie;
long double Temperatura(short UCurent,short UConversie,long double marime);
long double Densitatea(short UCurent,short UConversie,long double a);
long double Timp(short UCurent,short UConversie,long double a);

void Meniu()
{short select,c,dc;long double a;
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
cin.get();
    system("CLS");
    goto menu;


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
cin.get();
    system("CLS");
    goto menu;

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
cin.get();
    system("CLS");
    goto menu;

case 4:
    timp:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)Milisecunde"<<endl;
    cout<<"2)Secunde"<<endl;
    cout<<"3)Minute"<<endl;
    cout<<"4)Ore"<<endl;
    cout<<"5)Zile"<<endl;
    cout<<"6)Ani"<<endl;
    cout<<"Selectati unitatea curenta:";cin>>c;cout<<endl;
if(c==0)
    {system("CLS");
    goto menu;}
    if(c<0||c>6)
    {system("CLS");
        goto timp;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
    if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>6)
    {system("CLS");
        goto timp;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<Timp(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto timp;

case 5:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)Metri/secunda"<<endl;
    cout<<"2)Kilometri/secunda"<<endl;
    cout<<"3)Kilometri/ora"<<endl;
    cout<<"4)Mile/ora"<<endl;
    cout<<"5)Picioare/secunda"<<endl;
    cin.get();
    system("CLS");
    goto menu;
case 6:
    temperatura:
cout<<"0)Meniu anterior"<<endl;
cout<<"1)Grade Celsius"<<endl;
cout<<"2)Grade Farenheit"<<endl;
cout<<"3)Grade Kelvin"<<endl;
cout<<"Selectati unitatea curenta:";cin>>c;cout<<endl;
if(c==0)
    {system("CLS");
    goto menu;}
    if(c<0||c>3)
    {system("CLS");
        goto temperatura;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
    if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>3)
    {system("CLS");
        goto temperatura;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<Temperatura(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto temperatura;


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
cin.get();
    system("CLS");
    goto menu;

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
    cin.get();
    system("CLS");
    goto menu;
case 9:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)mmHG/Milimetri coloana de mercur"<<endl;
    cout<<"2)Pascali"<<endl;
    cout<<"3)Bari"<<endl;
    cout<<"4)Atmosfere"<<endl;

  cin.get();
    system("CLS");
    goto menu;
case 10:
    densitate:
    cout<<"0)Meniu Anterior"<<endl;
    cout<<"1)Gram/milimetru cub"<<endl;
    cout<<"2)Gram/centimetru cub"<<endl;
    cout<<"3)Gram/decimetru cub"<<endl;
    cout<<"4)Gram/metru cub"<<endl;
    cout<<"5)Kilogram/metru cub"<<endl;
    cout<<"Selectati unitatea curenta:";cin>>c;cout<<endl;
    if(c==0)
    {system("CLS");
    goto menu;}
    if(c<0||c>6)
    {system("CLS");
        goto densitate;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>6)
{system("CLS");
        goto densitate;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<Densitatea(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto densitate;

case 11:
cin.get();
    system("CLS");
    goto menu;



    }
}
long double Temperatura(short UCurent,short UConversie,long double marime)
{if(UCurent==1&&UConversie==2)
return marime*1.8+32;
else if(UCurent==1&&UConversie==3)
    return marime+273.15;
else if(UCurent==2&&UConversie==1)
    return (marime-32)/1.8;
else if(UCurent==2&&UConversie==3)
    return (marime-32)/1.8+273.15;
else if(UCurent==3&&UConversie==1)
    return marime-273.15;
else if(UCurent==3&&UConversie==2)
    return (marime-273.15)*1.8+32;

}
long double Densitatea(short UCurent,short UConversie,long double a)
{if(UCurent>0&&UCurent<5&&UConversie<5&&UConversie>0)
 return a*pow(10,3*(UCurent-UConversie));
 else if(UCurent==5&&UConversie<5&&UConversie>0)
    return a*pow(10,3*(UCurent-1-UConversie))*pow(10,3);
 else if(UCurent<5&&UCurent>0&&UConversie==5)
  return a*pow(10,3*(UCurent-UConversie+1))*pow(10,-3);

}
long double Timp(short UCurent,short UConversie,long double a)
{if(UCurent==1&&UConversie==2)
 return a/pow(10,3);
 if(UCurent==1&&UConversie<5&&UConversie>2)
    return a/pow(10,3)/pow(60,UConversie-2);
 if(UCurent==1&&UConversie==5)
    return a/pow(10,3)/pow(60,UConversie-2)/24;
 if(UCurent==1&&UConversie==6)
    return a/pow(10,3)/pow(60,UConversie-2)/24/365;
 if(UCurent==2&&UConversie==1)
    return a*pow(10,3);
 if(UCurent==2&&UConversie==3)
    return a/60;
 if(UCurent==2&&UConversie==4)
    return a/60/60;
 if(UCurent==2&&UConversie==5)
    return a/60/60/24;
 if(UCurent==2&&UConversie==6)
    return a/60/60/24/365;
 if(UCurent==3&&UConversie==1)
    return a*60*1000;
 if(UCurent==3&&UConversie==2)
    return a*60;
 if(UCurent==3&&UConversie==4)
    return a/60;
 if(UCurent==3&&UConversie==5)
    return a/60/24;
 if(UCurent==3&&UConversie==6)
    return a/60/24/365;
 if(UCurent==4&&UConversie==1)
    return a*1000*60*60;
 if(UCurent==4&&UConversie==2)
    return a*60*60;
 if(UCurent==4&&UConversie==3)
    return a*60;
 if(UCurent==4&&UConversie==5)
    return a/24;
 if(UCurent==4&&UConversie==6)
    return a/24/365;
 if(UCurent==5&&UConversie==1)
    return a*1000*60*60*24;
 if(UCurent==5&&UConversie==2)
    return a*60*60*24;
 if(UCurent==5&&UConversie==3)
    return a*60*24;
 if(UCurent==5&&UConversie==4)
    return a*24;
 if(UCurent==5&&UConversie==6)
    return a/365;
 if(UCurent==6&&UConversie==1)
    return a*1000*60*60*24*365;
 if(UCurent==6&&UConversie==2)
    return a*60*60*24*365;
 if(UCurent==6&&UConversie==3)
    return a*60*24*365;
 if(UCurent==6&&UConversie==4)
    return a*24*365;
 if(UCurent==6&&UConversie==5)
    return a*365;

}

int main()
{
Meniu();

    return 0;
}
