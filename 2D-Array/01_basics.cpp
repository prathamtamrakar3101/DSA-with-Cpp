#include <iostream>
using namespace std;
int main()
{
    int student[3][3] = {
        {100, 100, 100},
        {85, 98, 65},
        {45, 76, 44}
    };
    cout << student[0][0] << " " << student[0][1] << " " << student[0][2] << endl; // 100 100 100
    cout << student[1][0] << " " << student[1][1] << " " << student[1][2] << endl; // 85 98 65
    cout << student[2][0] << " " << student[2][1] << " " << student[2][2] << endl; // 45 76 44

    // input
    int n, m;
    cout << "Enter the n of the 2D array" << endl;
    cin >> n;
    cout << "Enter the m of the 2D array" << endl;
    cin >> m;
    int arr[n][m];
    cout << "Enter the elements of the 2D array";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Elements of the 2D array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // 2D array in memory
    // A 2D array is represented as a contiguous of memory cells (lineraly)
    // row major 
    // column major

    // int student[3][3] = {
    //     {100, 100, 100},
    //     {85, 98, 65},
    //     {45, 76, 44}
    // };

    // row major 
    // 100 100 100 85 98 65 45 76 44

    // column major 
    // 100 85 45 100 98 76 100 65 44

    
    return 0;
}
