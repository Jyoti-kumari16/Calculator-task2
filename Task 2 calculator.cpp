#include<iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2;
    cout<<"enter operator either + or - or * or / :";
    cin>>op;
    cout<<"Enter two oprands:";
    cin>>num1>>num2;
    switch(op)
    {
        case'+':
        cout<<num1+num2;
        break;
        case'-':
        cout<<num1-num2;
        break;
        case'*':
        cout<<num1*num2;
        break;
        case'/':
        cout<<num1/num2;
        break;
        default:
        cout<<"Enter! opreator is not correct";
        break;
    

    }
    return 0;
}
