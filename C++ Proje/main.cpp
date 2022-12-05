#include <iostream>
#include <fstream>
using namespace std;
#include "kitap.h"

 void Kitaplar::LiberAsista()
{

        cout<<"Hosgeldiniz ben Liber Asista :)\nsecmek istediginiz turu seciniz\n"<<endl;
        cout<<"1:Fantastik \n2:Turk edebiyati \n3:Dunyaklasigi \n4:Polisiye \n5:Siir\n";
        cin>>tur;

}

class Fantastik:public Kitaplar{
public:
Fantastik()
{
        int temasec;
        int sayfasec;
        int fiyatsec;

        hatali_secim2:;
        cout<<"Aradiginiz kitap temasi nedir?";
        cout<<"\n1:Korku\n2:Macera\n3:Sevgi\n4:Dram\n5:Kahramanlik\n";
        cin>>temasec;

        if(temasec==1)
            usertema="korku";
        if(temasec==2)
            usertema="macera";
        if(temasec==3)
            usertema="sevgi";
        if(temasec==4)
            usertema="dram";
        if(temasec==5)
            usertema="kahramanlik";

            if(temasec<1 || temasec>5)
            {
                cout<<"Yanlis Giris"<<endl;
                goto hatali_secim2;

            }

        hatali_secim3:;
        cout<<"Sayfa sayisi?:";
        cout<<"\n1:[0-50]\n2:[51-100]\n3:[101-200]\n4:[201-300]\n5:[301-500]\n6:[501+]\n";
        cin>>sayfasec;

        if(sayfasec==1)
            {usersayfamin=0; usersayfamax=50;}
        if(sayfasec==2)
           {usersayfamin=51; usersayfamax=100;}
        if(sayfasec==3)
             {usersayfamin=101; usersayfamax=200;}
        if(sayfasec==4)
            {usersayfamin=201; usersayfamax=300;}
        if(sayfasec==5)
             {usersayfamin=301; usersayfamax=500;}
        if(sayfasec==6)
            {usersayfamin=501; usersayfamax=2000;}


            if(sayfasec<1 || sayfasec>5)
            {
                cout<<"Yanlis Giris"<<endl;
                goto hatali_secim3;

            }

        hatali_secim4:;
        cout<<"Fiyat araligi?:";
        cout<<"\n1:[0-10]TL\n2:[11-20]TL\n3:[21-50]TL\n4:[51-75]TL\n5:[76-100]TL\n6:[101+]TL\n";
        cin>>fiyatsec;
        cout<<endl;

        if(fiyatsec==1)
        {userfiyatmin=0; userfiyatmax=10;}
        if(fiyatsec==2)
        {userfiyatmin=11; userfiyatmax=20;}
        if(fiyatsec==3)
        {userfiyatmin=21; userfiyatmax=50;}
        if(fiyatsec==4)
        {userfiyatmin=51; userfiyatmax=75;}
        if(fiyatsec==5)
        {userfiyatmin=76; userfiyatmax=100;}
        if(fiyatsec==6)
        {userfiyatmin=101; userfiyatmax=500;}

            if(fiyatsec<1 || fiyatsec>5)
            {
                cout<<"Yanlis Giris"<<endl;
                goto hatali_secim4;

            }

}
struct fantas
{
    int ks;
    int kf;
    string t;
    string a;
};

 void fonksiyon1()
 {
     struct fantas s1[100];

       ifstream myReadFile6("Fantastik.txt",ios::in);
       string a1,a2,a3,a4;
       int kayitsayisi=0;
       myReadFile6>>a1>>a2>>a3>>a4;

         while(!myReadFile6.eof())
         {
             myReadFile6>>s1[0].ks>>s1[0].kf>>s1[0].t>> s1[0].a;
             kayitsayisi++;
         }
        myReadFile6.close();
        cout<<"kayitsayisi:"<<kayitsayisi<<endl;

         ifstream myReadFile1("Fantastik.txt",ios::in);
         myReadFile1>>a1>>a2>>a3>>a4;


               for(int i=0;i<kayitsayisi;i++)
                {
                    myReadFile1>>s1[i].ks>>s1[i].kf>>s1[i].t>> s1[i].a;

                }





string dizi[50];
 int k=0;
for(int i=0;i<kayitsayisi;i++)
{
       if(s1[i].t==usertema)
       {
           if(usersayfamin<=s1[i].ks && s1[i].ks<=usersayfamax )
           {
               if(userfiyatmin<=s1[i].kf && s1[i].kf<=userfiyatmax)
               {
                   dizi[k]=s1[i].a;
                   k++;
               }
           }
       }
}

        if(k==0)
        {
            cout<<"!!Aradiginiz Kriterlere Uygun Kitap Bulunamamaktadir.Lutfen farkli secenekleri Deneyin..!!!\n";
        }
        else
        {

            cout<<"Size Uygun Kitaplar:\n"<<endl;

            for(int x=k-1;x>=0;x--)
            {
                cout<<"-"<<dizi[x]<<endl;
            }

        }
 }
};


