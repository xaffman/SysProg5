#include <iostream>
using namespace std;

class sotrudniki {
    string name, lastname, proff;

    public:
        void set_inf(string na, string ln, string pr) {
            name = na;
            lastname = ln;
            proff = pr;
        }
        void new_dolzh(string new_p) {
            proff = new_p;
        }
        string inf(sotrudniki sotr) {
            return "��� ����������: " + sotr.name + " ������� ����������: " + sotr.lastname + " ��������� ����������: " + sotr.proff;
        }
};

