#include<iostream>
#include<conio.h>
using namespace std;

// H�m t�nh t?ng t? 1 d?n n
int tong(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;    
}


void tongchanle(int n) {
    int tc = 0, tl = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            tc = tc + i;
        else
            tl = tl + i;
    }

    cout << "\nT?ng c�c s? ch?n: " << tc;
    cout << "\nT?ng c�c s? l?: " << tl;
}

void inChanLe(int n) {
    cout << "\nC�c s? ch?n: ";
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            cout << i << " ";
    }
    cout << "\nC�c s? l?: ";
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            cout << i << " ";
    }
}

// H�m ki?m tra s? nguy�n t?
bool laSoNguyenTo(int x) {
    if(x < 2)
        return false;
    for(int i = 2; i <= x / 2; i++) {
        if(x % i == 0)
            return false;
    }
    return true;
}

// H�m in ra c�c s? nguy�n t? t? 1 d?n n
void inSoNguyenTo(int n) {
    cout << "\nC�c s? nguy�n t?: ";
    for(int i = 1; i <= n; i++) {
        if(laSoNguyenTo(i))
            cout << i << " ";
    }
}

// H�m d?m v� in c�c s? chia h?t cho 5 t? 1 d?n n
void demVaInSoChiaHetCho5(int n) {
    int dem = 0;
    cout << "\nC�c s? chia h?t cho 5: ";
    for(int i = 1; i <= n; i++) {
        if(i % 5 == 0) {
            cout << i << " ";
            dem++;
        }
    }
    cout << "\nS? lu?ng c�c s? chia h?t cho 5: " << dem;
}

// H�m t�nh t?ng c�c s? chia h?t cho 4 v� c� t?n c�ng b?ng 6
void tongChiaHetCho4VaTanCungBang6(int n) {
    int sum = 0;
    cout << "\nC�c s? chia h?t cho 4 v� c� t?n c�ng b?ng 6: ";
    for(int i = 1; i <= n; i++) {
        if(i % 4 == 0 && i % 10 == 6) {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << "\nT?ng c�c s? chia h?t cho 4 v� c� t?n c�ng b?ng 6: " << sum;
}

// H�m t�nh giai th?a c?a n
int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for(int i = 1; i <= n; i++) {
        giaiThua = giaiThua * i;
    }
    return giaiThua;
}

// H�m ch�nh, hi?n th? menu d? ch?n ch?c nang
int main() {
    int n, choice;
    
    do {
        cout << "\n\nCh?n ch?c nang:";
        cout << "\n1. T�nh t?ng t? 1 d?n n";
        cout << "\n2. T�nh t?ng c�c s? ch?n v� l?";
        cout << "\n3. In ra c�c s? ch?n v� l? t? 1 d?n n";
        cout << "\n4. In ra c�c s? nguy�n t? t? 1 d?n n";
        cout << "\n5. �?m v� in c�c s? chia h?t cho 5";
        cout << "\n6. T�nh t?ng c�c s? chia h?t cho 4 v� c� t?n c�ng b?ng 6";
        cout << "\n7. T�nh giai th?a c?a n";
        cout << "\n8. Tho�t";
        cout << "\nL?a ch?n c?a b?n: ";
        cin >> choice;

        if(choice != 8) {
            cout << "\nNh?p n: ";
            cin >> n;
        }

        switch(choice) {
            case 1:
                cout << "\nT?ng t? 1 d?n " << n << " l�: " << tong(n);
                break;
              case 2:
����������������tongchanle(n);
����������������break;
������������case 3:
����������������inChanLe(n);
����������������break;
������������case 4:
����������������inSoNguyenTo(n);
����������������break;
������������case 5:
����������������demVaInSoChiaHetCho5(n);
����������������break;
������������case 6:
����������������tongChiaHetCho4VaTanCungBang6(n);
����������������break;
������������case 7:
����������������cout << "\nGiai th?a c?a " << n << " l�: " << tinhGiaiThua(n);
����������������break;
������������case 8:
����������������cout << "\nTho�t chuong tr�nh.";
����������������break;
������������default:
����������������cout << "\nL?a ch?n kh�ng h?p l?!";

��������}

����} while(choice != 8);


����getch();

����return 0;

}
