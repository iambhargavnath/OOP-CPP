#include<iostream>
using namespace std;

class Matrix {
    private:
    int mat[3][3];

    public:
    Matrix() {
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                mat[i][j] = 0;
            }
        }
    }

    void inputMatrix() {
        cout<<"Enter elements of the matrix: "<<endl;
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                cin>>mat[i][j];
            }
        }
        cout<<endl;
    }

    void displayMatrix() const {
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                cout<<mat[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    friend Matrix addMatrix(const Matrix &m1, const Matrix &m2);
    friend Matrix multiMatrix(const Matrix &m1, const Matrix &m2);
};

Matrix addMatrix(const Matrix &m1, const Matrix &m2) {
    Matrix result;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            result.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
        }
    }
    return result;
}

Matrix multiMatrix(const Matrix &m1, const Matrix &m2) {
    Matrix result;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            result.mat[i][j] = 0;
            for (int k=0; k<3; k++) {
                result.mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
            }
        }
    }
    return result;
}


int main() {
    Matrix matrix1, matrix2, add, multi;
    cout<<"Enter first matrix"<<endl;
    matrix1.inputMatrix();
    matrix1.displayMatrix();
    cout<<"Enter second matrix"<<endl;
    matrix2.inputMatrix();
    matrix2.displayMatrix();
    cout<<"Addition of these two matrix will be"<<endl;
    add = addMatrix(matrix1, matrix2);
    add.displayMatrix();
    cout<<"Multiplication of these two matrix will be"<<endl;
    multi = multiMatrix(matrix1, matrix2);
    multi.displayMatrix();
}