//nhập ma trận từ input.txt sau đó sắp xếp theo thứ tự tăng dần tổng các phần tử trong hàng, xuất ra output.txt
//trong file input.txt có dạng: 2 dòng đầu là m vàn n là số hàng và số cột, các dòng tiếp theo là các phần tử của ma trận
//ví dụ:
// 4 5
// 3 6 8 0 -5
// 5 12 7 21 -45
// 2 6 19 3 4
// 1 6 -8 3 9
//kết quả:
// 4 5
// 5 12 7 21 -45
// 1 6 -8 3 9
// 3 6 8 0 -5
// 2 6 19 3 4
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    int m, n;
    input >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            input >> a[i][j];
    int sum[m];
    for (int i = 0; i < m; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < n; j++)
            sum[i] += a[i][j];
    }
    for (int i = 0; i < m - 1; i++)
        for (int j = i + 1; j < m; j++)
            if (sum[i] > sum[j])
            {
                int temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
                for (int k = 0; k < n; k++)
                {
                    temp = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = temp;
                }
            }
    output << m << " " << n << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            output << a[i][j] << " ";
        output << endl;
    }
    return 0;
}