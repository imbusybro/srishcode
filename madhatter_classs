#include<iostream>
using namespace std;
class madhatter
{
    string que[17];
    char ans[17];
    char input;
    int check=0;
    public:
    madhatter ()
    {
        que[0]="#include <iostream.h>\nvoid main()\n{\n short i = 2500, j = 3000;\ncout >> \"i + j = \" >> -(i + j);\n}\nWhat are the errors in this code?\nA) #include <iostream.h> should be #include <iostream>\nB) void main() should be int main()\nC) cout >> should be cout <<\nD) All of the above\n";
        ans[0]='D';
        que[1]= "#include <iostream>\nint main()\n{\nint i = 5;\nwhile (i)\n{\n\tswitch (i)\n\t{\n\tdefault:\n\tcase 4:\n\tcase 5:\n\tbreak;\n\tcase 1:\n\tcontinue;\n\tcase 2:\n\tcase 3:\n\tbreak;\n\t}\n--;\n}\n}\nA) The continue; statement inside switch is invalid\nB) switch cannot be inside a while loop\nC) The program will cause an infinite loop\nD) #include <iostream> should be #include <iostream.h>\n";
        ans[1]='A';
        que[2]= "#include <iostream.h>\nvoid main()\n{\nint i = 10, j = 5;\nint modResult = 0;\nint divResult = 0;\nmodResult = i % j;\ncout << modResult << " ";\ndivResult = i / modResult;\ncout << divResult;\n}\nWhat will happen when this code is executed?\nA) It will compile and run successfully, outputting 0 and 10.\nB) It will cause a runtime error due to division by zero.\nC) #include <iostream.h> should be replaced with #include <iostream>.\nD) Both B and C.\n";
        ans[2]='D';
        que[3]= "#include <iostream>\n#define pi 3.14\nint squareArea(int &);\nint circleArea(int &);\nint main()\n{\nint a = 10;\nstd::cout << squareArea(a) << " ";\nstd::cout << circleArea(a) << " ";\nstd::cout << a << std::endl;\nreturn 0;\n}\nint squareArea(int &a)\n{\nreturn a *= a;\n}\nint circleArea(int &r)\n{\nreturn r = pi * r * r;\n}\nA) pi is defined as #define pi 3.14, which causes implicit type conversion to int\nB) The squareArea function modifies a, which may cause unintended behavior\nC) return a *= a; is invalid syntax\nD) cout << should be cout >>\n";
        ans[3]='A';
        que[4]="#include <iostream>\nvoid display(const int const1 = 5)\n{\nconst int const2 = 5;\nint array1[const1];\nint array2[const2];\nfor (int i = 0; i < 5; i++)\n{\narray1[i] = i;\narray2[i] = 10;\nstd::cout << array1[i] << " " << array2[i] << " ";\n}\n}\nint main()\n{\ndisplay(5);\nreturn 0;\n}\nA) const int const1 = 5; inside display is invalid because default parameters cannot be constant\nB) Variable-length arrays (array1[const1]) are not allowed in standard C++\nC) std::cout should be cout without std::\nD) The display(5); function call is incorrect\n";
        ans[4]='B';
        que[5]="#include <iostream>\nint gValue = 10;\nvoid extra()\n{\nstd::cout << gValue << " ";\n}\nint main()\n{\nextra();\n{\nint gValue = 20;\nstd::cout << gValue << " ";\nstd::cout << ::gValue << " ";\n}\nreturn 0;\n}\nA) ::gValue cannot be accessed inside a nested block\nB) The program does not compile because gValue is redefined in a nested block\nC) The extra() function should take gValue as a parameter instead of using the global variable\nD) There is no error; the program will execute successfully\n";
        ans[5]='A';
        que[6]="#include <iostream>\nint fun()\n{\nreturn 1;\n}\nfloat fun()\n{\nreturn 10.23;\n}\nint main()\n{\nstd::cout << (int)fun() << ' ';\nstd::cout << (float)fun() << ' ';\nreturn 0;\n}\nA)The program should use printf() instead of cout\nB) The typecasting of fun() is incorrect\nC)Function overloading cannot be done with only return type differences\nD) The main() function should not return 0\n";
        ans[6]='C';
        que[7]="#include <iostream>\nclass Room;\nvoid Area()\n{\nint width, height;\nclass Room\n{\nint width, height;\npublic:\nvoid setValue(int w, int h)\n{\nwidth = w;\nheight = h;\n}\nvoid displayValues()\n{\nstd::cout << (float)width << ' ' << (float)height;\n}\n};\nRoom objRoom1;\nobjRoom1.setValue(12, 8);\nobjRoom1.displayValues();\n}\nint main()\n{\nArea();\nRoom objRoom2;\nreturn 0;\n}\nA) The class Room is defined inside Area(), making it inaccessible in main()\nB) cout should be replaced with printf() for float formatting\nC) The program is missing a using namespace std; statement\nD) The class Room should be declared as static inside Area()";
        ans[7]='A';
        que[8]="#include <iostream>\nclass Room;\nvoid Area()\n{\nint width, height;\nclass Room\n{\nint width, height;\npublic:\nvoid setValue(int w, int h)\n{\nwidth = w;\nheight = h;\n}\nvoid displayValues()\n{\nstd::cout << (float)width << ' ' << (float)height;\n}\n};\nRoom objRoom1;\nobjRoom1.setValue(12, 8);\nobjRoom1.displayValues();\n}\nint main()\n{\nArea();\nRoom objRoom2;\nreturn 0;\n}\nA)cout should be replaced with printf() for performance reasons\nB) The static variable count should be initialized inside the constructor\nC) displayCount() should be declared as static\nD)setCount() is a static function and should not take any parameters";
        ans[8]='D';
        que[9]="#include <iostream>\n\nclass Room\n{\n    int width;\nint height;\nstatic int copyConsCount;\n\npublic:\nRoom()\n{\nwidth = 12;\nheight = 8;\n}\n\nRoom(const Room& r)\n{\nwidth = r.width;\nheight = r.height;\n copyConsCount++;\n}\n\nvoid dispCopyConsCount()\n{\nstd::cout << copyConsCount;\n}\n};\n\nint Room::copyConsCount = 0;\n\nint main()\n{\n    Room objRoom1;\nRoom objRoom2(objRoom1);\nRoom objRoom3 = objRoom1;\nRoom objRoom4;\nobjRoom4 = objRoom3;\n\nobjRoom1.dispCopyConsCount();\n return 0;\n}\nA) The copy constructor is incorrectly declared and should not be const\nB) The assignment objRoom4 = objRoom3; does not invoke the copy constructor\nC) The static variable copyConsCount should be initialized inside the constructor\nD) dispCopyConsCount() should be declared as static";
        ans[9]='B';
        que[10]="#include<iostream>\nclass Room\n{\nint length;\nint width;\npublic:\nRoom(int l,int w=0):width(w),length(l)\n{\n}\n};\nint main()\n{\nRoom objRoom1;\nRoom objRoom2(12,8);\nreturn 0;\n}\nA) The class Room is missing a default constructor\nB) The order of initialization in Room(int l, int w = 0) : width(w), length(l) is incorrect\nC) width should not have a default value\nD) The constructor should be defined outside the class";
        ans[10]='A';
        que[11]="#include<iostream>\nclass Space\n{\nint mCount;\npublic:\nSpace():mCount(0){}\nSpace(int count):mCount(count){}\nSpace operator++()\n{\nmCount++;\nreturn Space(mCount);\n}\n};\nint main()\n{\nSpace objSpace;\nobjSpace++;\nreturn 0;\n}\nA) The class Space is missing a constructor that takes an integer\nB) The operator++() function should return a reference instead of an object\nC) The code is missing an overload for the post-increment operator (operator++(int))\nD) mCount should be a static variable";
        ans[11]='C';
        que[12]="#include<iostream>\nclass Room\n{\nfloat mWidth;\nfloat mLength;\npublic:\nRoom():mWidth(0),mLength(0){}\nRoom(float w,float h):mWidth(w),mLength(h){}\noperator float()\n{\nreturn mWidth*mLength;\n}\nfloat getWidth(){return mWidth;}\nfloat getLength(){return mLength;}\n};\nint main()\n{\nRoom objRoom(2.5,2.5);\nfloat fTotalArea;\nfTotalArea=objRoom;\ncout<<fTotalArea;\nreturn 0;\n}\nA) The class Room should not have an implicit conversion operator\nB) The default constructor should initialize member variables\nC) cout is undefined because std:: is missing\nD) The operator float() should return an integer value";
        ans[12]='C';
        que[13]="#include<iostream>\nclass A\n{\nint i;\n};\nclass AB:virtual public A\n{\nint j;\n};\nclass ABAC;\nclass AC:public A,public AB\n{\nint k;\n};\nclass ABAC:public AB,public AC\n{\nint l;\n};\nint main()\n{\nABAC abac;\nstd::cout<<\"sizeof ABAC:\"<<sizeof(abac);\nreturn 0;\n}\nA) The class ABAC is used before being defined\nB) The class A should have a virtual destructor\nC) Multiple inheritance is not allowed in C++\nD) The sizeof(abac) statement is incorrect";
        ans[13]='A';
        que[14]="#include<iostream>\nclass B1\n{\nint b1=10;\npublic:\nvoid display()\n{\nstd::cout<<b1<<\"\\n\";\n}\n};\nclass B2\n{\nint b2=20;\npublic:\nvoid display()\n{\nstd::cout<<b2<<\"\\n\";\n}\n};\nclass D:public B1,public B2\n{\n};\nint main()\n{\nD d;\nd.B1::display();\nd.B2::display();\nreturn 0;\n}\nA) The function display() in class D should be explicitly defined\nB) The call d.display(); is ambiguous due to multiple inheritance\nC) The base classes should be declared as virtual to avoid ambiguity\nD) The class D must explicitly call base class constructors";
        ans[14]='B';
        que[15]="#include<iostream>\nclass Person\n{\nint age;\npublic:\nPerson():age(0){}\nPerson(int age)\n{\nthis.age=age;\n}\nPerson& operator<(Person& p)\n{\nreturn age<p.age?p:*this;\n}\nint getAge()\n{\nreturn age;\n}\n};\nint main()\n{\nPerson p1(15);\nPerson p2(11);\nPerson p3;\np3=p1<p2;\nstd::cout<<p3.getAge();\nreturn 0;\n}\nA) this is not a normal variable and should use this->age instead of this.age\nB) The < operator must return a boolean value (true or false)\nC) The operator< should be declared const\nD) The default constructor must explicitly initialize age";
        ans[15]='A';
        que[16]="#include<iostream>\nusing namespace std;\nclass Base\n{\npublic:\nvirtual void show()=0;\n};\nclass Derived: public Base\n{\npublic:\nvoid show()\n{\ncout<<\"Derived class show()\"<<\"\\n\";\n}\n};\nint main()\n{\nDerived d;\nd.show();\nreturn 0;\n}\nA) The program will not compile as Base has a pure virtual function\nB) The program will give a linker error due to an unresolved reference\nC) The program will compile and run, displaying \"Derived class show()\"\nD) The function show() in Derived must be explicitly marked as override";
       ans[16]='C';

    }
    void read()
    {
        cout<<"Answer (A/B/C/D): ";
        cin>>input;
        input=toupper(input);
    }
    bool evaluate(int i)
    {
        check++;
            if (input==ans[i])
            {
                cout<<"Pass"<<endl;
                return true;
            }
            else
            {
                string sass[] =
                {
                    "Oh honey, that was a bold choice, but still wrong. Try again! Perhaps with a bit more sanity?",
                    "Are you trying to make the compiler cry, or are we simply embracing the chaos today?",
                    "Even the Mad Hatter is confused by that answer—and trust me, thats an achievement!",
                    "Are you sure about that? Or are you just playing a very risky game of make-believe?",
                    "That answer was so wrong, even the Cheshire Cat disappeared out of embarrassment.",
                    "Oops! That answer belongs in the Queen of Hearts dungeon—off with its head!",
                    "404: Correct answer not found. But do check Wonderlands lost-and-found!",
                    "That was… a fascinating work of fiction. But no, try again!",
                    "If answers were tea, yours would have just spilled all over the table.",
                    "Oh, dear! That answer just fell down the rabbit hole—never to be seen again!",
                    "You must be late for a very important fact-checking session, because that was NOT it!",
                    "That answer is curiouser and curiouser… yet somehow still terribly wrong!",
                    "I admire the confidence! The accuracy? Not even the White Rabbit could find it.",
                    "If wrong answers earned XP, youd be the Mad Hatters grandmaster of nonsense by now!",
                    "Your logic just took a detour… straight into Wonderlands most puzzling paradox.",
                    "Id say close, but then Id be stretching reality thinner than the March Hares patience."
                };
                cout<<sass[i]<<endl;
                return false;
            }
    }
    void challenge()
    {
        for (int i=0;i<17;i++)
        {
            cout<<"Question: "<<i+1 <<endl<<que[i]<<endl;
            do
            {
                read();
                if (input!='A' && input!='B' && input!='C' && input!='D')
                {
                    cout <<"Invalid answer. Please choose A, B, C, or D."<<endl;
                }
            } while ((input!='A' && input!='B' && input!='C' && input!='D') || !evaluate(i));
            cout<<endl;
        }
        cout<<"Your score is: "<<check<<"/16";
    }
};
int main()
{
    madhatter M;
    cout << "\"Hello and Welcome to the tea bugging party!!\" says The Madhatter." << endl;
    cout<<"To drink the tea, debug the question provided to you when you pour in the tea."<<endl;
    cout << "From the other end of the table, rabbits say to Alice that, \"each wrong answer while debugging would lead to the Madhatter scolding her.\"" << endl;
    M.challenge();
}
