#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int A[5];
    // This warshall Algoritham code is not correct, so it need some correction.
    for (int k = 0; k < n; k++)
    {
        // cout << "matrix" << endl;
        for (int i = 0; i < n; i++)
        {
            // cout << "matrix" << endl;
            for (int j = 0; j < n; j++)
            {
                A[i, j] = min(A[i, j], A[i, k] + A[k, j]);
                cout << A[i, j];
            }
            cout << "____________\n";
        }
        cout << "____________\n";
    }

    return 0;
}