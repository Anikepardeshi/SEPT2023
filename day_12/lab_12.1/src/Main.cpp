#include<iostream>
using namespace std;

class Matrix{
    int row;
    int col;
    int **arr;
    public :
    Matrix(){
        row=2;
        col=3;
        arr = new int*[row];
        for (int i = 0; i < row; i++) {
             arr[i] = new int[col];
        }
    }
    Matrix(int r,int c){
        row=r;
        col=c;
        arr=new int*[r];
        for(int i=0;i<r;i++){
            arr[i]=new int[c];
        }

    }

    Matrix(const Matrix &other){
        this->row=other.row;
        this->col=other.col;

        arr=new int*[row];
        for(int i=0;i<row;i++){
            arr[i]=new int[col];
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[i][j]=other.arr[i][j];
            }
        }
    }
    void acceptRecord( ){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>arr[i][j];
            }
        }
    }

    void printRecord( ){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    Matrix operator+( Matrix other ){
        // Matrix result;
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         result.arr[i][j]=this->arr[i][j]+ other.arr[i][j];
        //     }
        // }
        // return result;

        if (this->row != other.row || this->col != other.col) {
        // Handle dimension mismatch error or return an appropriate result
        // For simplicity, I'll assume dimensions always match in this example.
        // You can add error handling as needed.
        throw std::runtime_error("Matrix dimensions do not match");
    }

    Matrix result(this->row, this->col); // Create a result matrix with the same dimensions

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result.arr[i][j] = this->arr[i][j] + other.arr[i][j];
        }
    }

    return result;
    }


     Matrix& operator=(Matrix other){
        this->~Matrix();
        this->row = other.row;
        this->col = other.col;

        arr = new int*[row];
        for (int i = 0; i < row; i++) {
            arr[i] = new int[col];
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                arr[i][j] = other.arr[i][j];
            }
        }
        return (*this);
   }

    ~Matrix(void){
        // int *arr=NULL;
        // int **arr=NULL;
        if(arr!=nullptr){

            for( int index = 0; index < row; ++ index ){
                delete[] arr[ index ];
            }
            delete[ ] arr;
           // arr=nullptr;

        }

    }


    };
int main(){
    Matrix m1(2,3);
    m1.acceptRecord( );
    cout<<"Matrix1"<<endl;
    m1.printRecord();
    Matrix m2=m1;
    cout<<"Matrix2"<<endl;
    m2.printRecord();
    Matrix m3;
    m3= m1 + m2;
    cout<<"Matrix3"<<endl;
    m3.printRecord();
    return  0;
}
