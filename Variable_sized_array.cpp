#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // i number of arrays j number of queries
    int i,j;
    cin >> i >>j;
    //create a 2D array
    vector<vector<int>> arr(i);
    //for loop to resize the array to user input size
    for(int n =0 ; n<i; n++){
        int size;
        //get users array size
        cin>>size;
        arr[n].resize(size);
        //loop through add elements to the new array size
        for(int k = 0; k < size; k++){
            cin >> arr[n][k];
        }
    }
    //itterate throught the array user inputs and which index they are inputing
    for (int p = 0; p < j; p++) {
        int row, index;
        cin >> row >> index;
        int element = arr[row][index];
        //element at index the user inputed
        cout << element << endl;
    }
    
    

    return 0;
}
