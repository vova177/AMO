#include <iostream>

using namespace std;

int main()
{
    double  mtr[4][5]={
          -1.7,  0.003,      0,    0,  0.681,
         0.002,    0.8,  0.001,    0,   0.48,
             0, -0.002,   -0.1, 0.03, -0.802,
             0,      0, -0.003, -1.6, -1.007,
    };



    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<5;j++){
            cout<<"      "<<mtr[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<5;j++){
            if(i==j || i>j && mtr[i][j]!=0)
            cout<<"      "<<mtr[i][j];
        }
    }
      cout<<endl;
    return 1;
}
