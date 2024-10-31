#include <iostream>
using namespace std;

int IonConsecutive(int dizi[], int n) {
    if (n == 0) {
        return 0;
    }

    int longestS = 1;

   
    for (int i = 0; i < n; i++) {
        int current = dizi[i];
        int currentLength = 1;

        
        for (int j = 0; j < n; j++) {
            if (dizi[a] == current + 1) { 
                current++;
                currentLength++;
                a = -1;
            }
        }

        
        if (currentLength > longestS) {
            longestS = currentLength;
        }
    }

    return longestS;
}

int main() {
    int dizi[] = {1, 34, 5, 2, 12};
    int n = sizeof(dizi) / sizeof(dizi[0]);

    int result = IonConsecutive(arr, n);
    cout << "The length of the longest consecutive sequence is: " << result;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}
