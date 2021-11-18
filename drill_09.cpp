#include "ppp.h"
#include "std_lib_facilities.h"

int main()
try {
    double number{123456.89};

    cout << "The number in default: " << number << '\n'
        << "The number in fixed: " << fixed << number << '\n'
        << "The number in scientific: " << scientific << number << '\n'
        << "The number in default: " << defaultfloat << number << '\n';

    keep_window_open();
    return 0;
}
catch(exception &e) {
    cerr << "Exception: " << e.what() << endl;
    keep_window_open();
    return 1;
}
