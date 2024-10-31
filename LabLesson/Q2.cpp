#include <iostream>
using namespace std;

int IonConsecutive(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    int longestS = 1;

   
    for (int i = 0; i < n; i++) {
        int current = arr[i];
        int currentLength = 1;

        
        for (int j = 0; j < n; j++) {
            if (arr[j] == current + 1) { 
                current++;
                currentLength++;
                j = -1;
            }
        }

        
        if (currentLength > longestS) {
            longestS = currentLength;
        }
    }

    return longestS;
}

int main() {
    int arr[] = {1, 24, 5, 2, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = IonConsecutive(arr, n);
    cout << "The length of the longest consecutive sequence is: " << result << endl;
    return 0;
}
