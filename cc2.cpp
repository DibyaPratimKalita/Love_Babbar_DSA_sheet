#include <bits/stdc++.h>
using namespace std;

// Function to compute the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute the GCD of an array of numbers
int compute_gcd_of_array(const vector<int>& arr) {
    int result = arr[0];
    for (int num : arr) {
        result = gcd(result, num);
        if (result == 1) {
            break; // No need to continue if GCD is 1
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    vector<string> results;
    results.reserve(T);

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        if (N == 1) {
            results.push_back("YES");
            continue;
        }

        int gcd_all = compute_gcd_of_array(A);
        if (gcd_all == 1) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    for (const string& result : results) {
        cout << result << "\n";
    }

    return 0;
}