class Turkedebiyati:public Kitaplar{
public:

    Turkedebiyati()
    {
        int temasec;
        int sayfasec;
        int fiyatsec;
        hatali_secim2:;
        cout<<"Aradiginiz kitap temasi nedir?";
        cout<<"\n1:Ic-catisma\n2:Ask\n3:Isyan\n4:Savas\n5:Esaret\n6:Vatan-Sevgisi\n7:Kultur-Catismasi \n8:Intikam\n";
        cin>>temasec;

        if(temasec==1)
            usertema="ic-catisma";
        if(temasec==2)
            usertema="ask";
        if(temasec==3)
            usertema="isyan";
        if(temasec==4)
            usertema="savas";
        if(temasec==5)
            usertema="esaret";
        if(temasec==6)
            usertema="vatan-sevgisi";
        if(temasec==7)
            usertema="kultur-catismasi";
        if(temasec==8)
            usertema="intikam";

 if(temasec<1 || temasec>5)
 {
        cout<<"Yanlis Giris"<<endl;
        goto hatali_secim2;

 }
        hatali_secim3:;
        cout<<"Sayfa sayisi?:";
        cout<<"\n1:[0-50]\n2:[51-100]\n3:[101-200]\n4:[201-300]\n5:[301-500]\n6:[501+]\n";
        cin>>sayfasec;

        if(sayfasec==1)
            {usersayfamin=0; usersayfamax=50;}
        if(sayfasec==2)
           {usersayfamin=51; usersayfamax=100;}
        if(sayfasec==3)
             {usersayfamin=101; usersayfamax=200;}
        if(sayfasec==4)
            {usersayfamin=201; usersayfamax=300;}
        if(sayfasec==5)
             {usersayfamin=301; usersayfamax=500;}
        if(sayfasec==6)
            {usersayfamin=501; usersayfamax=2000;}
     if(sayfasec<1 || sayfasec>5)
    {
                    cout<<"Yanlis Giris"<<endl;
                    goto hatali_secim3;

    }
        hatali_secim4:;
        cout<<"Fiyat araligi?:";
        cout<<"\n1:[0-10]TL\n2:[11-20]TL\n3:[21-50]TL\n4:[51-75]TL\n5:[76-100]TL\n6:[101+]TL\n";
        cin>>fiyatsec;

        if(fiyatsec==1)
        {userfiyatmin=0; userfiyatmax=10;}
        if(fiyatsec==2)
        {userfiyatmin=11; userfiyatmax=20;}
        if(fiyatsec==3)
        {userfiyatmin=21; userfiyatmax=50;}
        if(fiyatsec==4)
        {userfiyatmin=51; userfiyatmax=75;}
        if(fiyatsec==5)
        {userfiyatmin=76; userfiyatmax=100;}
        if(fiyatsec==6)
        {userfiyatmin=101; userfiyatmax=500;}

        if(fiyatsec<1 || fiyatsec>5)
        {
                cout<<"Yanlis Giris"<<endl;
                goto hatali_secim4;
        }
}
    struct turk
    {
    int ks;
    int kf;
    string t;
    string a;
    };

void fonksiyon2()
{

     struct turk s2[21];

    ifstream myReadFile7("turkedebiyati.txt");
    string a1,a2,a3,a4;
    int kayitsayisi=0;
    myReadFile7>>a1>>a2>>a3>>a4;

while(!myReadFile7.eof())
         {
             myReadFile7>>s2[0].ks>>s2[0].kf>>s2[0].t>> s2[0].a;
             kayitsayisi++;
         }
        myReadFile7.close();
        cout<<"kayitsayisi:"<<kayitsayisi<<endl;

         ifstream myReadFile2("turkedebiyati.txt",ios::in);
         myReadFile2>>a1>>a2>>a3>>a4;

               for(int i=0;i<kayitsayisi;i++)
                {
                    myReadFile2>>s2[i].ks>>s2[i].kf>>s2[i].t>> s2[i].a;

                }





string dizi[50];
 int k=0;
for(int i=0;i<kayitsayisi;i++)
{
       if(s2[i].t==usertema)
       {
           if(usersayfamin<=s2[i].ks && s2[i].ks<=usersayfamax )
           {
               if(userfiyatmin<=s2[i].kf && s2[i].kf<=userfiyatmax)
               {
                   dizi[k]=s2[i].a;
                   k++;
               }
           }
       }
}

        if(k==0)
        {
            cout<<"!!Aradiginiz Kriterlere Uygun Kitap Bulunamamaktadir.Lutfen farkli secenekleri Deneyin..!!!\n";
        }
        else
        {

            cout<<"Size Uygun Kitaplar:\n"<<endl;

            for(int x=k-1;x>=0;x--)
            {
                cout<<"-"<<dizi[x]<<endl;
            }

        }
 }
};
class Dunyaklasikleri:public Kitaplar{
public:
     Dunyaklasikleri()
     {
        int temasec;
        int sayfasec;
        int fiyatsec;
        hatali_secim2:;
        cout<<"Aradiginiz kitap temasi nedir?";
        cout<<"\n1:Ic-catisma\n2:Ask\n3:Sevgi\n4:Politik-taslama\n5:Elestiri\n6:Yabancilasma\n7:Adalet\n8:Yasama-amaci\n9:Ruhsal-caresizlik\n10:Kibir\n11:Yoksulluk\n12:Yalnizlik\n13:Esitlik\n";
        cin>>temasec;

        if(temasec==1)
            usertema="ic-catisma";
        if(temasec==2)
            usertema="ask";
        if(temasec==3)
            usertema="sevgi";
        if(temasec==4)
            usertema="politik-taslama";
        if(temasec==5)
            usertema="elestiri";
        if(temasec==6)
            usertema="yabancilasma";
        if(temasec==7)
            usertema="adalet";
        if(temasec==8)
            usertema="yasama-amaci";
        if(temasec==9)
            usertema="ruhsal-caresizlik";
        if(temasec==10)
            usertema="kibir";
        if(temasec==11)
            usertema="yoksulluk";
        if(temasec==12)
            usertema="yalnizlik";
        if(temasec==13)
            usertema="esitlik";
        if(temasec<1 || temasec>5)
        {
                cout<<"Yanlis Giris"<<endl;
                goto hatali_secim2;

        }

        hatali_secim3:;
        cout<<"Sayfa sayisi?:";
        cout<<"\n1:[0-50]\n2:[51-100]\n3:[101-200]\n4:[201-300]\n5:[301-500]\n6:[501+]\n";
        cin>>sayfasec;

        if(sayfasec==1)
            {usersayfamin=0; usersayfamax=50;}
        if(sayfasec==2)
           {usersayfamin=51; usersayfamax=100;}
        if(sayfasec==3)
             {usersayfamin=101; usersayfamax=200;}
        if(sayfasec==4)
            {usersayfamin=201; usersayfamax=300;}
        if(sayfasec==5)
             {usersayfamin=301; usersayfamax=500;}
        if(sayfasec==6)
            {usersayfamin=501; usersayfamax=2000;}

 if(sayfasec<1 || sayfasec>5)
{
        cout<<"Yanlis Giris"<<endl;
        goto hatali_secim3;

}
        hatali_secim4:;
        cout<<"Fiyat araligi?:";
        cout<<"\n1:[0-10]TL\n2:[11-20]TL\n3:[21-50]TL\n4:[51-75]TL\n5:[76-100]TL\n6:[101+]TL\n";
        cin>>fiyatsec;

        if(fiyatsec==1)
        {userfiyatmin=0; userfiyatmax=10;}
        if(fiyatsec==2)
        {userfiyatmin=11; userfiyatmax=20;}
        if(fiyatsec==3)
        {userfiyatmin=21; userfiyatmax=50;}
        if(fiyatsec==4)
        {userfiyatmin=51; userfiyatmax=75;}
        if(fiyatsec==5)
        {userfiyatmin=76; userfiyatmax=100;}
        if(fiyatsec==6)
        {userfiyatmin=101; userfiyatmax=500;}

        if(fiyatsec<1 || fiyatsec>5)
        {
                cout<<"Yanlis Giris"<<endl;
                goto hatali_secim4;

        }
}
    struct dunya
    {
    int ks;
    int kf;
    string t;
    string a;
    };

void fonksiyon3()
{
    struct dunya s3[21];

   ifstream myReadFile8("Dunyaklasigi.txt",ios::in);
   string a1,a2,a3,a4;

int kayitsayisi=0;
myReadFile8>>a1>>a2>>a3>>a4;
while(!myReadFile8.eof())
         {
             myReadFile8>>s3[0].ks>>s3[0].kf>>s3[0].t>> s3[0].a;
             kayitsayisi++;
         }
        myReadFile8.close();
        cout<<"kayitsayisi:"<<kayitsayisi<<endl;

         ifstream myReadFile3("Dunyaklasigi.txt",ios::in);
         myReadFile3>>a1>>a2>>a3>>a4;

               for(int i=0;i<kayitsayisi;i++)
                {
                    myReadFile3>>s3[i].ks>>s3[i].kf>>s3[i].t>> s3[i].a;

                }





string dizi[50];
 int k=0;
for(int i=0;i<kayitsayisi;i++)
{
       if(s3[i].t==usertema)
       {
           if(usersayfamin<=s3[i].ks && s3[i].ks<=usersayfamax )
           {
               if(userfiyatmin<=s3[i].kf && s3[i].kf<=userfiyatmax)
               {
                   dizi[k]=s3[i].a;
                   k++;
               }
           }
       }
}

        if(k==0)
        {
            cout<<"!!Aradiginiz Kriterlere Uygun Kitap Bulunamamaktadir.Lutfen farkli secenekleri Deneyin..!!!\n";
        }
        else
        {

            cout<<"Size Uygun Kitaplar:\n"<<endl;

            for(int x=k-1;x>=0;x--)
            {
                cout<<"-"<<dizi[x]<<endl;
            }

        }
 }
};

