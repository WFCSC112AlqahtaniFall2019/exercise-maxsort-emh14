#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list, int& num);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v{6,1,3,2,1};  // vector to be sorted
    // initialize v


    // print the unsorted v
    cout << "Unsorted: ";
    print(v);/* your code here */


    // sort v
    maxSort(v, i);/* your code here */


    // print the sorted v
    cout << "Sorted: ";
    print(v);/* your code here */

    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list, int& j) {

    for (int i=0; i<j-1; i++)
        if (list.at(i) > list.at(i+1))
            swap(list.at(i), list.at(i+1));

    if (list.size() == 1){
        return;}
    else{
        return maxSort(list, j-1);
    }
}

// swap function
void swap(int& a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

// print function
void print(const vector<int>& list){
    for (int i = 0; i < list.size(); i++){
        cout << list.at(i) << " ";
    }
    cout << endl;
}
