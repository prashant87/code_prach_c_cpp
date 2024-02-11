#include <iostream>
#include <string>

using namespace std;

class binary {
    private:
        string s;
    public:
        void read(void);
        void check_binary(void);
};

void binary :: read()
{
    cout<<"Enter a string"<<endl;
    cin>>s;
}

void binary :: check_binary()
{
    for(int i = 0; i < s.length(); i++ )
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

int main()
{

    string s;
    binary b;
    cout << "Hello World" << endl;
    return 0;
}