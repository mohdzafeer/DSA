#include<iostream>
using namespace std;

class Hero{
    private:
    char name[100];


    
    int health;
    char level;

    public:

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    Hero(){
        cout<<"Constructor called"<<endl;
    }

    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health = health;
    }

    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }

};

int main()
{   
    // static allocation
    // created an object
    Hero h1(10);
    cout<<"Address of h1 : "<<&h1<<endl;
    // cout<<"size is : "<<sizeof(h1)<<endl;
    
    // h1.health =40;
    h1.sethealth(40);
    // h1.level = 'B';
    h1.setlevel('B');
    cout<<"health of h1 is : "<<h1.getHealth()<<endl;
    cout<<"level of h1 is : "<<h1.getLevel()<<endl; 


    Hero h3(100,'D');
    cout<<"health of h3 : "<<h3.getHealth()<<endl;
    cout<<"level of h3 : "<<h3.getLevel()<<endl;


    // dynamic allocation
    Hero *h2=new Hero;
    h2->sethealth(50);
    h2->setlevel('C');
    // cout<<"health of h2 is : "<<(*h2).getHealth()<<endl;
    cout<<"health of h2 is : "<<h2->getHealth()<<endl;
    // cout<<"Level of h2 is : "<<(*h2).getLevel()<<endl;
    cout<<"Level of h2 is : "<<h2->getLevel()<<endl;

    return 0;
}