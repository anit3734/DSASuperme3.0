#include <iostream>
using namespace std;
int main() {

/*    // Squre pattern
    for(int row=0; row<4;row++){
        for(int col=0; col<4;col++){
            cout<<"* ";
        }
        cout<<endl;
    }*/

// Rectangle Pattern
/*
    for(int row=0; row<3;row++){
        for(int col=0; col<6;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
*/

// Hollow rectangle


    //hollow rectangle
/*
    int length;
    int width;
    cout << "Enter length" << endl;
    cin >> length;

    cout << "Enter width " << endl;
    cin >> width;

    //outer
    for (int row = 0; row < length; row = row + 1) {
        //inner
        for (int col = 0; col < width; col = col + 1) {
            //first and last row me all stars
            if (row == 0 || row == length - 1) {
                cout << "* ";
            } else {
                //middle rows
                if (col == 0 || col == width - 1) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

*/

// Half pyramid '

    int n;
    cout << "Enter the value of n ";
    cin >> n;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n - row; col++) {
            if (row == 0 || row == n - 1 || col == 0 || (row + col == n - 1)) {
                cout << "* ";
            } else {
                cout << "  ";
            }

        }
        cout << endl;
    }


}