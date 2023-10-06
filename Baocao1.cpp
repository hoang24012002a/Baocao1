
#include <iostream>

using namespace std;

int main()
{
     cout<<"Nhap luong :";
    double salary;
   
    cin >> salary;
    if (salary < 5000) cout <<" Mien thue";
    else if (salary >= 5000 && salary < 50000) cout << "Tien thue = 10% luong";
    else if (salary >= 50000 && salary < 200000 ) cout << " TIen thue = 15% luong";
    else cout <<"Tien thue = 25% luong";
    return 0;
}
