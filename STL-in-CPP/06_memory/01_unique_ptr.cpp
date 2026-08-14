#include <memory>
#include <iostream>
using namespace std;

struct Student {
    string name;
    Student(string n) : name(std::move(n)) {}
};

int main() {
    auto p = make_unique<Student>("Vishal");

    cout << p->name << '\n';

    unique_ptr<Student> q = move(p);

    cout << q->name << '\n';
}
