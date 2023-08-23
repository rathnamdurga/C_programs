#include <iostream>
#include <queue> 
using namespace std;

int count = 0;

int divisor(int n) {
    priority_queue<int> pq;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            pq.push(i);
        }
    }
    if (!pq.empty()) {
        int q = pq.top();
        int t = n - q;
        pq.pop();
        count++;
        divisor(t);
        if(t==1){
            count=count+1;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = divisor(n);
    cout << "Count: " << result << endl;
    return 0;
}
