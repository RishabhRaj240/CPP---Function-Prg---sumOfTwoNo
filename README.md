# Sum of Two Numbers Using Functions in C++

A beginner-friendly C++ program demonstrating the use of functions with parameters to calculate the sum of two numbers.

This project helps beginners understand modular programming, function creation, parameter passing, and code reusability in C++.

---

## 📌 Features

* Accepts two integer inputs from the user
* Uses a parameterized function
* Calculates the sum of two numbers
* Demonstrates modular programming
* Beginner-friendly and easy to understand

---

## 🛠️ Technologies Used

* C++
* Standard Input/Output (`iostream`)

---

## 📂 Program Logic

The program:

1. Takes two numbers as input from the user
2. Passes them to the `sum()` function
3. Calculates the addition of both numbers
4. Prints the result

---

## 📸 Screenshot

<img width="687" height="461" alt="Screenshot 2026-06-14 175000" src="https://github.com/user-attachments/assets/12fb15f5-ebe2-4be4-ac1c-2961bded90f4" />

Example folder structure:

```txt id="w7n5d1"
project-folder/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png
```

---

## 💻 Source Code

```cpp id="x3j7d9"
#include<iostream>
using namespace std;

// Functions are set of code which performs something
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use similar code multiple times

void sum(int num1, int num2) {

    int num3 = num1 + num2;

    cout << endl << num3;
}

int main() {

    int num1, num2;

    cin >> num1 >> num2;

    sum(num1, num2);

    return 0;
}
```

---

## ▶️ How to Run

1. Compile the program:

```bash id="q3j6wx"
g++ main.cpp -o main
```

2. Run the executable:

```bash id="v2o7sd"
./main
```

3. Enter two integer values.

---

## 📸 Example Output

```txt id="m8q1ze"
10 20

30
```

---

## 📖 Learning Concepts

This project helps beginners understand:

* Functions in C++
* Parameterized functions
* Function calls
* Passing arguments
* Modular programming
* Code reusability

---

## 🔍 Function Used

```cpp id="e4p9ds"
void sum(int num1, int num2)
```

### Explanation

* `void` → Function does not return any value
* `sum` → Function name
* `int num1, int num2` → Parameters passed into the function

---

## 👨‍💻 Author

Developed as a beginner-friendly C++ practice project for learning functions and modular programming.
