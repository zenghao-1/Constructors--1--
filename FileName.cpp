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
    // �����Լ��Ĺ��ܴ���
    void doSomething() {
        cout << "Man do something." << endl;
    }
private:
    Person m_person; // ʹ�ø��������ʵ������Ĺ���
};
int main() {
    Man man; // �����������
    man.doSomething(); // ��������Ĺ��ܺ���
    return 0;
}



