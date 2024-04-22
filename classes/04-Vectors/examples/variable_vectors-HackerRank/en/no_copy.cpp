#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number_of_vectors;
    int number_of_querries;
    
    cin >> number_of_vectors >> number_of_querries;
    vector<vector<int>> vector_of_vectors(number_of_vectors);
    
    for (int i = 0; i < number_of_vectors; i++) {
        
        int new_vector_size;
        cin >> new_vector_size;
        
        for (int u = 0; u < new_vector_size; u++) {
            
            int new_value;
            cin >> new_value;
            
            vector_of_vectors.at(i).push_back(new_value);
        }
    }
    
    for (int i = 0; i < number_of_querries; i++) {
        int vector_index;
        int value_index;
        
        cin >> vector_index >> value_index;
        
        cout << vector_of_vectors.at(vector_index).at(value_index) << endl;
    }
    
    return 0;
}
