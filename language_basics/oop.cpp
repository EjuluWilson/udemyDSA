#include <iostream>

using namespace std;

class Rectangle{

    int width = 3;
    int height = 8;

    public:

    int getWidth(){
        return width;

    }
    int getHeight(){
        return height;
    }

};

int main(){
    Rectangle a;
    cout<<a.getHeight()<<endl;
    cout<<a.getHeight()<<endl;
}

