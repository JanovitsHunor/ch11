#include "ppp.h"
#include "std_lib_facilities.h"

constexpr int setIndent{2};

struct Contact
{
    string last_name;
    string first_name;
    string phone_number;
    string email;
};

ostream& operator << (ostream &os, const Contact &c)
{
    os << setw(7) << "Name:" << setw(setIndent) << "" << c.first_name << " " << c.last_name << "\n"
        << setw(7) << "Phone:" << setw(setIndent) << "" << c.phone_number << "\n"
        << setw(7) << "Email:" << setw(setIndent) << "" << c.email << "\n\n";
    return os;
}

int main()
try {
    Contact c1 = {"Mint", "Mary", "1.555.555.1111", "mary.mint@ppp.com"};
    Contact c2 = {"Basil", "Billy", "1.555.555.2222", "billy.basil@ppp.com"};
    Contact c3 = {"Rosemary", "Raymond", "1.555.555.3333", "raymond.rosemary@ppp.com"};
    Contact c4 = {"Cilantro", "Christine", "1.555.555.4444", "christina.cilantro@ppp.com"};
    Contact c5 = {"Lavender", "Lawrence", "1.555.555.5555", "lawrence.lavender@ppp.com"};

    cout << c1 << c2 << c3 << c4 << c5;

    keep_window_open();
    return 0;
}
catch(exception &e) {
    cerr << "exception: " << e.what() << endl;
    keep_window_open();
    return 1;
}
catch(...) {
    cerr << "exception\n";
    keep_window_open();
    return 2;
}
