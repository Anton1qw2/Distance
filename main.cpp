#include <QCoreApplication>
     #include <set>
#include <iostream>
int Counts( int n){
    int res = 0;
    while (n){
        res++;
        n&= n-1;
    }
    return res;
}

int main(int argc, char *argv[])
{
    int n,  m ,k;
    std::cin >>n;
    std::cin >>m;
    n= n^m;
    std::cout << Counts(n);
    return 0;
}
