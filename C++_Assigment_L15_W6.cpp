#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i][i];
        if (i != n - 1 - i) {
            cout << " " << arr[i][n - 1 - i];
        }        
        cout << endl;
    }
}

//                                   2 Solution

#include <iostream>
using namespace std;
int N = 3;

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void rotateMatrixAntiClockwise(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse the order of columns
    for (int i = 0; i < N; ++i) {
        for (int j = 0, k = N - 1; j < k; ++j, --k) {
            swap(matrix[j][i], matrix[k][i]);
        }
    }
}
int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);
    rotateMatrixAntiClockwise(matrix);
    cout << "Rotated Matrix (90 degrees anti-clockwise):" << endl;
    printMatrix(matrix);
    return 0;
}

//                                        3 Solution

#include <iostream>
using namespace std;
const int N = 3;

void printMatrixInWaveForm(int matrix[N][N]) {
    for (int col = 0; col < N; ++col) {
        if (col % 2 == 0) {
            // For even-indexed columns, print from top to bottom
            for (int row = N - 1; row >= 0; --row) {
                cout << matrix[row][col] << " ";
            }
        } else {
            // For odd-indexed columns, print from bottom to top
            for (int row = 0; row < N; ++row) {
                cout << matrix[row][col] << " ";
            }
        }
    }
    cout << endl;
}
int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Matrix in Wave Form:" << endl;
    printMatrixInWaveForm(matrix);
    return 0;
}

//                                     4 Solution

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateSpiralMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= n * n) {
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = num++;
        }
        ++top;
        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = num++;
        }
        --right;
        for (int i = right; i >= left; --i) {
            matrix[bottom][i] = num++;
        }
        --bottom;
        for (int i = bottom; i >= top; --i) {
            matrix[i][left] = num++;
        }
        ++left;
    }
    return matrix;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<vector<int>> result = generateSpiralMatrix(n);

    cout << "Spiral Matrix:" << endl;
    printMatrix(result);
    return 0;
}

//                                    5 Solution

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a[][2] = {{1,2},{3,4}};
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        cout << a[i][j];
    return 0;
}                                      // Output is 1234