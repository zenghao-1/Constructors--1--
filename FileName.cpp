//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person() { cout << "Person\n"; }
//};
//
//class Man:public Person
//{
//public:
//	Man():Person() { cout << "Man\n"; }
//	void doSomething() { cout << "do\n"; }
//private:
//	//Person m_person;
//};
//
//int main()
//{
//	Man man;
//	man.doSomething();
//}


#include <iostream>
using namespace std;
class Person {
public:
    Person() {
        cout << "Person constructor called." << endl;
    }
};
class Man {
public:
    Man() {
        cout << "Man constructor called." << endl;
    }
    // 子类自己的功能代码
    void doSomething() {
        cout << "Man do something." << endl;
    }
private:
    Person m_person; // 使用父类对象来实现子类的功能
};
int main() {
    Man man; // 创建子类对象
    man.doSomething(); // 调用子类的功能函数
    return 0;
}



