#include <bits/stdc++.h>
#include <vector>

using namespace std;

void display(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main() {
    vector<int> vect1;
    int element;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> element;
        vect1.push_back(element);
    }
    display(vect1);
}