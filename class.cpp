#include <iostream>
using namespace std;

    class student
    {
        public:
            int rollno;
            string name;

            void display()
            {
                cout << rollno << " " << name  << endl;
                
            }
    };
    int main()
    {

    student s1;
    student s2;

    s1.rollno = 104;
    s1.name = "Rahul";
    s2.rollno = 105;
    s2.name = "Priya";

    s1.display();
    s2.display();
    return 0;

}

