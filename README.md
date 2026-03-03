# Alice in C++ Land

An interactive text-based educational game that teaches **C++ and Object-Oriented Programming** concepts through a whimsical journey in Wonderland. Players join Alice as she explores the Hall of Knowledge, converses with animals, navigates a maze, debugs code at the Mad Hatter’s tea party, and finally battles the Queen — all while answering questions and learning core OOP principles.

---

## Key C++ / OOP Concepts Used

- **Classes & Objects** – Each game stage is encapsulated in its own class (`hall_of_knowledge`, `Animal`, `maze`, `madhatter`, `Queen`).
- **Inheritance** – The `Alice` class inherits from all other classes (multiple inheritance) to represent her progression through the story.
- **Polymorphism** – Demonstrated through differentiated behaviour within the `Animal` class and reinforced conceptually in quiz stages.
- **Encapsulation** – Private data members with public member functions control access to game state.
- **Constructors & Destructors** – Used to initialize question banks and manage resources.
- **Nested Classes** – `maze::question` and `Queen::Question` encapsulate quiz data within their respective classes.
- **Function Overloading** – Demonstrated through constructor variations and method definitions.
- **Operator Overloading** – Reinforced through debugging challenges in the Mad Hatter stage.
- **Friend Functions** – Introduced within animal dialogues.
- **Virtual Functions** – Covered conceptually in the Queen’s final battle stage.

---

## Project Structure

The game is organized into several key classes, each representing a stage in Alice’s adventure:

- **`hall_of_knowledge`** – First stage: presents C++ theory and a 14-question quiz.
- **`Animal`** – Second stage: five animals (Owl, Fish, Cat, Mole, Turtle) share C++ wisdom in a round-robin dialogue.
- **`maze`** – Third stage: a 20-question maze; correct answers reduce the exit counter.
- **`madhatter`** – Fourth stage: debugging party with 17 code-snippet questions.
- **`Queen`** – Final stage: a battle where Alice answers 15 questions to defeat the Queen.
- **`Alice`** – Main character class that inherits from all the above, tying the narrative flow together.

The `main()` function orchestrates the complete game flow by instantiating the `Alice` class and sequentially invoking each stage.

---

## Educational Objective

This project integrates narrative storytelling with structured programming principles to reinforce theoretical OOP concepts through interactive application.

---

## How to Compile & Run

This is a standard C++17 console application.

### Compile

```bash
g++ src/*.cpp -o alice_in_cpp_land
