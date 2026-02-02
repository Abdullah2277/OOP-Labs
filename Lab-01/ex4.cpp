#include <iostream>
#include <string>
using namespace std;

void addMatrices(int matrix1[3][3], int matrix2[3][3], int output[3][3]){
    for (int x=0; x<3; x++){
        for (int y=0; y<3; y++){
            output[x][y] = matrix1[x][y] + matrix2[x][y];
        }
    }
}

void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int output[3][3]){
    for (int x=0; x<3; x++){
        for (int y=0; y<3; y++){
            output[x][y] = 0;
            for (int z=0; z<3; z++){
                output[x][y] += matrix1[x][z] * matrix2[z][y];
            }
        }
    }
}


void outputMatrix(int matrix[3][3]){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int matrix1[3][3], matrix2[3][3], additionResult[3][3], multiplicationResult[3][3];
    cout << "Enter matrix 1 values: " << endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter matrix 2 values: " << endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin >> matrix2[i][j];
        }
    }

    cout << "Matrix 1: " << endl;
    outputMatrix(matrix1);
    cout << "Matrix 2: " << endl;
    outputMatrix(matrix2);
    cout << "Result of the Matrices Addition: " << endl;
    addMatrices(matrix1, matrix2, additionResult);
    outputMatrix(additionResult);

    cout << "Result of the Matrices Multiplication: " << endl;
    multiplyMatrices(matrix1, matrix2, multiplicationResult);
    outputMatrix(multiplicationResult);

    return 0;
}