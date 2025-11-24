#include <iostream>
#include <cstring>

using namespace std;

void damage(int &health) { health -= 10; }
void criticalDamage(int &health) { health -= 35; }

void smallHeal(int &health) {
    if (health < 100) {
        health += 10;
        if (health > 100) health = 100;
    }
}

void bigHeal(int &health) {
    if (health < 100) {
        health += 25;
        if (health > 100) health = 100;
    }
}

void upgradeArmor(int &armor) { armor += 10; }

void useArmor(bool &isArmor, int &armor) {
    if (!isArmor) {
        cout << "You are now wearing " << armor << endl;
        isArmor = true;
    } else {
        cout << "You are already wearing " << armor << endl;
    }
}

void checkArmor(int &armor) {
    if (armor <= 10) {
        cout << "You are wearing leather armor." << endl;
    } else if (armor <= 20) {
        cout << "You are wearing light armor." << endl;
    } else if (armor <= 30) {
        cout << "You are wearing medium armor" << endl;
    } else if (armor <= 40) {
        cout << "You are wearing heavy armor" << endl;
    } else {
        cout << "You are wearing legendary armor." << endl;
    }
}

void checkStatus(int &health, bool &isArmor, int &armor) {
    cout << "Health: " << health << endl;
    cout << "Armor: " << armor << endl;
    cout << "Is Armor: " << isArmor << endl;
    // Display armor type
    if (armor <= 10) {
        cout << "Armor Type: leather" << endl;
    } else if (armor <= 20) {
        cout << "Armor Type: light" << endl;
    } else if (armor <= 30) {
        cout << "Armor Type: medium" << endl;
    } else if (armor <= 40) {
        cout << "Armor Type: heavy" << endl;
    } else {
        cout << "Armor Type: legendary" << endl;
    }
}

int main() {
    const int maxHealth = 100;
    int health = maxHealth;
    bool isArmor = false;
    int armor = 0;

    while (true) {
        cout << "Health: " << health << endl;
        cout << "Armor: " << armor << endl;
        cout << "Is Armor: " << isArmor << endl;
        cout << "1. Damage" << endl;
        cout << "2. Critical Damage" << endl;
        cout << "3. Small Heal" << endl;
        cout << "4. Big Heal" << endl;
        cout << "5. Use Armor" << endl;
        cout << "6. Upgrade Armor" << endl;
        cout << "7. Check Armor" << endl;
        cout << "8. Check Status" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: damage(health); 
            break;
            case 2: criticalDamage(health); 
            break;
            case 3: smallHeal(health); 
            break;
            case 4: bigHeal(health); 
            break;
            case 5: useArmor(isArmor, armor); 
            break;
            case 6: upgradeArmor(armor); 
            break;
            case 7: checkArmor(armor); 
            break;
            case 8: checkStatus(health, isArmor, armor); 
            break;
            case 9: 
            return 0;
            default: 
            cout << "Invalid choice." << endl;
        }
    }
}