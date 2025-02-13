# 🧩 Binary Code Guessing Game

## 📌 Description
This project is a simple **binary code guessing game** written in **C**. It involves two players:

- **Player 1**: Chooses a secret 4-bit binary code (e.g., "0110").
- **Player 2**: Tries to guess Player 1's code.

After each guess, the program indicates how many positions contain **the digit '1' in both codes**. The game continues until **Player 2 guesses the exact code**.

---

## 🎮 Features

- 🧑‍💻 **Two-player mode:** One player sets the code, and the other guesses it.
- 🔄 **Feedback system:** Shows the number of correct '1' positions.
- 🧪 **Input validation:** Ensures input consists of exactly **4 characters (0 or 1)**.
- 💻 **Error handling:** Handles memory allocation failures.

---

## 🛠 Compilation and Execution

### 🔧 **Compilation**
```sh
gcc binary_game.c -o binary_game
```

### ▶️ **Execution**
```sh
./binary_game
```

---

## 🔄 **Gameplay Flow:**
1. **Player 1** enters a 4-bit binary code (e.g., "0110").
2. The input is hidden by printing several empty lines.
3. **Player 2** repeatedly guesses the 4-bit code.
4. After each guess, the program displays the number of correct '1' matches.
5. The game continues until **Player 2 guesses the exact code**.

---

## 💡 Example Run
```
____
Player 1, À toi de jouer !
Entrez 4 caractères (0 ou 1) : 0110
****
Player 2, À ton tour de jouer !
Player 2, tu dois deviner le code de Player 1
Entrez 4 caractères (0 ou 1) : 1111
Result: 2
Entrez 4 caractères (0 ou 1) : 0110
Result: 4
You win!
```

---

## 💂‍💻 Project Structure
```
BinaryGuessingGame/
├── binary_game.c
└── README.md
```

---

## 💜 Author
- **vbonnard** (<vbonnard@student.42.fr>)
- **ezeppa**   (<ezeppa@student.42.fr>)

---

## 📌 Note
This project was developed as part of **42 School**. Feel free to contribute or report any issues you encounter! 🚀

