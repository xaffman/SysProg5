#include <iostream>
using namespace std;

class polzovatel {
    string name, lastname, login;

    public:
        void set_inf(string na, string ls, string lo) {
            name = na;
            lastname = ls;
            login = lo;
        }
        void new_log(string new_a) {
            login = new_a;
        }
        string inf(polzovatel polz) {
            return "��� ������������ : " + polz.name + " ������� ������������: " + polz.lastname + " ����� ������������: " + polz.login;
        }
};

