#include <iostream>
#include <string>
#include <cmath>
int main(){
    int a, b;
    double k, v;
    std::string name [5]={"mm", "sm", "dm", "m", "km"};
    std::cout<<"select translations direction:\n";
    for (int i=0; i<5; i++)
        std::cout<<i+1<<'.'<<name[i]<<'\t'<<i+1<<'.'<<name[i]<<std::endl;
    std::cin>>a>>b;
    std::cout<<"enter value: ";
    std::cin>>v;
    k=pow(10, a-b);
    if (a==5)
        k*=100;
    if (b==5)
        k/=100;
    std::cout<<v<<' '<<name[a-1]<<'='<<v*k<<' '<<name[b-1];
    return 0;
}
