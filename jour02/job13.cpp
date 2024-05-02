#include <iostream>
#include <iomanip>

using namespace std;

int main( ){
    const int size = 10;

    cout << setw(4) << " ";

        for(int i = 1; i <= size; ++i){

            cout << setw(4) << i;
        }
    cout << endl;

        for(int row = 1; row <= size; ++row){

            cout << setw(4) << row;

            for(int col = 1; col <= size; ++col){
                
                cout << setw(4) << row * col;
            }

            cout << endl;
        }


    return 0;
}