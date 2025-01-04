#include <iostream>
using namespace std;

class Human
{
private:
    int height;
    int weight;
    int age;

public:
    int getAge() { return this->age; }
    int getHeight() { return this->height; }
    int getWeight() { return this->weight; }

    void setWeight(int weight)
    {
        this->weight = weight;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }

    void setColor(string color)
    {
        this->color = color;
    }
};

int main()
{

    Male object1;
    object1.setAge(20);
    object1.setHeight(120);
    object1.setWeight(70);
    object1.setColor("Black");

    cout << object1.getAge() << endl;
    cout << object1.getWeight() << endl;
    cout << object1.getHeight() << endl;

    cout << object1.color << endl;
    object1.sleep();

    return 0;
}