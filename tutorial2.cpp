#include <iostream>
#include <vector>

using namespace std;

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;

using text_t = std::string; // alternate, better way of creating new type 

int main() {
    string name = "Bro";
    int x = 0;


    // using namespace first;

    // cout << x << endl;
    // cout << first::x << endl;
    // cout << second::x << endl;

    // pairlist_t pairlist;


    // text_t firstname = "bro";

    // int student = 2;

    // student++;

    int x = 3.14;

    cout << x;











    return 0;
}