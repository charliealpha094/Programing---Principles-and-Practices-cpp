// Done by Carlos Amaral (2023/08/03)

#include "std_lib_facilities.h"

int square(int x) {
    return x * x;
}

int main()
{
    // In this case loop includes everything
    for(int i = 0; i < 100; i++) {
        cout << i << '\t' << square(i) << '\n';
    }
}
