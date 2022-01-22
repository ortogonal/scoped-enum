#include <iostream>

#include "file.h"

using namespace std;

int main()
{
    play::File f1("/tmp/file1", play::File::Permission::Read);
    play::File f2("/tmp/file1", play::File::Permission::Read | play::File::Permission::Write);

    return 0;
}
