#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class maze {
private:
    int complexity;
    int exitSteps;
    int counter;
public:
    class question {
    public:
        string q;
        string opt[4];
        char correct;
        question() {}
        question(string p, string o1, string o2, string o3, string o4, char ca) {
            q = p;
            opt[0] = o1;
            opt[1] = o2;
            opt[2] = o3;
            opt[3] = o4;
            correct = ca;
        }
    };
    question questions[20];
    maze() : complexity(1), exitSteps(20), counter(0) {
        questions[0] = question("1. If a variable is declared inside a block, what is its scope?",
                                "A) The entire program",
                                "B) Until the end of that block",
                                "C) Until the end of the function",
                                "D) Until the program terminates", 'B');
        questions[1] = question("2. Which operator allows access to a global variable when a local variable has the same name?",
                                "A) . (Dot operator)",
                                "B) -> (Arrow operator)",
                                "C) :: (Scope resolution operator)",
                                "D) : (Colon operator)", 'C');
        questions[2] = question("3. Where can member functions be defined?",
                                "A) Inside or outside the class definition",
                                "B) Only inside the class definition",
                                "C) Only outside the class definition",
                                "D) Only in main()", 'A');
        questions[3] = question("4. Which is NOT true about friend functions?",
                                "A) Not in scope of the class",
                                "B) Can access private members",
                                "C) Can be declared in public or private section",
                                "D) Can be called using object of the class", 'D');
        questions[4] = question("5. Which access specifier allows child classes but not outside access?",
                                "A) Private",
                                "B) Public",
                                "C) Protected",
                                "D) Friend", 'C');
        questions[5] = question("6. Purpose of a constructor?",
                                "A) Destroy objects",
                                "B) Allocate memory dynamically",
                                "C) Initialize object when created",
                                "D) Copy object", 'C');
        questions[6] = question("7. When is copy constructor called?",
                                "A) Object created and initialized",
                                "B) Object deleted",
                                "C) Private function accessed",
                                "D) Function overloaded", 'A');
        questions[7] = question("8. Purpose of operator overloading?",
                                "A) Automatic type conversion",
                                "B) Flexibility for user-defined types",
                                "C) Create new operators",
                                "D) Restrict operators", 'B');
        questions[8] = question("9. Which operator cannot be overloaded?",
                                "A) +",
                                "B) =",
                                "C) ++",
                                "D) ::", 'D');
        questions[9] = question("10. True about operator functions?",
                                "A) Must have one user-defined operand",
                                "B) Must always be static",
                                "C) Cannot be member functions",
                                "D) Must return int", 'A');
        questions[10] = question("11. What is multiple inheritance?",
                                 "A) One base class",
                                 "B) More than one base class",
                                 "C) Base from derived",
                                 "D) Containership", 'B');
        questions[11] = question("12. What is hierarchical inheritance?",
                                 "A) Derived from derived",
                                 "B) Multiple base classes",
                                 "C) One base inherited by many derived",
                                 "D) Object containment", 'C');
        questions[12] = question("13. Multipath inheritance problem?",
                                 "A) Base not accessed",
                                 "B) Cannot access private",
                                 "C) Duplication avoided using virtual base class",
                                 "D) Reverse constructor order", 'C');
        questions[13] = question("14. Private inheritance effect?",
                                 "A) Public & protected become private",
                                 "B) Public stays public",
                                 "C) Protected stays protected",
                                 "D) Unchanged", 'A');
        questions[14] = question("15. Object pointer used for?",
                                 "A) Create objects at runtime",
                                 "B) Copy object",
                                 "C) Auto delete",
                                 "D) Convert type", 'A');
        questions[15] = question("16. Operator to access members using pointer?",
                                 "A) .",
                                 "B) ::",
                                 "C) ->",
                                 "D) *", 'C');
        questions[16] = question("17. What does this pointer represent?",
                                 "A) Base class",
                                 "B) First object in memory",
                                 "C) Dynamic allocation",
                                 "D) Object invoking function", 'D');
        questions[17] = question("18. Polymorphism means?",
                                 "A) One function one name",
                                 "B) One name multiple forms",
                                 "C) Cannot overload",
                                 "D) Cannot inherit", 'B');
        questions[18] = question("19. Compile-time polymorphism also called?",
                                 "A) Early binding",
                                 "B) Late binding",
                                 "C) Dynamic linking",
                                 "D) Virtual binding", 'A');
        questions[19] = question("20. Which determines function at runtime?",
                                 "A) Compile-time",
                                 "B) Static linking",
                                 "C) Overloading",
                                 "D) Run-time polymorphism", 'D');
    }
    void ask() {
        if (counter >= 20) {
            cout << "\nYou answered all questions! You escaped the maze!\n";
            return;
        }
        char answer;
        while (true) {
            cout << "\n" << questions[counter].q << endl;
            for (int i = 0; i < 4; i++)
                cout << questions[counter].opt[i] << endl;
            cout << "Answer (A/B/C/D): ";
            cin >> answer;
            answer = toupper(answer);
            if (answer == questions[counter].correct) {
                exitSteps--;
                cout << "Correct! Steps remaining: " << exitSteps << endl;
                break;
            } else {
                complexity++;
                cout << "Wrong! Maze complexity increased to "
                     << complexity << ". Try again.\n";
            }
        }
        counter++;
    }
    int getExit() {
        return exitSteps;
    }
};
int main() {
    cout << "Alice enters the maze...\n";
    maze alice;
    while (alice.getExit() > 0) {
        alice.ask();
    }
    cout << "\nCongratulations! You have escaped the maze!\n";
    return 0;
}