class Polisiye:public Kitaplar{
public:
    Polisiye()
    {
        int temasec;
        int sayfasec;
        int fiyatsec;
        hatali_secim2:;

        cout<<"Aradiginiz kitap temasi nedir?";
        cout<<"\n1:Gerilim\n2:Macera\n3:Gizem\n4:Korku\n";
        cin>>temasec;

        if(temasec==1)
            usertema="gerilim";
        if(temasec==2)
            usertema="macera";
        if(temasec==3)
            usertema="gizem";
        if(temasec==4)
            usertema="korku";

        if(temasec<1 || temasec>5)
        {
                cout<<"Yanlis Giris"<<endl;
                goto hatali_secim2;

        }

        hatali_secim3:;
        cout<<"Sayfa sayisi?:";
        cout<<"\n1:[0-50]\n2:[51-100]\n3:[101-200]\n4:[201-300]\n5:[301-500]\n6:[501+]\n";
        cin>>sayfasec;
        if(sayfasec==1)
            {usersayfamin=0; usersayfamax=50;}
        if(sayfasec==2)
           {usersayfamin=51; usersayfamax=100;}
        if(sayfasec==3)
             {usersayfamin=101; usersayfamax=200;}
        if(sayfasec==4)
            {usersayfamin=201; usersayfamax=300;}
        if(sayfasec==5)
             {usersayfamin=301; usersayfamax=500;}
        if(sayfasec==6)
            {usersayfamin=501; usersayfamax=2000;}

        if(sayfasec<1 || sayfasec>5)
        {
                cout<<"Yanlis Giris"<<endl;
                goto hatali_secim2;

        }
        hatali_secim4:;
        cout<<"Fiyat araligi?:";
        cout<<"\n1:[0-10]TL\n2:[11-20]TL\n3:[21-50]TL\n4:[51-75]TL\n5:[76-100]TL\n6:[101+]TL\n";
        cin>>fiyatsec;
        if(fiyatsec==1)
        {userfiyatmin=0; userfiyatmax=10;}
        if(fiyatsec==2)
        {userfiyatmin=11; userfiyatmax=20;}
        if(fiyatsec==3)
        {userfiyatmin=21; userfiyatmax=50;}
        if(fiyatsec==4)
        {userfiyatmin=51; userfiyatmax=75;}
        if(fiyatsec==5)
        {userfiyatmin=76; userfiyatmax=100;}
        if(fiyatsec==6)
        {userfiyatmin=101; userfiyatmax=500;}
         if(fiyatsec<1 || fiyatsec>5)
         {
            cout<<"Yanlis Giris"<<endl;
            goto hatali_secim4;

         }
}
struct polisi{
    int ks;
    int kf;
    string t;
    string a;
};

