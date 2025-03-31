#include <iostream>
using namespace std;
class Queen 
{
public:
    void meet() 
    {
        cout << "Queen: Well, well, well. Look who it is! Another clueless little girl in MY domain." << endl;
        cout << "Alice: Oh great, another self-important ruler who thinks they own the place." << endl;
        cout << "Queen: You dare to stand before me without understanding the very fabric of the world you exist in?" << endl;
        cout << "Queen: Hmph! Let me see if you have even a clue about Object-Oriented Programming!" << endl;
        cout << "Alice: I do understand OOP, thank you very much. But sure, go on with your royal nonsense." << endl;
        fight();  
    }
    void fight() 
    {
        cout << "\nQueen: First, let's talk about necessity. Why OOP, you ask? Because without it, the world would be a chaotic mess of unstructured code!" << endl;
        cout << "Alice: Kinda like your kingdom? Sounds about right." << endl;
        cout << "Queen: Insolent! My kingdom is perfectly structured, unlike procedural programming!" << endl;
        cout << "Queen: Now, Data Hiding! You don't just let anyone peek into your royal affairs, do you? NO!" << endl;
        cout << "Alice: I dunno, sounds like you have plenty to hide." << endl;
        cout << "Queen: It's called protecting vital information from meddling fools!" << endl;
        cout << "Queen: Abstraction? Only show what is necessary!" << endl;
        cout << "Alice: Like how you only show your nice side when you need something?" << endl;
        cout << "Queen: Hah! Unlike you, I understand when to reveal and when to conceal!" << endl;
        cout << "Queen: Encapsulation is keeping things bundled together—like my royal decrees and my absolute authority!" << endl;
        cout << "Alice: So you're saying you keep all your bad decisions in one place? Makes sense." << endl;
        cout << "Queen: Watch your tongue, girl, or you'll see just how securely I can encapsulate you in my dungeons!" << endl;
        cout << "Queen: Procedural Abstraction means my subjects don't need to know how my court functions—only that it does!" << endl;
        cout << "Alice: Wow, sounds like a dictatorship. Maybe inheritance would help distribute some power?" << endl;
        cout << "Queen: Hah! Inheritance only passes power to the worthy, and NONE are worthy of MY throne!" << endl;
        cout << "Queen: And then, of course, we have Classes and Objects. A class is like a blueprint of perfection, much like myself!" << endl;
        cout << "Alice: If that's the case, I'd rather use a different object." << endl;
        cout << "Queen: How dare you! There is no greater instance than ME!" << endl;
        cout << "Queen: And objects? They are instances of that perfection, but none can truly compare to the original—ME!" << endl;
        cout << "Alice: Sure, if by 'original' you mean the buggiest prototype." << endl;
        cout << "Queen: Enough! Be gone, before I override your existence!" << endl;
        cout << "Alice: Oh, don't worry, I'm done wasting memory on this conversation." << endl;
        spells();
    }
private:
    class Question 
    {
    public:
        string q;
        string opt[4];
        char correct;
        Question() {}
        Question(string p, string o1, string o2, string o3, string o4, char ca) 
        {
            q = p;
            opt[0] = o1;
            opt[1] = o2;
            opt[2] = o3;
            opt[3] = o4;
            correct = ca;
        }
    };
    Question questions[15];
    int counter;
    int health;
public:
    Queen() : counter(0), health(5) 
    { 
        questions[0] = Question("What will be the output of the following C++ program?\n#include <iostream>\nusing namespace std;\nint x = 10;\nvoid func() {\nint x = x + 5;\ncout << x << endl;\n}\nint main()\n{\nfunc();\nreturn 0;\n}", "A) 10", "B) 15", "C) Compilation error", "D) Garbage value", 'C');
        questions[1] = Question("What will be the output of this code?\n#include <iostream>\nusing namespace std;\nclass Base {\npublic:\nvoid display() { cout << 'Base Class' << endl; }\n};class Derived : public Base {\npublic:\nvoid display(int x) { cout << 'Derived Class' << endl; }\n};\nint main() {\nDerived obj;\nobj.display();\nreturn 0;\n}", "A) Base Class", "B) Derived Class", "C) Compilation error", "D) Undefined behavior", 'C');
        questions[2] = Question("What is the output of the following C++ code?\n#include <iostream>\nusing namespace std;\nclass Test {\npublic:\nint x = 5;\nvoid show() { cout << \"Value of x: \" << x << endl; }\n};\nint main() {\nTest *ptr = NULL;\nptr->show();\nreturn 0;\n}", "A) Value of x: 5", "B) Segmentation fault", "C) Garbage value output", "D) Compilation error", 'B');
        questions[3] = Question("How many times is the copy constructor called in this program?\n#include <iostream>\nusing namespace std;\nclass A {\npublic:\nA() { cout << \"Constructor\" << endl; }\nA(const A& obj) { cout << \"Copy Constructor\" << endl; }\n};\nvoid func(A obj) { }\nint main() {\nA a1;\nA a2 = a1;\nfunc(a2);\nreturn 0;\n}", "A) 0", "B) 1", "C) 3", "D) 2", 'D');
        questions[4] = Question("What happens if you try to delete the same dynamically allocated pointer twice?", "A) Memory leak", "B) Segmentation fault", "C) Compiler error", "D) Undefined behavior", 'D');
        questions[5] = Question("cout << add(3.5, 2);\nWhich of the following overloaded function prototypes can handle this call?", "A) int add(int a, int b, int c);", "B) double add(double x, double y);", "C) double add(int p, double q);", "D) Compilation error", 'D');
        questions[6] = Question("#include <iostream>\nclass Room\n{\nint width;\nint height;\nstatic int copyConsCount;\npublic:\nRoom() { width = 12; height = 8; }\nRoom(const Room& r) { width = r.width; height = r.height; copyConsCount++; }\nvoid dispCopyConsCount() { std::cout << copyConsCount; }\n};\nint Room::copyConsCount = 0;\nint main() {\nRoom objRoom1;\nRoom objRoom2(objRoom1);\nRoom objRoom3 = objRoom1;\nRoom objRoom4;\nobjRoom4 = objRoom3;\nobjRoom1.dispCopyConsCount();\nreturn 0;\n}", "A) The copy constructor is incorrectly declared and should not be const", "B) The assignment objRoom4 = objRoom3; does not invoke the copy constructor", "C) The static variable copyConsCount should be initialized inside the constructor", "D) dispCopyConsCount() should be declared as static", 'B');
        questions[7] = Question("What will be the output of this code?\n#include <iostream>\nusing namespace std;\nclass Test {\npublic:\nvoid show() {\ncout << 'Address of current object:' << this << endl;\n}\n};\nint main() {\nTest obj1, obj2;\nobj1.show();\nobj2.show();\nreturn 0;\n}", "A) Same address printed twice", "B) Compilation error", "C) Different addresses printed", "D) Undefined behavior", 'C');
        questions[8] = Question("What is the correct way to access a global variable inside a function?", "A) ::varname", "B) global.varname", "C) this->varname", "D) #define GLOBAL varname", 'A');
        questions[9] = Question("What happens if 'new' fails?", "A) It returns NULL", "B) The compiler generates a warning", "C) It terminates the program immediately", "D) It throws a bad_alloc exception", 'D');
        questions[10] = Question("Which of the following is incorrect for operator overloading?", "A) sizeof and ?: can be overloaded.", "B) Overloading cannot change the precedence of operators.", "C) Overloading cannot change its associativity.", "D) At least one operand must be of a user-defined type.", 'A');
        questions[11] = Question("Room objRoom(2.5, 2.5);\nfloat fTotalArea;\nfTotalArea = objRoom;\ncout << fTotalArea;", "A) The class Room should not have an implicit conversion operator", "B) The default constructor should initialize member variables", "C) cout is undefined because std:: is missing", "D) The operator float() should return an integer value", 'C');
        questions[12] = Question("What will be the output of the following C++ program?\n#include <iostream>\nusing namespace std;\nclass A {\npublic:\nvoid show() { cout << 'Class A' << endl; }\n};\nclass B : virtual public A {};\nclass C : virtual public A {};\nclass D : public B, public C {};\nint main() {\nD obj;\nobj.show();\nreturn 0;\n}", "A) Compilation error", "B) Class A", "C) Ambiguous function call", "D) Ambiguous function call", 'B');
        questions[13] = Question("What will happen in the following code?\n#include <iostream>\n#include <memory>\nusing namespace std;\nclass Test {\npublic:\nTest() { cout << \"Constructor called\" << endl; }\n~Test() { cout << \"Destructor called\" << endl; }\n};\nint main() {\nshared_ptr<Test> ptr1 = make_shared<Test>();\nshared_ptr<Test> ptr2 = ptr1;\nweak_ptr<Test> ptr3 = ptr1;\ncout << ptr1.use_count() << endl;\nptr2.reset();\ncout << ptr1.use_count() << endl;\nreturn 0;\n}", "A) 1 1", "B) 2 0", "C) Undefined behavior", "D) 2 1", 'D');
        questions[14] = Question("What will be the output of the following?\n#include<iostream>\nusing namespace std;\nclass Room\n{\nfloat mWidth;\nfloat mLength;\npublic:\nRoom():mWidth(0),mLength(0){}\nRoom(float w,float h):mWidth(w),mLength(h){}\noperator float()\n{\nreturn mWidth*mLength;\n}\nfloat getWidth(){return mWidth;}\nfloat getLength(){return mLength;}\n};\nint main()\n{\nRoom objRoom(2.5,2.5);\nfloat fTotalArea;\nfTotalArea=objRoom;\ncout<<fTotalArea;\nreturn 0;\n}", "A) The class Room should not have an implicit conversion operator", "B) The default constructor should initialize member variables", "C) cout is undefined because std:: is missing", "D) The operator float() should return an integer value", 'C');

    }
    void spells() 
    {
        cout << "\nQueen: You insolent little WITCH! I'll teach you a lesson" << endl;
        char answer;
        while (health > 0 && counter < 15) 
        {
            cout << "\n Queen casts a spell! " << endl;
            cout << questions[counter].q << endl;
            for (int j = 0; j < 4; j++) 
            {
                cout << questions[counter].opt[j] << endl;
            }
            cout << "Answer (A/B/C/D): ";
            cin >> answer;
            if (cin.fail())  
            {
                cin.clear();              
                cin.ignore(1000, '\n');   
                cout << "Invalid input! Try again." << endl;
            } 
            else 
            {
                answer = toupper(answer);
                if (answer == questions[counter].correct) 
                {
                    cout << "Alice dodges the spell! " << endl;
                    counter++;
                } 
                else 
                {
                    health--;
                    cout << " Alice gets hit! HP left: " << health <<endl;
                }
            }
        }
        if (health == 0) 
        {
            cout << "\n Alice has been defeated! The Queen laughs victoriously." << endl;
        } 
        else 
        {
            cout << "\n Alice wins! The Queen is defeated!" << endl;
        }
    }
};
int main() 
{
    Queen q;
    q.meet();
    return 0;
}
