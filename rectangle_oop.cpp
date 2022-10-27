#include<iostream>
using namespace std;

class rectangle
{
    public:
        int number,rows,columns;
        void print_column(int row)
        {
            for(int column=1;column<=columns;column++)
            {
                if(row==1||column==1||row==rows||column==columns)
                    cout << number;
                else
                    cout << " ";
            }
        }

        void print_rectangle()
        {
            for(int row=1;row<=rows;row++)
            {
                print_column(row);
                cout << endl;
            }
        }
};

int main()
{
    rectangle print;
    cout << "How many rows do you want? ";
    cin >> print.rows;
    cout << "How many columns do you want? ";
    cin >> print.columns;
    cout << "Make a rectangular shape by a single digit number:" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Input the single digit number: ";
    cin >> print.number;
    print.print_rectangle();
}
