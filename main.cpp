#include <iostream>
using namespace std;
int main() {
 int n;
 int mass[100];
 cout << "ievadi cik skaitļus tev jāatceras " << endl;
 cin >> n;
 cout << "uzraksti skaitļus(pa vienu)" << endl;
 for (int i = 0 ; i<n ; i++) 
 {
  cin >> mass[i];
 }
 for (int i = 0; i<n; i++)
 {
  cout << mass[i] << " ";
 }
 return 0;
}
