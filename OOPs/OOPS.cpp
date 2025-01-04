#include<iostream>
#include <string.h>
using namespace std;

class Hero{
    private:


    
    int health;

    public:
    char *name;
    char level;

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
        cout<<"Default Constructor called"<<endl;
        name = new char[100];
    }

    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health = health;
    }

    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }


    void print (){
        cout<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout<<"Health : "<<this->health<<endl;
        cout<<"Level : "<<this->level<<endl;
    }


    void setName(char name[]){
        strcpy(this->name,name);
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









    Hero h4(40,'E');
    h4.print();

    Hero h5(h4); //Copy constructor : h5 will have same values as h4
    h5.print();






    Hero h6;
    h6.sethealth(12);
    h6.setlevel('F');
    char c='Zafeer';
    // h6.setName(c);
    

    return 0;
}