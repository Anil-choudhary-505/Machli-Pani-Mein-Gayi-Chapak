#include<iostream>
using namespace std;
//When user enter wrong choise then  this fuction is call
void lose(int rc){
cout<<"                                --- ";
cout<<"You lose the game !!"<<" ---"<<endl;
cout<<"                                --- ";
cout<<"Right Answer is "<<rc<<" ---";
}


int main(){
//Below lines for console beauty and user understanding 
cout<<endl<<"                                    ";
cout<<"MACHLI - PANI MEIN GAYI - CHAPAK "<<endl<<endl;
cout<<"Guidance :"<<endl;
cout<<"* Press '1' for Machli"<<endl<<"* Press '2' for Pani Mein Gayi "<<endl<<"* Press '3' for Chapak"<<endl<<endl;
cout<<endl<<"                                    ";
cout<<"Lets start the game !"<<endl<<endl;

//Main logic 
int rc;//for right choise
int uc;//for user choise
int it;//for iteration
int oddeven=1;

for(int i=1;i<=10;i++){
    rc=1;
    for(int j=1;j<=3;j++){
        it=1;
        for(int k=1;k<=i;k++)   {
            if(it>i){
                break;
            }
            if(oddeven %2 ==0){
                goto even;
            }
            cout<<"Computer choise : "<<rc<<endl;
            it++; oddeven++;
            if(it>i){
                break;
            }
            even:
            cout<<"Your choise : ";
            cin>>uc;
            it++; oddeven++;
            if(uc!=rc){
                lose(rc);
                return 0;
            }
        }
    rc++;
    }
}
cout<<"                                --- ";
cout<<"You Won the game !!"<<" ---"<<endl;

return 0;
}