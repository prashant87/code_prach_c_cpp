#include <iostream>
#define MAX_ID 100

using namespace std;

class shop{
    private:
        int itemID[MAX_ID];
        int itemPrice[MAX_ID];
        int32_t count;
        static int test_count;

    public:
        void initcounter(void);
        // void getPrice(void);
        void setPrice(void);
        void display(void);
        static void get_count(void)
        {
            cout<<"value of test_count "<<endl;
            test_count++;
        }
};

int shop::test_count ;

void shop :: initcounter()
{
    count = 0;
    test_count = 0;
}

void shop :: setPrice()
{
    cout<<"Enter ID of your item"<<endl;
    cin>>itemID[count];
    cout<<"Enter price of item"<<endl;
    cin>>itemPrice[count];
    count++;
    test_count++;
}

void shop :: display()
{
    for(int i = 0; i < count; i++)
    {
        cout<<"The Price of Item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
        shop::get_count();
    }
}

int main()
{
    shop duk;
    duk.initcounter();
    duk.setPrice();
    shop::get_count();
    // duk.setPrice();
    // duk.setPrice();
    // duk.setPrice();
    // duk.setPrice();
    duk.display();
    shop::get_count();
    
    
    return 0;
}