#include <iostream>
#include <vector>

using namespace std;

void print(vector<double> ord) {
        for (double i : ord)
                cout << i << " ";
        cout << endl;
}

int main() {
        vector<double> ord{2.0, 3.0, 10.0, 20.0, 40.0, 60.0, 90.0, 100.0};
        int novo_val;
        cin >> novo_val;

        if (ord.at(0) > novo_val) {
                ord.insert(ord.begin(), novo_val);
                print(ord);
                return 0;
        }
        else if (ord.at(ord.size() - 1) < novo_val) {
                ord.insert(ord.end(), novo_val);
                print(ord);
                return 0;
        }
        
        int head = 0;
        int tail = ord.size() - 1;
        
        while (head + 1 < tail) {
                int mid = (head + tail) / 2;
                if (ord.at(mid) > novo_val)
                        tail = mid;
                else if (ord.at(mid) < novo_val)
                        head = mid;
                else {
                        ord.insert(ord.begin() + mid, novo_val);
                        print(ord);
                        return 0;
                }
        }
        ord.insert(ord.begin() + tail, novo_val);
        print(ord);
        
        return 0;
}


/*
[1, 2, 3, 10] + [7] = [1, 2, 3, 7, 10]

[2, 3, 10, 20, 40, 60, 90, 100] + [7]	    	

[2, 3, 10, 20, 40, 60, 90, 100] + [70]

[2, 3, 10, 20, 40, 60, 90, 100] + [101]
 *			    *
*/
