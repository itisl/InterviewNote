#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 15;
    cout<<(a>>1)<<endl;
    cout<<a<<endl;

    cout<<(1<<a)<<endl;

    return 0;
}

class Node{
    public:
    Node();
    private:
    int data;
    Node* next;
}
