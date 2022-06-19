#include <iostream>
#include <conio.h>
using namespace std;

struct Node 
{
   string data[10];
   Node *next;
};

Node *awal, *akhir;

void init()
{
   awal = NULL;
   akhir = NULL;
}

bool isEmpty(){
	if(awal == NULL) return true;
	else return false;
}

void tambahakhir(string data[])
{
	Node *baru, *bantu;
  	baru = new Node;
  	
	for (int i=0; i<1; i++) 
	{
		baru->data[i] = data[i];
	}
	baru->next = NULL;
	
	if(isEmpty() == true)
	{
		awal=baru;
	    awal->next=NULL;
	}
 	else
	{
  		akhir->next = baru;
 	}
 	akhir=baru;
  	akhir->next=NULL;
 	
 	getch();
}

void pertama()
{
	string data[13];
	cin.ignore();
  	cout <<"\n";
  	for (int i=0; i<1; i++) 
	{
  	cout <<"=================================" << endl;
  	cout <<" MASUKKAN DATA : ";  getline(cin, data[i]); 
	cout <<"=================================" << endl;                              
  	}
 	tambahakhir(data);
 	getch();
}

void kedua()
{
 	Node *bantu;
 	bantu=awal;
 	int nomor = 1;
 	if (isEmpty() == true)
	{
 		cout << "\n DATA MASIH KOSONG!!!" << endl;
 	}
 	else{
 		cout <<"\t [DATA YANG DIMASUKKAN] \n";
 		while(bantu != NULL) 
		{
			cout <<" NO. : " << nomor <<endl;
 			for (int i=0; i<1; i++) 
			{
 			cout <<"===================================" <<endl;
 		    cout <<" DATA : " << bantu->data[i];
 		    cout <<"\n===================================" <<endl;
 			}
 			bantu=bantu->next;nomor++;
 		}
 	}
 	getch();
}

void ketiga() 
{
	Node *bantu = awal;
  	int hitung = 0;
  	string cari;
  	string data[10];
  	int posisi;
  	bool ketemu = false; 
   if(isEmpty() == true)
   {
    	cout <<" DATA MASIH KOSONG!!!" << endl;
   }
   if(isEmpty() == false) 
   {
   	    cin.ignore();
   		cout <<"\n";
   		cout <<" DATA YANG DICARI : "; getline(cin, cari);
   			
   	  	hitung++;
   	  	for (int i=0; i<1; i++)
   	  	{
   	  		bantu->data[i];
   	  		if (cari == bantu->data[i]) 
			{   
	  			ketemu = true;
			} 
		}
		if (ketemu) 
		{
			cout <<"\n";
			cout <<"==========================="        << endl;   
      		cout <<"    DATA YANG DITEMUKAN    "        << endl;
      		cout <<"==========================="        << endl;
      		cout <<" DATA   : "<<cari;
      		cout <<"\n\n";
	  		cout <<" DATA "<<cari<<" BERADA PADA URUTAN DATA KE-" << hitung << endl;
	  		bantu=bantu->next;
		}
		if (ketemu==false)
		{
			cout<<"\n DATA YANG DICARI TIDAK DITEMUKAN!!!";
			getch();
			cout <<"\n\n";
			cout <<" MASUKKAN DATA " <<cari<< " KE DAFTAR!!! \n";
			for(int i=0; i<1; i++)
			{
				cout <<" DATA : "; getline(cin, data[i]);
			}
			tambahakhir(data);
			cout<<"\n DATA SUDAH DITAMBAHKAN KE DAFTAR.\n";	
		}
   	getch();
	}
}

int main()
{
	int pilih;
	do 
	{
	system("cls");
	    cout <<"========================================\n";
	    cout <<"[ NAMA   : INDA FITRIA MAHARISTY       ]";
	    cout <<"\n[ NIM    : 203010503017                ]";
	    cout <<"\n[ MATA KULIAH : STRUKTUR DATA          ]";
		cout <<"\n========================================\n";
      	cout <<"========================================" << endl;
      	cout <<"[          MENU UTAMA  PROGRAM         ]" << endl;
      	cout <<"========================================" << endl;
      	cout <<"| 1. TAMBAH DATA                       |" << endl;
      	cout <<"| 2. CETAK DATA                        |" << endl;
      	cout <<"| 3. CARI DATA                         |" << endl;
      	cout <<"| 4. KELUAR                            |" << endl;
      	cout <<"========================================" << endl;
      	cout <<"MASUKKAN MENU YANG DIPILIH : ";
      	cin >> pilih;
      	system("cls");
		switch (pilih) 
		{
   				case 1 : pertama(); 
            			 break;   
            			 
   				case 2 : kedua(); 
             			 break;
             			 
   				case 3 : ketiga(); 
            			 break;
   				         
   				case 4 : exit(0); 
            			 break;
   		}
   		system("pause");
	}
	while(pilih != 4);
    return 0;
}
