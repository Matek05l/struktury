#include <iostream>
using namespace std;
//struct ne
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct ne p;
//	p.x = 4;
//	p.y = 2;
//
//	cout << p.x << "\t" << p.y;
//}

//z2




//struct prostokat
//{
//    int a;
//    int b;
//};
//
//int pole(prostokat p)
//{
//    return p.a * p.b;
//}
//
//int main()
//{
//    prostokat p;
//
//    cout << "a: ";
//    cin >> p.a;
//
//    cout << "b: ";
//    cin >> p.b;
//
//    cout << "Pole: " << pole(p) << endl;
//
//    return 0;
//}


//z3 

#include <iostream>
using namespace std;

struct trojkat
{
    int a;
    int b;
    int c;
};

void przepisz(trojkat trojkat_1, trojkat* trojkat_2)
{
    *trojkat_2 = trojkat_1;   
}

int main()
{
    trojkat t1;
    trojkat t2;

    cout << "t1: ";
    cin >> t1.a;

    cout << "t1: ";
    cin >> t1.b;
    cout << "t1: ";
    cin >> t1.c;
    przepisz(t1, &t2);

    cout << "\n";
    cout << "a = " << t2.a << endl;
    cout << "b = " << t2.b << endl;
    cout << "c = " << t2.c << endl;

    return 0;
}

