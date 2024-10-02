#include <iostream>
#include <string>

using namespace std;
class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        void set_name(string name_val)
        {
            name = name_val;
        }
        // * Overloaded constructors
        Player()
        {
            cout << "No args constructor called" << endl;
        }
        Player(string name_val)
        {
            name = name_val;
            cout << "Name: "<< name << " - String arg constructor called" << endl;
        }
        Player(string name_val, int health_val, int xp_val)
        {
            name = name_val;
            health = health_val;
            xp = xp_val;
            cout << "Three args constructor called" << endl;
        }
        // * destructor
        ~Player()
        {
            cout << "Destructor called for " << name << endl;
        }
};

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    {
        Player hero("Hero");
        Player alpha("Alpha", 100, 12);
    }
    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    delete enemy;
    delete level_boss;

}