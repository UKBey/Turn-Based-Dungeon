# Turn-Based Combat Game in C++

This is a terminal-based combat game developed in C++. The player progresses through 10 levels, fighting enemies like zombies and skeletons using different skills. The game demonstrates object-oriented programming, dynamic stat progression, and turn-based battle mechanics.

---

## 🎮 Features

- Fight through 10 levels with increasing difficulty
- Choose from 3 attack types: Punch, Kick, Ulti
- Each skill has unique damage and mana cost
- Defeat enemies to earn stat upgrades (HP, damage, mana, etc.)
- Regen system after each level
- Final boss fight on level 10
- Emergency exit option
- Input validation for better user experience

---

## 🧱 Technologies Used

- **C++**
- Standard Libraries: `<iostream>`, `<iomanip>`, `<string>`

---

## 📌 Game Mechanics

- **Classes**: `Character` and `Enemy` for modular structure
- **Combat Function**: Handles turn-based logic, player and enemy actions
- **Item Choice Function**: Allows player to upgrade stats
- **willContinue()**: Asks player if they want to continue after each level

---

## 🗂️ Project Structure

```
main.cpp          → All game logic including character/enemy definitions and combat loop
```

---

## 🚀 How to Run

1. Compile the code using any C++ compiler:
   ```
   g++ main.cpp -o CombatGame
   ```
2. Run the executable:
   ```
   ./CombatGame
   ```

---

## 👤 Author

**Ukbe Taha Şahinkaya**
