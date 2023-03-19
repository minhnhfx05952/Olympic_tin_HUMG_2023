//tính và tin giá trị biểu thức X=F(n)+G(n) với F(n)= n nếu n<5 và F(n)=F(n-1)+G(n-2) nếu n >=5
//G(n)= n-3 nếu n<8 và G(n)=F(n-1)+G(n-2) nếu n >=8
#include <iostream>
using namespace std;
int F(int n)
{
    if (n < 5)
        return n;
    else
        return F(n - 1) + G(n - 2);
}
int G(int n)
{
    if (n < 8)
        return n - 3;
    else
        return F(n - 1) + G(n - 2);
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "X = " << F(n) + G(n);
    return 0;
}
