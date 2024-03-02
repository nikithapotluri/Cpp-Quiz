#include <iostream>
using namespace std;
int score=0;
int playquiz(char c){
    char op;
    if(c=='s'|| c=='S'){
        cout<<"Question Number - 1 :"<<endl;
        cout<<"What is the output of the following code?"<<endl;
        cout<<"#include <iostream>"<<endl;
        cout<<"using namespace std;"<<endl;
        cout<<"int main() {"<<endl;
        cout<<"int x = 5; int y = ++x + x++; cout << y; return 0;"<<endl;
        cout<<"}"<<endl;
        cout<<"A) 11  B) 12  C) 13  D) 14"<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='b' || op=='B') score++;

        cout<<endl;

        cout<<"Question Number - 2 :"<<endl;
        cout<<"What does the keyword 'static' mean in C++ when used inside a class?"<<endl;
        cout<<"A) It signifies a constant value."<<endl;
        cout<<"B) It means the member is shared among all objects of the class."<<endl;
        cout<<"C) It indicates the variable cannot be changed."<<endl;
        cout<<"D) It denotes a member that cannot be accessed from outside the class."<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='b' || op=='B') score++;

        cout<<endl;

        cout<<"Question Number - 3 :"<<endl;
        cout<<"Which of the following is the correct way to define a reference in C++?"<<endl;
        cout<<"A) int &x = y;  B) int *x = &y;  C) int x = &y;  D) int &x(y);"<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='a' || op=='A') score++;

        cout<<endl;

        cout<<"Question Number - 4 :"<<endl;
        cout<<"What is the output of the following code?"<<endl;
        cout<<"#include <iostream>"<<endl;
        cout<<"using namespace std;"<<endl;
        cout<<"int main() {"<<endl;
        cout<<"char arr[] = ""Hello"";  cout << sizeof(arr); return 0;"<<endl;
        cout<<"}"<<endl;
        cout<<"A) 5  B) 6  C) 7  D) Depends on the compiler"<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='b' || op=='B') score++;

        cout<<endl;

        cout<<"Question Number - 5 :"<<endl;
        cout<<"What is the output of the following code?"<<endl;
        cout<<"#include <iostream>"<<endl;
        cout<<"using namespace std;"<<endl;
        cout<<"void display(int x = 10) {   cout << x << " ";  }"<<endl;
        cout<<"int main() {"<<endl;
        cout<<"display(); display(20); return 0;"<<endl;
        cout<<"}"<<endl;
        cout<<"A) 10 20  B) 20 10  C) 10 10  D) 20 20"<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='a' || op=='A') score++;

        cout<<endl;

        cout<<"Question Number - 6 :"<<endl;
        cout<<"What is a virtual destructor in C++?"<<endl;
        cout<<"A) A destructor that can be accessed from any derived class."<<endl;
        cout<<"B) A destructor that deallocates memory virtually."<<endl;
        cout<<"C) A destructor that is declared as 'virtual' in the base class to ensure proper destruction of derived class objects."<<endl;
        cout<<"D) A destructor that doesn't deallocate memory."<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='c' || op=='C') score++;

        cout<<endl;

        cout<<"Question Number - 7 :"<<endl;
        cout<<"What is the difference between new and malloc() in C++?"<<endl;
        cout<<"A) new is used for dynamic memory allocation of primitive data types, while malloc() is used for objects created using classes."<<endl;
        cout<<"B) new allocates memory from the free store and calls constructors, while malloc() allocates uninitialized memory from the heap."<<endl;
        cout<<"C) new always returns a pointer to a valid memory location, whereas malloc() might return a null pointer if memory is unavailable."<<endl;
        cout<<"D) There is no difference between new and malloc()."<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='b' || op=='B') score++;

        cout<<endl;

        cout<<"Question Number - 8 :"<<endl;
        cout<<"What is the use of the typeid operator in C++?"<<endl;
        cout<<"A) It returns the type of an object.  B) It checks if two objects have the same type.  C) It returns the size of an object.  D) It is used to compare types."<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='a' || op=='A') score++;

        cout<<endl;

        cout<<"Question Number - 9 :"<<endl;
        cout<<"Explain the difference between const pointer, pointer to const, and const pointer to const in C++."<<endl;
        cout<<"A) const pointer can't change the address it holds, pointer to const can't change the value it points to, and const pointer to const can't change both the address and value.\nB) const pointer can't change the value it points to, pointer to const can't change the address it holds, and const pointer to const can't change both the address and value.\nC) const pointer can't change both the address and value, pointer to const can't change the address it holds, and const pointer to const can't change the value it points to.\nD) There's no difference between const pointer, pointer to const, and const pointer to const."<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='a' || op=='A') score++;

        cout<<endl;

        cout<<"Question Number - 10 :"<<endl;
        cout<<"Explain the concept of function overloading and function overriding in C++ with examples."<<endl;
        cout<<"A) Function overloading is redefining a base class function in the derived class, while function overriding is having multiple functions with the same name but different parameters.\nB) Function overloading is having multiple functions with the same name but different parameters or return types, while function overriding is redefining a base class function in the derived class with the same signature.\nC) Function overloading is having multiple functions with the same name and the same parameters, while function overriding is having multiple functions with different names but the same parameters.\nD) There is no difference between function overloading and function overriding in C++."<<endl;
        cout<<"Enter option:";
        cin>>op;
        if(op=='b' || op=='B') score++;
    }
    else{
        cout<<"Wrong input is given."<<endl;
    }
    return score;
}
int main()
{
    char c;
    cout<<"** HELLO,YOU **"<<endl;
    cout<<"** WELCOME TO THE ULTIMATE C++ QUIZ! **"<<endl;
    cout<<"** Let's test your C++ knowledge. **"<<endl;
    cout<<"** This quiz consists of 10 questions & 1 mark will be awarded for each correct answer. **"<<endl;
    cout<<"** Remember to click ENTER after choosing any option! **"<<endl;
    cout<<"** Press 's' to start the quiz. **"<<endl;
    cin>>c;
    
    int score=playquiz(c);
    
    cout<<endl;
    
    cout<<"Your quiz score is:"<<score<<endl;
    if(score>=0 &&score<=3) cout<<"A little more practice and you'll soon grasp these concepts. Don't lose heart, keep coding!"<<endl;
    else if(score>3 && score<7) cout<<"You're getting there! Keep practicing and exploring C++ concepts. You're closer to mastering this than you think!"<<endl;
    else if(score>=7 && score<=8) cout<<"Almost at the top! Keep fine-tuning those areas where you missed a few points, and you'll be a C++ whiz!"<<endl;
    else if(score>=9 && score<=10) cout<<"Exceptional job! You've truly mastered these concepts. Keep challenging yourself further, there's always more to learn!"<<endl;

    cout<<endl;
    
    cout<<"** END OF THE QUIZ **";
    return 0;
}

