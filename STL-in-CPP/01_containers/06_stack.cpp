#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.emplace(30);

    cout << "Top: " << st.top() << '\n';

    while (!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << '\n';
}
