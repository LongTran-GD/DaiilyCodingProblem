#include <iostream>
#include <vector>
using namespace std;

vector<int> product_array_without_division(vector<int> array) {
    int n = array.size();
    vector<int> left_products(n,1 );
    vector<int> right_products(n, 1);
    // creates a vector of n integers, all initialized to 1
    for (int i = 1; i < n; i++) {
        left_products[i] = left_products[i - 1] * array[i - 1];
    }

    for (int i = n - 2; i >= 0; i--) {
        right_products[i] = right_products[i + 1] * array[i + 1];
    }

    vector<int> output(n);
    for (int i = 0; i < n; i++) {
        output[i] = left_products[i] * right_products[i];
    }

    return output;
}


vector<int> product_array_with_division(vector<int> array) {
    int n = array.size();
    vector<int> output(n);
    int product = 1;

    for (int i = 0; i < n; i++) {
        output[i] = product;
        product *= array[i];
    }

    product = 1;
    for (int i = n - 1; i >= 0; i--) {
        output[i] *= product;
        product *= array[i];
    }

    return output;
}

int main() {
    vector<int> array = { 1, 2, 3, 4, 5 };
    vector<int> output_without_division = product_array_without_division(array);

    for (int i = 0; i < output_without_division.size(); i++) {
        cout << output_without_division[i] << " ";
    }
    cout << endl;

    vector<int> output_with_division = product_array_with_division(array);

    for (int i = 0; i < output_with_division.size(); i++) {
        cout << output_with_division[i] << " ";
    }
    cout << endl;

    return 0;
}