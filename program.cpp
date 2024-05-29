// #include <iostream>
// #include <string>

// // Base class
// class Monster {
// protected:
//     std::string name;
//     int strength;
//     int health;
//     std::string movementStyle;
//     std::string attackBehavior;

// public:
//     Monster(std::string n, int str, int hp, std::string move, std::string attack)
//         : name(n), strength(str), health(hp), movementStyle(move), attackBehavior(attack) {}

//     virtual void display() {
//         std::cout << "Name: " << name << "\nStrength: " << strength 
//                   << "\nHealth: " << health << "\nMovement Style: " << movementStyle 
//                   << "\nAttack Behavior: " << attackBehavior << std::endl;
//     }

//     virtual void move() {
//         std::cout << name << " is " << movementStyle << std::endl;
//     }

//     virtual void attack() {
//         std::cout << name << " attacks by " << attackBehavior << std::endl;
//     }

//     virtual ~Monster() = default; // Virtual destructor for proper cleanup of derived classes
// };


// class Dragon : public Monster {
// public:
//     Dragon(std::string n)
//         : Monster(n, 100, 300, "flying", "breathing fire") {}

//     void display() override {
//         std::cout << "Dragon - ";
//         Monster::display();
//     }

//     void move() override {
//         std::cout << name << " soars through the sky.\n";
//     }

//     void attack() override {
//         std::cout << name << " breathes a scorching fire.\n";
//     }
// };


// class Zombie : public Monster {
// public:
//     Zombie(std::string n)
//         : Monster(n, 50, 100, "shuffling", "biting") {}

//     void display() override {
//         std::cout << "Zombie - ";
//         Monster::display();
//     }

//     void move() override {
//         std::cout << name << " shuffles forward.\n";
//     }

//     void attack() override {
//         std::cout << name << " lunges to bite.\n";
//     }
// };


// class Goblin : public Monster {
// public:
//     Goblin(std::string n)
//         : Monster(n, 30, 50, "sneaking", "stabbing") {}

//     void display() override {
//         std::cout << "Goblin - ";
//         Monster::display();
//     }

//     void move() override {
//         std::cout << name << " sneaks around.\n";
//     }

//     void attack() override {
//         std::cout << name << " stabs with a dagger.\n";
//     }
// };

// class Troll : public Monster {
// public:
//     Troll(std::string n)
//         : Monster(n, 80, 200, "lumbering", "smashing") {}

//     void display() override {
//         std::cout << "Troll - ";
//         Monster::display();
//     }

//     void move() override {
//         std::cout << name << " lumbers slowly.\n";
//     }

//     void attack() override {
//         std::cout << name << " smashes with a club.\n";
//     }
// };

// int main() {
//     Dragon draco("Draco");
//     Zombie zed("Zed");
//     Goblin gob("Gobby");
//     Troll trog("Trog");

//     draco.display();
//     draco.move();
//     draco.attack();

//     std::cout << std::endl;

//     zed.display();
//     zed.move();
//     zed.attack();

//     std::cout << std::endl;

//     gob.display();
//     gob.move();
//     gob.attack();

//     std::cout << std::endl;

//     trog.display();
//     trog.move();
//     trog.attack();

//     return 0;
// }

#include<iostream>
#include<string>

using namespace std;

class Monster{
    protected:
     string name;
     int health;
     string ability;
     string moveBehaviour;
    
    public:
      Monster(string n,int hel,string abi,string mB):name(n),health(hel),ability(abi),moveBehaviour(mB){};

      virtual void display(){
        cout<<"name:"<<name<<"health:"<<health<<endl;
      }
     
     virtual void move(){
        cout<<name<<" is moving "<<moveBehaviour<<endl;
     }

     virtual void strength(){
        cout<<name<<" is fighting with "<<ability<<endl;
     }



   virtual ~Monster()=default;

};


class Dragon:Monster{
    public:
      Dragon(string na):Monster(na,100,"fireBall","fast"){};

       void display(){
         Monster::display();
       }

       void move(){
         Monster::move();
       }

       void strength(){
        Monster::strength();
       }
        
         
};

class Zombi:Monster{
    public:
      Zombi(string na):Monster(na,100,"bitting","crawling"){};

       void display() override{
         Monster::display();
       }

       void move() override{
         Monster::move();
       }

       void strength() override{
        Monster::strength();
       }
        
         
};





int main(){
    Dragon dragon("dragon");
    dragon.display();
    dragon.move();
    dragon.strength();
    cout<<"...................."<<endl;
    Zombi zombi("zombi");
    zombi.display();
    zombi.move();
    zombi.strength();
    return 0;
}