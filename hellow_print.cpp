// #include <iostream>
// #include <conio.h>
// using namespace std;
// int main()
// {
//     float total = 100;
//     float &sum = total; // refference variable
//     cout << "the vallue of total" << total << endl;
//     cout << "value of sum=" << sum << endl;
//     total = 200;
//     cout << "new vallue of total=" << total << endl;
//     sum = 50;
//     cout << "new vallue of total=" << total << endl;
//     cout << "new vallue of sum=" << sum << endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
     int n, row=1;
     cout<<"Enter the value of input:"<<endl;
     cin>>n;
     while (row<=n)
     {
        int col=1;
        while (col<=n)
        {
            cout<<row;
            col=col+1;

        }
        cout<<endl;
        row=row+1;
        
     }
     return 0;
}