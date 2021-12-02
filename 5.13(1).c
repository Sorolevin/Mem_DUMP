#include < iostream>
using std::cout;
using std:: endl;
 
#include 
using std::rand;
 
int main()
{

    srand( time( 0 ));
 
    cout << "Random number for 1 <= n <= 2 is " << rand() % 2 + 1 << endl;
    cout << "Random number for 1 <= n <= 100 is " << rand() % 100 + 1 << endl;
    cout << "Random number for 0 <= n <= 9 is " << rand() % 10 << endl;
    cout << "Random number for 1000 <= n <= 1112 is " << rand() % 113 + 1000 << endl;
    cout << "Random number for -1 <= n <= 1 is " << rand() % 3 - 1 << endl;
    cout << "Random number for -3 <= n <= 11 is " << rand() % 15 - 3 << endl;
 
    return 0;
}
