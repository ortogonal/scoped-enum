#include <iostream>

#include "file.h"

using namespace std;

int main()
{
    play::File f1("/tmp/file1", play::File::Permission::Read);
    play::File f2("/tmp/file1", play::File::Permission::Read | play::File::Permission::Write);

    cout << f1.name() << "can read: " << f1.isReadable() << " can write: " << f1.isWriteable() << endl;
    cout << f2.name() << "can read: " << f2.isReadable() << " can write: " << f2.isWriteable() << endl;

    f1.setWriteable(true);
    f2.setWriteable(false);

    cout << f1.name() << "can read: " << f1.isReadable() << " can write: " << f1.isWriteable() << endl;
    cout << f2.name() << "can read: " << f2.isReadable() << " can write: " << f2.isWriteable() << endl;

    return 0;
}
