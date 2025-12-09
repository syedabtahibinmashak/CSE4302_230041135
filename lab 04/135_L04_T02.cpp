#include<iostream>
using namespace std;

class PaladinHero
{
    private:
        int charLevel, weaponDamage, manaPoint;
        int calculateHolyDamage()
        {
            return (charLevel*2)+weaponDamage+(manaPoint*0.1);
        }
    public:
        PaladinHero(int level, int damage, int mana)
        {
            charLevel=level;
            weaponDamage=damage;
            manaPoint=mana;
        }
        ~PaladinHero()
        {
            cout <<"The hero has fallen." <<endl;
        }
        void attackMonster()
        {
            if(manaPoint==0) cout <<"No mana points remaining!" <<endl;
            else
            {
                int x=calculateHolyDamage();
                cout <<"Striking the enemy for " <<x <<" damage!" <<endl;
                manaPoint--;
            }
        }
        void restAndRecover(int incMana)
        {
            if(incMana<=0) cout <<"Invalid mana recovery" <<endl;
            else
            {
                manaPoint+=incMana;
                charLevel++;
            }
        }
};

int main()
{
    PaladinHero hero(10,10,10);
    hero.attackMonster();
    hero.restAndRecover(5);

    return 0;
}