#include <iostream>
using namespace std;

class park {
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
    string inf(park pak) {
        return "�������� �����: " + pak.name + " ����� �����: " + pak.address + " ���������� �������� �����: " + pak.kolvo;
    }
};

