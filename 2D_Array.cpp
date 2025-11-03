#include <iostream>
using namespace std;
int main(){
    int r1, c1;
    cout << "Enter number of rows and columns for the matrix_A: ";
    cin >> r1 >> c1;
    int matrix_A[r1][c1];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>matrix_A[i][j];
        }
    }

    int r2, c2;
    cout << "Enter number of rows and columns for the matrix_B: ";
    cin >> r2 >> c2;
    int matrix_B[r2][c2];
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>matrix_B[i][j];
        }
    }

    if(c1 != r2){
        cout << "Matrix multiplication not possible";
        return 0;
    }
    int result[r1][c2];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            result[i][j] = 0;
            for(int k=0; k<c1; k++){
                result[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }
    cout << "Resultant Matrix: " << endl;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;


}