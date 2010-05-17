#include <iostream>
using namespace std;

#include <perftrack/PerformanceTracker.hpp>

int main()
{
    if(PerfTracker::libraryLoaded()) {
        cout << "Library loaded successfully" << endl;
    } else {
        cout << "This should never be printed" << endl;
    }

    return 0;
}

