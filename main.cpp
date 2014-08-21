#include <iostream>

using namespace std;

bool czy_trojkat (double a, double b, double c)
{
    if(a<=0 || b<=0 || c<=0) return false;
    if((a+b<c) || (a+c<b) || (b+c<a)) return false;
    return true;
}
void testuj_czy_trojkat ()
{
    if (czy_trojkat(0,2,-3)!=false) cout<<"problem1"<<endl;
    if (czy_trojkat(1,2,3)!=false) cout<<"problem2"<<endl;
    if (czy_trojkat(2,2,2)!=false) cout<<"problem3"<<endl;
}
//#define TESTY
int main()
{
#ifdef TESTY
    testuj_czy_trojkat();
#else
    double a,b,c;
    cin>>a>>b>>c;
    if (czy_trojkat(a,b,c)==false) cout<<"nie";
    cout<<"jest trojkatem "<<endl;

    cout << "Hello world!" << endl;
#endif // TESTY
    return 0;
}
