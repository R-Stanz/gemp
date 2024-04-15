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
        
        vector<int> new_vector = vector_of_vectors.at(i);
        for (int u = 0; u < new_vector_size; u++) {
            
            int new_value;
            cin >> new_value;
            
            new_vector.push_back(new_value);
            
            vector_of_vectors.at(i) = new_vector;
        }
    }
    
    for (int i = 0; i < number_of_querries; i++) {
        int vector_index;
        int value_index;
        
        cin >> vector_index >> value_index;
        
        vector<int> selected_vector = vector_of_vectors.at(vector_index);
        
        cout << selected_vector.at(value_index) << endl;
    }
    
    return 0;
}
