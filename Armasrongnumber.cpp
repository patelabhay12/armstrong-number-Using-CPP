#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,sum=0,num1=0;

    cout<<"Enter Your Number ";
    cin>>num;
    num1=num;

    while(num>0){
        int lastdigit=num%10;
        sum+= pow(lastdigit,3);
        num=num/10;
    }
    if(num1==sum){
        cout<<"Number That You Have Entred Is Armasrong"<<endl;
    }
    else{
        cout<<"Number That You have Entred Is Not Armasrong"<<endl;
    }


}