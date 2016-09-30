#include <iostream>
#include <cmath>

using namespace std;


void step_view(double masiv[4][5]){
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(j==0 || j==1 || j==2)
              cout<<"X"<<masiv[i][j]<<"+";
            if(j==3)
                cout<<"X"<<masiv[i][j];
              if(j==4)
             cout<<"="<<masiv[i][j]<<endl;
        }
    }
}

int main()
{
   /* double  mtr[4][5]={
          -1.7,  0.003,      0,    0,  0.681,
         0.002,    0.8,  0.001,    0,   0.48,
             0, -0.002,   -0.1, 0.03, -0.802,
             0,      0, -0.003, -1.6, -1.007,
    };*/
    double  mtr[4][5]={
          0.161,   0.332,       0,      0,   86.814,
          0.109,  -0.301,  -0.150,      0,   90.358,
              0,  -0.600,   0.171,  0.051,   19.861,
              0,       0,   0.145, -0.298,   90.502,
    };
    cout<<"Система"<<endl;
     step_view(mtr);
     double div[4],replace;
     for(int i=0;i<4;i++)
     {
         for(int j=0;j<5;j++){
             if((i==j || i>j) && mtr[i][j]!=0){
             div[i]=mtr[i][j];
             j=5;
             }
         }
     }
     for(int i=0;i<4;i++){
         for(int j=0;j<5;j++){
                   replace=mtr[i][j]/div[i];
                   mtr[i][j]=replace;
         }
     }
     cout<<"Крок 1"<<endl;
     step_view(mtr);
       for(int j=0;j<5;j++){
     mtr[1][j]=mtr[1][j]-mtr[0][j];
       }
        double div1=mtr[1][1];
       for(int j=0;j<5;j++){
     mtr[1][j]=mtr[1][j]/div1;
       }
       cout<<"Крок 2"<<endl;
          step_view(mtr);
     for(int j=0;j<5;j++){
        mtr[2][j]=mtr[2][j]-mtr[1][j];
       }
       double div2=mtr[2][2];
     for(int j=0;j<5;j++){
        mtr[2][j]=mtr[2][j]/div2;
       }
       cout<<"Крок 3"<<endl;
          step_view(mtr);
    for(int j=0;j<5;j++){
       mtr[3][j]=mtr[3][j]-mtr[2][j];
       }
      cout<<"Розвязок"<<endl;
         step_view(mtr);

    return 0;
}

