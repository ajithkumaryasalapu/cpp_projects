#include<iostream>
using namespace std;

void print_col(int number,int rows,int columns,int row)
{
    for(int column=1;column<=columns;column++)
    {
        if(row==1||column==1||row==rows||column==columns)
            cout << number;
        else
            cout << " ";
    }
}

void print_rectangle(int number,int rows,int columns)
{
    for(int row=1;row<=rows;row++)
    {
        print_col(number,rows,columns,row);
        cout << endl;
    }
}

int main()
{
    int number,rows,columns;
    cout << "How many rows do you want? ";
    cin >> rows;
    cout << "How many columns do you want? ";
    cin >> columns;
    cout << "Make a rectangular shape by a single digit number:" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Input the single digit number: ";
    cin >> number;
    print_rectangle(number,rows,columns);
}
