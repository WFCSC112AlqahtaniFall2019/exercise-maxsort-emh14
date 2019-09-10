#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v{6,1,3,2,1};  // vector to be sorted
    // initialize v


    // print the unsorted v
    cout << "Unsorted: ";
    print(v);/* your code here */


    // sort v
    maxSort(v);/* your code here */


    // print the sorted v
    cout << "Sorted: ";
    print(v);/* your code here */

    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){
        /*complete the code*/
        int current_max = 0;

        for(int j=0;j<=i;j++){
            if (list.at(j) > list.at(current_max)){
                current_max = j;
            }/*complete the code*/
        }
        swap (list.at(current_max), list.at(i));
        /*complete the code*/
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
