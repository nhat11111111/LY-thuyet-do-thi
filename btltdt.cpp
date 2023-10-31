#include <iostream>

using namespace std;

int main() {
  // Khai báo ma tr?n vuông
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

  // Nhap x tu bàn phím và in ra màn hình phan tu lon nhat trên hàng x
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

  // Nhap y tu bàn phím và in ra màn hình phan tu nho nhat trên cot y
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

  // Nhap k tu bàn phím và in ra màn hình tong các phan tu trên hàng k
  int k;
  cout << "Nhap k: ";
  cin >> k;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[k][i];
  }
  cout << "Tong cac phan tu tren hang thu " << k << " la: " << sum << endl;

  // Nhap m tu bàn phím và in ra màn hình tong các phan tu trên cot m
  int m;
  cout << "Nhap m: ";
  cin >> m;
  sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i][m];
  }
  cout << "Tong cac phan tu tren cot thu " << m << " la: " << sum << endl;

  // In ra màn hình tong cua cac phan tu có giá tri chan trên ma tran
  sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] % 2 == 0) {
        sum += a[i][j];
      }
    }
  }
  cout << "Tong cac phan tu co gia tri chan tren ma tran la: " << sum << endl;

  // Kiem tra duong chéo có bang 0 hay không?
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

 // Kiem tra toàn bo các phan tu trên ma tran có nho hon hoac bang 1 hay
  // không? Neu có in ra 'YES', nguoc lai in 'NO'
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

  // Kiem tra xem có doi xung qua duong chéo chính không? Neu có
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

