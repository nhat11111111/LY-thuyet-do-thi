#include <iostream>

using namespace std;

int main() {
  // Khai b�o mang
  int n;
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;
  int a[n];

  // Nhap mang
  cout << "Nhap mang: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Nhap x tu b�n ph�m v� in ra m�n h�nh phan tu thu i trong mang
  int x;
  cout << "Nhap x: ";
  cin >> x;
  cout << "Phan tu thu " << x << " trong mang l�: " << a[x] << endl;

  // In ra m�n h�nh vi tr� v� gi� tri cua phan tu lon nhat trong mang
  int max = a[0];
  int max_i = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
      max_i = i;
    }
  }
  cout << "Vi tri v� gia tri cua phan tu lon nhat trong mang la: " << max_i << ", " << max << endl;

  // In ra m�n h�nh v? tr� v� gi� tr? c?a ph?n t? b� nh?t trong m?ng
  int min = a[0];
  int min_i = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
      min_i = i;
    }
  }
  cout << "Vi tri v� gia tri cua phan tu nho nhat trong mang la: " << min_i << ", " << min << endl;

  // In ra m�n h�nh c�c s? l? trong m?ng
  cout << "Cac so le trong mang la: ";
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
      cout << a[i] << " ";
    }
  }
  cout << endl;

  // In ra m�n h�nh tong gi� tri  phan tu trong mang
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  cout << "Tong gia tri cac phan tu trong mang la: " << sum << endl;

  return 0;
}

