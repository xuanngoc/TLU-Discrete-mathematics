#include <iostream>
#include <fstream>
using namespace std;

void inputData()
{
	ofstream file("data.txt");
	int mt[100][100];
	int n;
	cout<<"Nhap so dinh: ";

	cin >> n;
	file <<n << endl;
	int tmp;
	for(int i=0; i< n; i++)
	{
		for(int k=0; k< n; k++)
		{
			cout<<"Dinh "<< i+1<<" co noi den dinh "<<k+1<<" khong (0, 1) ?  ";
			cin >> tmp;
			mt[i][k] =  tmp;
			file << mt[i][k]<<" ";
		}
		file<<endl;
		cout<<endl;
	}
	file.close();
}

void outputData(int a[][100], int &n)
{
	ifstream file("data.txt");
	//int n;
	file >> n;
	int tmp;
	for(int i=0; i< n; i++)
	{
		for(int k=0; k< n; k++)
		{
			file >>a[i][k];
			cout<<a[i][k]<<" ";
		}
		cout<<endl;
	}
}
void SoBac(int a[][100], int n){
	int tmp;
	for(int i=0; i< n; i++){
		tmp =0;
		for(int k=0; k< n; k++){
			tmp+= a[i][k];
		}
		cout<<"Dinh "<<i+1<<" co so bac: "<<tmp<<endl;
	}
}
void BacCaoNhat(int a[][100], int n){
	int tmp;
	int max = 0;
	int Bmax =1;
	for(int i=0; i< n; i++){
		tmp =0;
		for(int k=0; k< n; k++){
			tmp+= a[i][k];
		}
		if(max < tmp){
			max = tmp;
			Bmax = i+1;
		}
	}
	cout<<"Dinh co bac cao nhat la: "<< Bmax<<endl;
}

bool LienThong(int a[][100], int n){
	bool lienthong = 0;
	int tmp[20];
	for(int i=0; i<n; i++){
		tmp[i] =0;
	}
	int count=0;
	tmp[count++] = 1;
	do
	{
		lienthong =1;
		for(int i=0; i< n; i++){
			if(tmp[i] == 1){
				for(int k=0; k< n; k++){
					if(tmp[k] == 0 && a[i][k] > 0){
						cout<<i+1<<" ";
						tmp[k] =1;
						lienthong =0;
						count++;
						if(count == n){
							return true;
						}
					}
				}		
			}
		}
	} while(lienthong == 0);
	cout<<endl;
	return false;
	
}
int main()
{
	int a[100][100];
	int n;
	
	//inputData();
	outputData(a, n);
	cout<<"\n\n";
	SoBac(a, n);
	cout<<"\n\n";

	BacCaoNhat(a, n);
	cout<<"\n\n";
	cout<<"\n\n"<<LienThong(a, n)<<endl;
	return 0;
}
