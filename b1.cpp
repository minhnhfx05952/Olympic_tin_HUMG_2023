//nhập số nguyên dương và kiểm tra đó có phải số cân đối không
//số cân đối là số có số lượng chữ số là chắn và tổng 1 nửa chữ số đầu bằng tổng 1 nửa chữ số cuối. ví dụ 1423 là số cân đối vì 1+4=2+3
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int dem = 0;
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        dem++;
    }
    if (dem % 2 == 0)
    {
        int a = 0, b = 0;
        for (int i = 0; i < dem / 2; i++)
        {
            a += n % 10;
            n /= 10;
        }
        for (int i = 0; i < dem / 2; i++)
        {
            b += n % 10;
            n /= 10;
        }
        if (a == b)
            cout << "So can doi";
        else
            cout << "Khong phai so can doi";
    }
    else
        cout << "Khong phai so can doi";
    return 0;
}
