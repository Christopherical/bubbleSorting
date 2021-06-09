#include <iostream>
using namespace std;

int* bubbleTest(int thing[]){    
    return thing;
};

int main()
{
    int bubbles[5] = { 2,1,4,3,5 };
    cout << sizeof(bubbles) / sizeof(bubbles[0]);
    
    
    return 0;
}
