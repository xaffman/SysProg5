#include <iostream>
using namespace std;

class hotel {
    string name, address, kolvo;

    public:
        void set_inf(string na, string pr, string nu) {
            name = na;
            address = pr;
            kolvo = nu;
        }
        void new_kolnom(string new_p) {
            kolvo = new_p;
        }
        string inf(hotel hot) {
            return "�������� �����: " + hot.name + " ����� �����: " + hot.address + " ���������� ������� �����: " + hot.kolvo;
        }
};

