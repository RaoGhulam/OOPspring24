/*Rao Ghulam Mohi Uddin (23K-0001)*/

#include <iostream>
#include <string>
using namespace std;

class character
{
public:
    int health;
    int damage;
    character(int h, int d) : health(h), damage(d) {}
    void display()
    {
        cout << "Health: " << health << endl;
        cout << "Damage: " << damage << endl;
    }
};

class enemy : public character
{
public:
    enemy(int h, int d) : character(h, d) {}
    void display()
    {
        cout << "Enemy Health: " << health << endl;
        cout << "Enemy Damage: " << damage << endl;
    }
};

class player : public character
{
public:
    player(int h, int d) : character(h, d) {}
    void display()
    {
        cout << "Player Health: " << health << endl;
        cout << "Player Damage: " << damage << endl;
    }
};

class wizard : public player
{
public:
    int magic_power;
    string spells;
    wizard(int h, int d, int m, string s) : player(h, d)
    {
        magic_power = m;
        spells = s;
    }
    void display()
    {
        player::display();
        cout << "Magic Power: " << magic_power << endl;
        cout << "Spells: " << spells << endl;
    }
};

int main()
{
    wizard w(2, 3, 4, "ab");
    w.display();
}