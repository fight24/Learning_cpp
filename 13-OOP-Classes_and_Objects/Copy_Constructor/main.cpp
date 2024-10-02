#include <iostream>
#include <string>

using namespace std;

class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        //* Overloaded constructors
        // Player();
        // Player(std::string name_val);
        std::string get_name(){ return name;}
        int get_health(){ return health;}
        int get_xp() { return xp;}
        Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
        //* copy constructor
        Player(const Player &source);
        //* Destructor
        ~Player();
};
//* -----------------------------Default Constructor Parameters ---------------------------
Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val}
{
    cout << "Three args for constructor for " << name << endl;
}

Player::Player(const Player &source)
    // : name{source.name}, health{source.health}, xp {source.xp}
    : Player{source.name, source.health, source.xp}
{
    cout << "Copy constructor - made copy of: " << source.name << endl;
}

Player::~Player()
{
    cout << "Destructor called for: " << name << endl;
}

void display_player(Player p)
{
    cout << "Name: " << p.get_name() 
         << "\nHealth: " << p.get_health()
         << "\nXp: " << p.get_xp() << endl;
}
int main()
{
    Player empty;
    display_player(empty);
    Player empty_2 {"xxxxxx", 100, 50};
    Player my_new_object_empty_2 {empty_2};
    Player alpha {"Alpha"};
    Player hero {"Hero", 100};
    Player beta {"Beta", 100, 55};
    return 0;
}