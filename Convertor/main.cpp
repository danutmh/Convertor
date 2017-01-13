#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
using namespace std;
short Ucurent,Uconversie;
 double Temperatura(short UCurent,short UConversie, double marime);
 double Densitatea(short UCurent,short UConversie, double a);
 double Timp(short UCurent,short UConversie, double a);
 double Presiune(short UCurent,short UConversie, double a);
 double Lungime(short UCurent,short UConversie, double a);
 double Arie(short UCurent,short UConversie,double a);
 double Viteza(short UCurent,short UConversie, double a);
 double Masa(short UCurent,short UConversie, double a);
 double Volum(short UCurent,short UConversie,double a);



void Meniu()
{short select,c,dc; double a;
menu:
    select=0;
cout<<"1)Lungime"<<endl;
cout<<"2)Arie"<<endl;
cout<<"3)Volum"<<endl;
cout<<"4)Timp"<<endl;
cout<<"5)Viteza"<<endl;
cout<<"6)Temperatura"<<endl;
cout<<"7)Masa"<<endl;
cout<<"8)Presiune"<<endl;
cout<<"9)Densitate"<<endl;
cout<<"Selectati unitatea de conversie:";cin>>select;system("CLS");
    switch (select){

case 1:
    lungime:
cout<<"0)Meniu anterior"<<endl;
cout<<"1)Milimetri"<<endl;
cout<<"2)Centimetri"<<endl;
cout<<"3)Decimetri"<<endl;
cout<<"4)Metri"<<endl;
cout<<"5)Decametri"<<endl;
cout<<"6)Hectometri"<<endl;
cout<<"7)Kilometri"<<endl;
cout<<"8)Tol"<<endl;
cout<<"9)Picioare"<<endl;
cout<<"10)Yarzi"<<endl;
cout<<"11)Mile"<<endl;
cout<<"12)Mile Navale"<<endl;
cout<<"Selectati unitatea curenta:";cin>>c;cout<<endl;
    if(c==0)
    {system("CLS");
    goto menu;}
    if(c<0||c>12)
    {system("CLS");
        goto lungime;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>12)
{system("CLS");
        goto lungime;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<setprecision(20)<<fixed<<Lungime(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto lungime;


case 2:
    arie:
cout<<"0)Meniu anterior"<<endl;
cout<<"1)Milimetri patrati"<<endl;
cout<<"2)Centimetri patrati"<<endl;
cout<<"3)Decimetri patrati"<<endl;
cout<<"4)Metri patrati"<<endl;
cout<<"5)Ari"<<endl;
cout<<"6)Hectari"<<endl;
cout<<"7)Kilometri patrati"<<endl;
cout<<"8)Toli patrati"<<endl;
cout<<"9)Picioare patrate"<<endl;
cout<<"10)Yarzi patrati"<<endl;
cout<<"11)Mile patrate"<<endl;
cout<<"12)Acrii"<<endl;
cout<<"Selectati unitatea curenta:";cin>>c;cout<<endl;
    if(c==0)
    {system("CLS");
    goto menu;}
    if(c<0||c>12)
    {system("CLS");
        goto arie;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>12)
{system("CLS");
        goto arie;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<setprecision(20)<<fixed<<Arie(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto arie;


case 3:
    volum:
cout<<"0)Meniu anterior"<<endl;
cout<<"1)Milimetri cubi"<<endl;
cout<<"2)Centimetri cubi"<<endl;
cout<<"3)Decimetri cubi"<<endl;
cout<<"4)Metri cubi"<<endl;
cout<<"5)Decametri cubi"<<endl;
cout<<"6)Hectometri cubi"<<endl;
cout<<"7)Kilometri cubi"<<endl;
cout<<"8)Toli cubi"<<endl;
cout<<"9)Picioare cube"<<endl;
cout<<"10)Yarzi cubi"<<endl;
cout<<"11)Mile cube"<<endl;
cout<<"Selectati unitatea curenta:";cin>>c;cout<<endl;
    if(c==0)
    {system("CLS");
    goto menu;}
    if(c<0||c>11)
    {system("CLS");
        goto volum;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>11)
{system("CLS");
        goto volum;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<setprecision(20)<<fixed<<Volum(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto volum;

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
cout<<"Rezultatul este:"<<setprecision(20)<<fixed<<Timp(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto timp;

case 5:
    viteza:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)Metri/secunda"<<endl;
    cout<<"2)Kilometri/secunda"<<endl;
    cout<<"3)Kilometri/ora"<<endl;
    cout<<"4)Picioare/secunda"<<endl;
    cout<<"5)Mile/ora"<<endl;
    cout<<"Selectati unitatea curenta:";cin>>c;cout<<endl;
    if(c==0)
    {system("CLS");
    goto menu;}
    if(c<0||c>5)
    {system("CLS");
        goto viteza;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>5)
{system("CLS");
        goto viteza;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<setprecision(20)<<fixed<<Viteza(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto viteza;
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
cout<<"Rezultatul este:"<<setprecision(20)<<fixed<<Temperatura(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto temperatura;


case 7:
    masa:
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
cout<<"Selectati unitatea curenta:";cin>>c;cout<<endl;
if(c==0)
    {system("CLS");
    goto menu;}
    if(c<0||c>10)
    {system("CLS");
        goto masa;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
    if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>10)
    {system("CLS");
        goto masa;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<setprecision(20)<<fixed<<Masa(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto masa;

case 8:
    presiune:
    cout<<"0)Meniu anterior"<<endl;
    cout<<"1)Pascali"<<endl;
    cout<<"2)Bari"<<endl;
    cout<<"3)PSI"<<endl;
    cout<<"4)mmHG/Milimetri coloana de mercur"<<endl;
    cout<<"5)Atmosfere"<<endl;
    cout<<"Selectati unitatea curenta:";cin>>c;cout<<endl;
    if(c==0)
    {system("CLS");
    goto menu;}
    if(c<0||c>5)
    {system("CLS");
        goto presiune;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
    if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>5)
    {system("CLS");
        goto presiune;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<setprecision(20)<<fixed<<Presiune(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto presiune;


case 9:
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
    if(c<0||c>5)
    {system("CLS");
        goto densitate;}
cout<<"Selectati unitatea in care doriti sa transformati:";cin>>dc;cout<<endl;
if(dc==0)
    {system("CLS");
    goto menu;}
    if(dc<0||dc>5)
{system("CLS");
        goto densitate;}
cout<<"Cantitatea:";cin>>a;cout<<endl;
cout<<"Rezultatul este:"<<setprecision(20)<<fixed<<Densitatea(c,dc,a);cout<<endl;
cin.get();
cin.get();
system("CLS");
goto densitate;




    }
}
 double Temperatura(short UCurent,short UConversie, double marime)
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
 double Densitatea(short UCurent,short UConversie, double a)
{if(UCurent>0&&UCurent<5&&UConversie<5&&UConversie>0)
 return a*pow(10,3*(UCurent-UConversie));
 else if(UCurent==5&&UConversie<5&&UConversie>0)
    return a*pow(10,3*(UCurent-1-UConversie))*pow(10,3);
 else if(UCurent<5&&UCurent>0&&UConversie==5)
  return a*pow(10,3*(UCurent-UConversie+1))*pow(10,-3);

}
 double Timp(short UCurent,short UConversie, double a)
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
 double Presiune(short UCurent,short UConversie, double a)
{if(UCurent==1&&UConversie==2)
    return a/pow(10,5);
 if(UCurent==1&&UConversie==3)
    return a*1,45038/pow(10,4);
 if(UCurent==1&&UConversie==4)
    return a*750062/pow(10,8);
 if(UCurent==1&&UConversie==5)
    return a*986923*pow(10,11);
 if(UCurent==2&&UConversie==1)
    return a*pow(10,5);
 if(UCurent==2&&UConversie==3)
    return a*1450377/pow(10,5);
 if(UCurent==2&&UConversie==4)
    return a*750.062;
 if(UCurent==2&&UConversie==5)
    return a*0.98692;
 if(UCurent==3&&UConversie==2)
    return a*6894757/pow(10,8);
 if(UCurent==3&&UConversie==1)
    return a*6894.757;
 if(UCurent==3&&UConversie==4)
    return a*51.715217;
 if(UCurent==3&&UConversie==5)
    return a*68046/pow(10,6);
 if(UCurent==4&&UConversie==1)
    return a*133.322;
 if(UCurent==4&&UConversie==2)
    return a*133322/pow(10,8);
 if(UCurent==4&&UConversie==3)
    return a*193367/pow(10,7);
 if(UCurent==4&&UConversie==5)
    return a*131579/pow(10,8);
 if(UCurent==5&&UConversie==1)
    return a*101325;
 if(UCurent==5&&UConversie==2)
    return a*1.01325;
 if(UCurent==5&&UConversie==3)
    return a*14695949*pow(10,6);
 if(UCurent==5&&UConversie==4)
    return a*760;

}
double Lungime(short UCurent,short UConversie, double a)
{double b=0;
if(UCurent>0&&UCurent<8&&UConversie>0&&UConversie<8)
return a*pow(10,UCurent-UConversie);
if(UCurent>0&&UCurent<8&&UConversie>7&&UConversie<13)
{b=a*pow(10,UCurent-4);
if(UConversie==8)
    return b*393700787/pow(10,7);
if(UConversie==9)
    return b*32808399/pow(10,7);
if(UConversie==10)
    return b*10936133/pow(10,7);
if(UConversie==11)
    return b*621371192/pow(10,12);
if(UConversie==12)
    return b*539956803/pow(10,12);
}
if(UCurent>7&&UCurent<13&&UConversie>0&&UConversie<8)
{if(UCurent==8)
b=a*0.0254;
if(UCurent==9)
b=a*0.3048;
if(UCurent==10)
b=a*0.9144;
if(UCurent==11)
b=a*1609.344;
if(UCurent==12)
b=a*1852;
return b*pow(10,4-UConversie);

}
if(UCurent>7&&UCurent<13&&UConversie>7&&UConversie<13)
{if(UCurent==8)
b=a*0.0254;
if(UCurent==9)
b=a*0.3048;
if(UCurent==10)
b=a*0.9144;
if(UCurent==11)
b=a*1609.344;
if(UCurent==12)
b=a*1852;
if(UConversie==8)
    return b*393700787/pow(10,7);
if(UConversie==9)
    return b*32808399/pow(10,7);
if(UConversie==10)
    return b*10936133/pow(10,7);
if(UConversie==11)
    return b*621371192/pow(10,12);
if(UConversie==12)
    return b*539956803/pow(10,12);


}

}
double Arie(short UCurent,short UConversie,double a)
{long double b=0;
 if(UCurent>0&&UCurent<8&&UConversie>0&&UConversie<8)
 return a*pow(100,UCurent-UConversie);

 if(UCurent>0&&UCurent<8&&UConversie<13&&UConversie>7)
 {b=a*pow(pow(10,UCurent-4),2);
     if(UConversie==8)
    return b*pow(393700787/pow(10,7),2);
if(UConversie==9)
    return b*pow(32808399/pow(10,7),2);
if(UConversie==10)
    return b*pow(10936133/pow(10,7),2);
if(UConversie==11)
    return b*pow(621371192/pow(10,12),2);
if(UConversie==12)
    return b*pow(247105381/pow(10,12),2);
 }
if(UConversie>0&&UConversie<8&&UCurent<13&&UCurent>7)
{if(UCurent==8)
b=a*0.00064516;
if(UCurent==9)
b=a*0.09290304;
if(UCurent==10)
b=a*0.83612736;
if(UCurent==11)
b=a*2589988.11;
if(UCurent==12)
b=a*4046.85642;
return b*pow(100,4-UConversie);
}
if(UConversie>7&&UConversie<13&&UCurent<13&&UCurent>7)
if(UCurent==8)
b=a*0.00064516;
if(UCurent==9)
b=a*0.09290304;
if(UCurent==10)
b=a*0.83612736;
if(UCurent==11)
b=a*2589988.11;
if(UCurent==12)
b=a*4046.85642;
if(UConversie==8)
    return b*pow(393700787/pow(10,7),2);
if(UConversie==9)
    return b*pow(32808399/pow(10,7),2);
if(UConversie==10)
    return b*pow(10936133/pow(10,7),2);
if(UConversie==11)
    return b*pow(621371192/pow(10,12),2);
if(UConversie==12)
    return b*pow(247105381/pow(10,12),2);
}
double Viteza(short UCurent,short UConversie, double a)
{if(UCurent==1&&UConversie==2)
    return a/1000;
 if(UCurent==1&&UConversie==3)
    return a/1000*3600;
 if(UCurent==1&&UConversie==4)
    return a*3.2808399;
 if(UCurent==1&&UConversie==5)
    return a*2.23693629;
 if(UCurent==2&&UConversie==1)
    return a*1000;
 if(UCurent==2&&UConversie==3)
    return a*3600;
 if(UCurent==2&&UConversie==4)
    return a*3280.8399;
 if(UCurent==2&&UConversie==5)
    return a*2236.93629;
 if(UCurent==3&&UConversie==1)
    return a*0.277777778;
 if(UCurent==3&&UConversie==2)
    return a*277777778/pow(10,12);
 if(UCurent==3&&UConversie==4)
    return a*0.911344415;
 if(UCurent==3&&UConversie==5)
    return a*0.621371192;
 if(UCurent==4&&UConversie==1)
    return a*0.3048;
 if(UCurent==4&&UConversie==2)
    return a*0.0003048;
 if(UCurent==4&&UConversie==3)
    return a*1.09728;
 if(UCurent==4&&UConversie==5)
    return a*0.681818182;
 if(UCurent==5&&UConversie==1)
    return a*0.44704;
 if(UCurent==5&&UConversie==2)
    return a*0.00044704;
 if(UCurent==5&&UConversie==3)
    return a*1.609344;
 if(UCurent==5&&UConversie==4)
    return a*1.46666667;

}
double Masa(short UCurent,short UConversie, double a)
{double b=0;
 if(UCurent<8&&UConversie<8)
 return a*pow(10,UCurent-UConversie);
 if(UCurent<8&&UConversie==8)
 {b=a*pow(10,UCurent-4);
  return b/1000000;}
  if(UCurent<8&&UConversie==9)
 {b=a*pow(10,UCurent-4);
  return b*352739619/pow(10,10);}
  if(UCurent<8&&UConversie==10)
 {b=a*pow(10,UCurent-4);
  return b*220462262/pow(10,11);}
  if(UCurent==8&&UConversie<8)
  {b=a*1000000;}
   return b*pow(10,4-UConversie);
   if(UCurent==9&&UConversie<8)
  {b=a*28,3495231;
   return b*pow(10,4-UConversie);}
   if(UCurent==10&&UConversie<8)
  {b=a*453,59237;
   return b*pow(10,4-UConversie);}
   if(UCurent==8&&UConversie==9)
    return a*35273,9619;
   if(UCurent==8&&UConversie==10)
    return a*2204,62262;
   if(UCurent==9&&UConversie==8)
    return a*283495231/pow(10,11);
   if(UCurent==9&&UConversie==10)
    return a*0,0625;
   if(UCurent==10&&UConversie==8)
    return a*45359237/pow(10,11);
   if(UCurent==10&&UConversie==9)
    return a*16;
}
double Volum(short UCurent,short UConversie,double a)
{long double b=0;
 if(UCurent>0&&UCurent<8&&UConversie>0&&UConversie<8)
 return a*pow(1000,UCurent-UConversie);

 if(UCurent>0&&UCurent<8&&UConversie<12&&UConversie>7)
 {b=a*pow(pow(10,UCurent-4),3);
     if(UConversie==8)
    return b*61023.7441;
if(UConversie==9)
    return b*35.3146667;
if(UConversie==10)
    return b*1.30795062;
if(UConversie==11)
    return b*239912759/pow(10,18);

 }
if(UConversie>0&&UConversie<8&&UCurent<12&&UCurent>7)
{if(UCurent==8)
b=a*16387064/pow(10,12);
if(UCurent==9)
b=a*283168466/pow(10,10);
if(UCurent==10)
b=a*764554858/pow(10,9);
if(UCurent==11)
b=a*4.16818183*pow(10,9);
return b*pow(1000,4-UConversie);
}
if(UConversie>7&&UConversie<12&&UCurent<12&&UCurent>7)
if(UCurent==8)
b=a*16387064/pow(10,12);
if(UCurent==9)
b=a*283168466/pow(10,10);
if(UCurent==10)
b=a*764554858/pow(10,9);
if(UCurent==11)
b=a*4.16818183*pow(10,9);

if(UConversie==8)
    return b*61023.7441;
if(UConversie==9)
    return b*35.3146667;
if(UConversie==10)
    return b*1.30795062;
if(UConversie==11)
    return b*239912759/pow(10,18);

}





int main()
{
Meniu();

    return 0;
}
