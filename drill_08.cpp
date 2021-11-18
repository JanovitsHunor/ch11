#include "ppp.h"
#include "std_lib_facilities.h"

int main()
try {
    int a{}, b{}, c{}, d{};
	
    cin >> a >> oct >> b >> hex >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
	
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
