#include <iostream>

using namespace std;

int main() {
  // Khai b�o ma tr?n vu�ng
  int n;
  cout << "Nhap kich thuoc ma tran: ";
  cin >> n;
  int a[n][n];

  // Nhap ma tran
  cout << "Nhap ma tran: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  // Nhap x tu b�n ph�m v� in ra m�n h�nh phan tu lon nhat tr�n h�ng x
  int x;
  cout << "Nhap x: ";
  cin >> x;
  int max = a[x][0];
  for (int i = 1; i < n; i++) {
    if (a[x][i] > max) {
      max = a[x][i];
    }
  }
  cout << "Phan tu lon nhat tren hang thu " << x << " la: " << max << endl;

  // Nhap y tu b�n ph�m v� in ra m�n h�nh phan tu nho nhat tr�n cot y
  int y;
  cout << "Nhap y: ";
  cin >> y;
  int min = a[0][y];
  for (int i = 1; i < n; i++) {
    if (a[i][y] < min) {
      min = a[i][y];
    }
  }
  cout << "Phan tu nho nhat tren cot thu " << y << " la: " << min << endl;

  // Nhap k tu b�n ph�m v� in ra m�n h�nh tong c�c phan tu tr�n h�ng k
  int k;
  cout << "Nhap k: ";
  cin >> k;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[k][i];
  }
  cout << "Tong cac phan tu tren hang thu " << k << " la: " << sum << endl;

  // Nhap m tu b�n ph�m v� in ra m�n h�nh tong c�c phan tu tr�n cot m
  int m;
  cout << "Nhap m: ";
  cin >> m;
  sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i][m];
  }
  cout << "Tong cac phan tu tren cot thu " << m << " la: " << sum << endl;

  // In ra m�n h�nh tong cua cac phan tu c� gi� tri chan tr�n ma tran
  sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] % 2 == 0) {
        sum += a[i][j];
      }
    }
  }
  cout << "Tong cac phan tu co gia tri chan tren ma tran la: " << sum << endl;

  // Kiem tra duong ch�o c� bang 0 hay kh�ng?
  bool check = true;
  for (int i = 0; i < n; i++) {
    if (a[i][i] != 0) {
      check = false;
      break;
    }
  }
  if (check) {
    cout << "Duong cheo bang 0" << endl;
  } else {
    cout << "Duong cheo khac 0" << endl;
  }

 // Kiem tra to�n bo c�c phan tu tr�n ma tran c� nho hon hoac bang 1 hay
  // kh�ng? Neu c� in ra 'YES', nguoc lai in 'NO'
  bool flag = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] > 1) {
        flag = false;
        break;
      }
    }
  }
  if (flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  // Kiem tra xem c� doi xung qua duong ch�o ch�nh kh�ng? Neu c�
  // in 'DOI XUNG', ngu?c lai in 'KHONG DOI XUNG'
  flag = true;
  for (int i = 0; i < n; i++) {
    if (a[i][i] != a[n - 1 - i][n - 1 - i]) {
      flag = false;
      break;
    }
  }
  if (flag) {
    cout << "DOI XUNG" << endl;
  } else {
    cout << "KHONG DOI XUNG" << endl;
  }

  return 0;
}

