#include<iostream>
#include<bitset>

// Work In Progress
using namespace std;

int main()
{
    int x = 0b10000011;
    int y = x >> 1;     
    std::cout<<"x = "<<x<<endl;
    std::cout<<"y = "<<(y)<<endl;
    std::cout<<"y = "<<(y>>1)<<endl;
    
    int z = -3;
    std::bitset<8> z1(z);
    std::cout<<"z= "<<z<<endl;
    std::cout<<"z1= "<<z1<<endl;
    return 0;
}
