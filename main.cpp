#include <iostream>

using namespace std;

int fibo(int *argv, int i, int n)
{
    if(i<n){
        argv[2] = argv[0]+argv[1];
        argv[0] = argv[1];
        argv[1] = argv[2];
        cout << argv[2] << endl;
        i++;
        fibo(argv, i, n);
    }
    return 0;
}

int main()
{
    int argvector[3] = {0, 1, 0};
    int i = 0;
    int n = 0;
    cin >> n;
    fibo(argvector, i, n);
    return 0;
}