 void fonksiyon4()
 {
    struct polisi s4[21];

   ifstream myReadFile9("polisiye.txt",ios::in);
   string a1,a2,a3,a4;

   int kayitsayisi=0;
   myReadFile9>>a1>>a2>>a3>>a4;
   while(!myReadFile9.eof())
         {
             myReadFile9>>s4[0].ks>>s4[0].kf>>s4[0].t>> s4[0].a;
             kayitsayisi++;
         }
        myReadFile9.close();
        cout<<"kayitsayisi:"<<kayitsayisi<<endl;

         ifstream myReadFile4("polisiye.txt",ios::in);
         myReadFile4>>a1>>a2>>a3>>a4;

               for(int i=0;i<kayitsayisi;i++)
                {
                    myReadFile4>>s4[i].ks>>s4[i].kf>>s4[i].t>> s4[i].a;

                }





string dizi[50];
 int k=0;
for(int i=0;i<kayitsayisi;i++)
{
       if(s4[i].t==usertema)
       {
           if(usersayfamin<=s4[i].ks && s4[i].ks<=usersayfamax )
           {
               if(userfiyatmin<=s4[i].kf && s4[i].kf<=userfiyatmax)
               {
                   dizi[k]=s4[i].a;
                   k++;
               }
           }
       }
}

        if(k==0)
        {
            cout<<"!!Aradiginiz Kriterlere Uygun Kitap Bulunamamaktadir.Lutfen farkli secenekleri Deneyin..!!!\n";
        }
        else
        {

            cout<<"Size Uygun Kitaplar:\n"<<endl;

            for(int x=k-1;x>=0;x--)
            {
                cout<<"-"<<dizi[x]<<endl;
            }

        }
 }
};

