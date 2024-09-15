#include<iostream>
#include<conio.h>
using namespace std;

// Hàm tính t?ng t? 1 d?n n
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

    cout << "\nT?ng các s? ch?n: " << tc;
    cout << "\nT?ng các s? l?: " << tl;
}

void inChanLe(int n) {
    cout << "\nCác s? ch?n: ";
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            cout << i << " ";
    }
    cout << "\nCác s? l?: ";
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            cout << i << " ";
    }
}

// Hàm ki?m tra s? nguyên t?
bool laSoNguyenTo(int x) {
    if(x < 2)
        return false;
    for(int i = 2; i <= x / 2; i++) {
        if(x % i == 0)
            return false;
    }
    return true;
}

// Hàm in ra các s? nguyên t? t? 1 d?n n
void inSoNguyenTo(int n) {
    cout << "\nCác s? nguyên t?: ";
    for(int i = 1; i <= n; i++) {
        if(laSoNguyenTo(i))
            cout << i << " ";
    }
}

// Hàm d?m và in các s? chia h?t cho 5 t? 1 d?n n
void demVaInSoChiaHetCho5(int n) {
    int dem = 0;
    cout << "\nCác s? chia h?t cho 5: ";
    for(int i = 1; i <= n; i++) {
        if(i % 5 == 0) {
            cout << i << " ";
            dem++;
        }
    }
    cout << "\nS? lu?ng các s? chia h?t cho 5: " << dem;
}

// Hàm tính t?ng các s? chia h?t cho 4 và có t?n cùng b?ng 6
void tongChiaHetCho4VaTanCungBang6(int n) {
    int sum = 0;
    cout << "\nCác s? chia h?t cho 4 và có t?n cùng b?ng 6: ";
    for(int i = 1; i <= n; i++) {
        if(i % 4 == 0 && i % 10 == 6) {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << "\nT?ng các s? chia h?t cho 4 và có t?n cùng b?ng 6: " << sum;
}

// Hàm tính giai th?a c?a n
int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for(int i = 1; i <= n; i++) {
        giaiThua = giaiThua * i;
    }
    return giaiThua;
}

// Hàm chính, hi?n th? menu d? ch?n ch?c nang
int main() {
    int n, choice;
    
    do {
        cout << "\n\nCh?n ch?c nang:";
        cout << "\n1. Tính t?ng t? 1 d?n n";
        cout << "\n2. Tính t?ng các s? ch?n và l?";
        cout << "\n3. In ra các s? ch?n và l? t? 1 d?n n";
        cout << "\n4. In ra các s? nguyên t? t? 1 d?n n";
        cout << "\n5. Ð?m và in các s? chia h?t cho 5";
        cout << "\n6. Tính t?ng các s? chia h?t cho 4 và có t?n cùng b?ng 6";
        cout << "\n7. Tính giai th?a c?a n";
        cout << "\n8. Thoát";
        cout << "\nL?a ch?n c?a b?n: ";
        cin >> choice;

        if(choice != 8) {
            cout << "\nNh?p n: ";
            cin >> n;
        }

        switch(choice) {
            case 1:
                cout << "\nT?ng t? 1 d?n " << n << " là: " << tong(n);
                break;
              case 2:
                tongchanle(n);
                break;
            case 3:
                inChanLe(n);
                break;
            case 4:
                inSoNguyenTo(n);
                break;
            case 5:
                demVaInSoChiaHetCho5(n);
                break;
            case 6:
                tongChiaHetCho4VaTanCungBang6(n);
                break;
            case 7:
                cout << "\nGiai th?a c?a " << n << " là: " << tinhGiaiThua(n);
                break;
            case 8:
                cout << "\nThoát chuong trình.";
                break;
            default:
                cout << "\nL?a ch?n không h?p l?!";

        }

    } while(choice != 8);


    getch();

    return 0;

}
