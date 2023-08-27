#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int random=rand() % 100, numb,find=0;
    // cout<<"randome number is "<<random<<endl;
    for(int i=0;i<3;i++){
        cout<<"Enter the guessing number: ";
    cin>>numb;
        if (numb==random)
        {
            cout<<"------------------\n"
                  "|     WINNER     |\n"  
                  "------------------\n";
            find=1;
            break;
        }
        else
        {
            cout<<"wrong answer you have "<<2-i<<" chances left"<<endl;
        }
        
    }
    if (find==0)
    {
        cout<<"------------------\n"
              "|   GAME OVER    |\n"  
              "------------------\n";
        cout<<"The number is "<<random<<endl;
    }
 return 0;   
}