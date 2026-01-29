#include <bits/stdc++.h>
using namespace std;

class Count {
    int value;
public:
    Count() {
        value = 5;
    }
    // Prefix ++
    void operator ++() {
        ++value;
        value += 200;
    }
    void operator --(){
      --value;
      value -= 200;
    }
    // Postfix ++
    void operator++(int) {
        value++;
        value += 200;
    }
    void operator--(int){
      value--;
      value -= 200;
    }
    void display() {
        cout << value << endl;
    }
};
int main() {
    Count c;
    c++;   // postfix
    c++;
    c--;
    c++;
    c--;
    --c;
    ++c;
    ++c;
    --c;
    c++;
    c--;
    c.display(); // 206
    return 0;
}
