#include "ppp.h"
#include "std_lib_facilities.h"

int main()
try 
{
    int birth_year{1970};

    cout << "The year " << birth_year << " in decimal:\t" << birth_year << '\n'
        << "The year " << birth_year << " in hexadecimal:\t" << hex << showbase << birth_year << dec << '\n'
        << "The year " << birth_year << " in octal:\t" << oct << showbase << birth_year << dec << '\n';

    time_t t{time(nullptr)};
    struct tm buf;
    auto current_year = buf.tm_year + 1900;
    cout << "My age is " << current_year - birth_year << '\n';

    keep_window_open();
    return 0;
}
catch(exception &e) {
    cerr << "exception: " << e.what() << endl;
    keep_window_open();
    return 1;
}
catch(...) {
	
    cerr << "exception: \n";
    keep_window_open();
    return 2;
}