class Siir:public Kitaplar{
public:
    Siir()
    {
        int temasec;
        int sayfasec;
        int fiyatsec;
        hatali_secim2:;
        cout<<"Aradiginiz kitap temasi nedir?";
        cout<<"\n1:Ask\n2:Vatan-sevgisi\n3:Yanlizlik\n4:Ayrilik\n5:Tasavvuf\n6:Kahramanlik\n7:Huzun\n8:Baskici-donem\n";
        cin>>temasec;

        if(temasec==1)
            usertema="ask";
        if(temasec==2)
            usertema="vatan-sevgisi";
        if(temasec==3)
            usertema="yanlizlik";
        if(temasec==4)
            usertema="ayrilik";
        if(temasec==5)
           usertema=="tasavvuf";
        if(temasec==6)
           usertema=="kahramanlik";
        if(temasec==7)
           usertema=="huzun";
        if(temasec==8)
            usertema=="baskici-donem";

        if(temasec<1 || temasec>5)
        {
            cout<<"Yanlis Giris"<<endl;
            goto hatali_secim2;

        }
        hatali_secim3:;
        cout<<"Sayfa sayisi?:";
        cout<<"\n1:[0-50]\n2:[51-100]\n3:[101-200]\n4:[201-300]\n5:[301-500]\n6:[501+]\n";
        cin>>sayfasec;
        if(sayfasec==1)
            {usersayfamin=0; usersayfamax=50;}
        if(sayfasec==2)
           {usersayfamin=51; usersayfamax=100;}
        if(sayfasec==3)
             {usersayfamin=101; usersayfamax=200;}
        if(sayfasec==4)
            {usersayfamin=201; usersayfamax=300;}
        if(sayfasec==5)
             {usersayfamin=301; usersayfamax=500;}
        if(sayfasec==6)
            {usersayfamin=501; usersayfamax=2000;}
        if(sayfasec<1 || sayfasec>5)
        {
            cout<<"Yanlis Giris"<<endl;
            goto hatali_secim3;

        }

        hatali_secim4:;
        cout<<"Fiyat araligi?:";
        cout<<"\n1:[0-10]TL\n2:[11-20]TL\n3:[21-50]TL\n4:[51-75]TL\n5:[76-100]TL\n6:[101+]TL\n";
        cin>>fiyatsec;
        if(fiyatsec==1)
        {userfiyatmin=0; userfiyatmax=10;}
        if(fiyatsec==2)
        {userfiyatmin=11; userfiyatmax=20;}
        if(fiyatsec==3)
        {userfiyatmin=21; userfiyatmax=50;}
        if(fiyatsec==4)
        {userfiyatmin=51; userfiyatmax=75;}
        if(fiyatsec==5)
        {userfiyatmin=76; userfiyatmax=100;}
        if(fiyatsec==6)
        {userfiyatmin=101; userfiyatmax=500;}
        if(fiyatsec<1 || fiyatsec>5)
        {
            cout<<"Yanlis Giris"<<endl;
            goto hatali_secim4;

        }


    }

