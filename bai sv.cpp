#include<iostream>
#include<limits>
#define max 100
using namespace std;
void nhap(int a[], int& n){
	cout <<" nhap n:";
	cin >> n;
	for (int i= 0; i < n; i++){
		cout <<"nhap ptu thu"<< i+1<<" :";
		cin>> a[i];
	}
}
void xuat(int a[], int n){
	for  (int i = 0; i<n; i++){
		cout<< a[i] << "\t";
	}
	cout <<" \n";
}
void bai1(int a[], int n){
	cout<<" danh sach cac so chan: ";
	for (int i = 0; i < n; i++){
		if (a[i] % 2 ==0){
			cout << a[i] << "\t";
		}
	}
	cout << " \n";
	cout << " danh sach cac so le: ";
	for (int i =0; i < n; i++){
		if (a[i] % 2 != 0){
			cout << a[i] << "\t";
		}
	}
	cout <<"\n";
}
bool checkNto(int N) {
	if (N <2) return false;
	for (int i = 2; i < N; i++){
		if(N % i ==0){
			return false;
		}
	}
	return true;
}
void bai2(int a[], int n){
	int dem = 0;
	for (int i = 0; i < n;i++){
		if (checkNto(a[i])){
			dem++;cout << a[i] <<"\t";
		}
	}
	if (dem > 0){
		cout << "khong co so nt trong danh sanh\n";
	
	}
}
void bai3(int a[], int n){
	int dem = 0;
	for (int i= 0; i < n; i++){
	   if (a[i] % 5 == 0){
	   	cout << a[i] << "\t";
	   	dem++;
	   }	
	}
	cout <<"\nco"<< dem << " chia het cho 5 \n";
}
int bai4(int a[], int n){
	int tong = 0;
	for (int i = 0; i < n; i++){
		if(a[i] % 4 ==0){
			if (a[i]%10==6){
				tong += a[i];
			}
		}
	}
	return tong;
}
int bai5(int n){
	int giaithua = 1;
	for (int i =1; i<= n;i++){
		giaithua*=i;
	}
	return giaithua;
}
int main(){
	int a[max], n, lc;
	while (1){
		cout <<"================================================MENU===================================\n";
		cout<<"1. nhap danh sach so\n";
		cout<<"2. hien thi danh sach\n";
		cout<<"3. in ra cac so chan, le\n";
		cout<<"4. in ra cac so nguyen to\n";
		cout<<"5. tinh tong cac so chia het cho 4 va tan cung la 6\n";
		cout<<"6. dem cac so chia het cho va in ra\n";
		cout<<"7. Tinh n giai thua\n";
		cout<<"0. thoat\n";
		cout<<"========================================================================================\n";
		cout<<"moi ban nhap lua chon: ";
		cin >> lc;
		if (lc ==1){
			nhap(a, n);
		}
		else if (lc == 2){
			xuat(a, n);
		}
		else if (lc ==3){
			bai1(a, n);
		}
		else if (lc ==4){
			bai2(a, n);
		}
		else if (lc ==5){
			bai3(a, n);
		}
		else if (lc ==6){
		cout <<	bai4(a, n);
		}
		else if (lc ==7){
		cout <<	bai5(n) <<"\n";
		}
		else{
			break;
		}
	}
	return 0;
}

