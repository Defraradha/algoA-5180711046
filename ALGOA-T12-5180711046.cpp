#include<iostream>
#include<conio.h>

using namespace::std;

 main(){
int nilai['n'];
int temp;
int data;
int cari, urutan;
int ketemu=0;
int hapus;
int ubah;

cout<<"Banyak Data : ";
cin>>data;
cout<<endl;

for(int a=1; a<=data; a++)
    {
        cout<<"nilai["<<a<<"]: ";
        cin>>nilai[a];
    }


cout<<"\nData yang anda inputkan  "<<endl;
for(int a=1; a<=data; a++)
    {
       cout<<nilai[a]<<" ";
    }
cout<<"\nInputkan data yang ingin dicari : ";
cin>>cari;
cout<<endl;
for(int i=0; i<=9; i++){
    if(nilai[i] == cari){
        ketemu=1;
        urutan=i;
        break;
    }
}
if(ketemu==1){
    cout<<"Data Tersedia!"<<endl;
    cout<<"Data Terletak Di Urutan Ke - "<<urutan<<endl;
}
else{cout<<"Data Tidak Tersedia!";}
cout<<"\n";

for(int a=data-1; a>=1; a--)
   {
       for(int b=1; b<=a; b++)
   {
       if (nilai[b]>nilai[b+1])
   {temp=nilai[b+1];
    nilai[b+1]=nilai[b];
    nilai[b]=temp;}
   }
   }

cout<<"\n\nData setelah diurutkan (dari yang terkecil) :";
cout<<endl;
   for(int a=1; a<=data; a++)
   {
       cout<<nilai[a]<<" ";
   }
cout<<"\n\nData setelah diurutkan (dari yang terbesar) :";
cout<<endl;
    for (int a=data; a>=1; a--)
   {
       cout<<nilai[a]<<" ";
   }

cout << "\n\nMasukkan nilai data yang akan diubah = ";cin>>ubah;


	for (int g=0; g<data; g++)
	{
		if (nilai[g]==ubah)
		{
			cout<<"Masukka nilai baru = ";cin>>nilai[g];
		}
	}

cout<<"\n\nData setelah diubah";
	for (int h=1; h<=data; h++)
	{
		cout << "\nnilai[" << h << "]= " << nilai[h];
	}

cout<<"\n\nMasukkan nilai data yang akan dihapus = ";
cin>>hapus;

	for (int z=0; z<data; z++)
	{
		if (hapus == nilai[z])
		{

			for (int k=z; k<data; k++)
			{

				nilai[k]= nilai[k + 1] ;
			}

			data -= 1;
			break;
		}
	}

cout<<endl;
cout<<endl;
cout<<endl;
};