    struct siir{
    int ks;
    int kf;
    string t;
    string a;
    };

    void fonksiyon5()
    {
       struct siir s5[19];

       ifstream myReadFile10("siir.txt",ios::in);
       string a1,a2,a3,a4;

        int kayitsayisi=0;
        myReadFile10>>a1>>a2>>a3>>a4;
while(!myReadFile10.eof())
         {
             myReadFile10>>s5[0].ks>>s5[0].kf>>s5[0].t>> s5[0].a;
             kayitsayisi++;
         }
        myReadFile10.close();
        cout<<"kayitsayisi:"<<kayitsayisi<<endl;

         ifstream myReadFile5("siir.txt",ios::in);
         myReadFile5>>a1>>a2>>a3>>a4;

               for(int i=0;i<kayitsayisi;i++)
                {
                    myReadFile5>>s5[i].ks>>s5[i].kf>>s5[i].t>> s5[i].a;

                }





string dizi[50];
 int k=0;
for(int i=0;i<kayitsayisi;i++)
{
       if(s5[i].t==usertema)
       {
           if(usersayfamin<=s5[i].ks && s5[i].ks<=usersayfamax )
           {
               if(userfiyatmin<=s5[i].kf && s5[i].kf<=userfiyatmax)
               {
                   dizi[k]=s5[i].a;
                   k++;
               }
           }
       }
}

        if(k==0)
        {
            cout<<"!!Aradiginiz Kriterlere Uygun Kitap Bulunamamaktadir.Lutfen farkli secenekleri Deneyin..!!!\n";
        }
        else
        {

            cout<<"Size Uygun Kitaplar:\n"<<endl;

            for(int x=k-1;x>=0;x--)
            {
                cout<<"-"<<dizi[x]<<endl;
            }

        }
 }
};

int main()
{
    hatali_secim1:;
    Kitaplar b1;
    b1.LiberAsista();

    if(b1.tur==1)
    {
        Fantastik f1;
        f1.fonksiyon1();
    }
    if(b1.tur==2)
    {
        Turkedebiyati t1;
        t1.fonksiyon2();
    }
    if(b1.tur==3)
    {
        Dunyaklasikleri d1;
        d1.fonksiyon3();
    }
    if(b1.tur==4)
    {
        Polisiye p1;
        p1.fonksiyon4();
    }
    if(b1.tur==5)
    {
        Siir k1 ;
        k1.fonksiyon5();
    }
    if( b1.tur<1 || b1.tur>5)
    {
        cout<<"Aralikta Bir Deger Secin!\n"<<endl;
        goto hatali_secim1;
    }
    return 0;
}
