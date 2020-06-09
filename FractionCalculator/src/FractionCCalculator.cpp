#include "FractionCCalculator.h"

FractionCCalculator::FractionCCalculator()
{
    //ctor
}


 void FractionCCalculator::Menu()
 {

 cout<<"Hello User Welcome to our Fraction Calculator program"<<endl;
 cout<<"What operation would you like to make "<<endl;
 cout<<"1-If you want to Add please press Number 1 "<<endl;
 cout<<"2-If you want To Subtract press Number 2 "<<endl;
 cout<<"3-If you want to Multiply Press Number 3 "<<endl;
 cout<<"4-If you want to divide press Number 4"<<endl;
 cout<<"5-If you want to compare between 2 fractions "<<endl;
 cout<<"6-you have got enough of the program and want to exit press 6 "<<endl;
 cout<<endl;
 cout<<"Now what did you decide to do?! please Enter the number of the operation"<<endl;
 cout<<endl;
 cin>>choose;
 switch(choose){
     case 1:
 cout<<"Now Enter the first fraction"<<endl;
 cin>>L; cout<<endl;
 cout<<"Could you please Enter the second fraction"<<endl;
 cin>>R; cout<<endl;
  //L+R;
  cout<<L+R;
break;
     case 2:
cout<<"Now Enter the first fraction"<<endl;
 cin>>L; cout<<endl;
 cout<<"Could you please Enter the second fraction"<<endl;
 cin>>R; cout<<endl;
   //L-R;
   cout<<L-R;

     case 3:
cout<<"Now Enter the first fraction"<<endl;
 cin>>L; cout<<endl;
 cout<<"Could you please Enter the second fraction"<<endl;
 cin>>R; cout<<endl;
  cout<<L * R<<endl;

    case 4:
     cout<<"Now Enter the first fraction"<<endl;
 cin>>L; cout<<endl;
 cout<<"Could you please Enter the second fraction"<<endl;
 cin>>R; cout<<endl;
   //L/R;
   cout<<L/R;

    case 6:

        break;

    case 5:
         cout<<"Now Enter the first fraction"<<endl;
 cin>>L; cout<<endl;
 cout<<"Could you please Enter the second fraction"<<endl;
 cin>>R; cout<<endl;
        cout << " 1 - Do you want to Check the Equality            " << endl;
        cout << " 2 - Do you want to Check which Fraction Greater          " << endl;
        cout << " 3 - Do you want to  Check which Fraction Smaller          " << endl;
        cout << " 4 - Do you want to  Check which Fraction is Greater or the 2 Fractions are Equal " << endl;
        cout << " 5 - Do you want to Check which Fraction  is Smaller or the 2 Farctions are Equal " << endl;
        cout << endl;
        cout << " Which Operator you want to use please press the number of operation you want to do?         " <<endl;
        int number;
        cin>>number;
        if(number==1){
            if(L==R)
                cout << " True " << endl;
            else
                cout << " False " << endl;
            cout << endl;

        }
        else if(number==2){

            if(L > R)
                cout << " True " << endl;
            else
                cout << " False " << endl;
            cout << endl;
        }
        else if (number==3){
            if(L < R)
                cout << " True " << endl;
            else
                cout << " False " << endl;
            cout << endl;
        }
        else if(number==4){
              if(L >= R)
                cout << " True " << endl;
            else
                cout << " False " << endl;
            cout << endl;
        }
        else if(number==5){
             if(L <= R)
                cout << " True " << endl;
            else
                cout << " False " << endl;
            cout << endl;
        }
        else
            cout<<"You entered a number with no operation"<<endl;
 }

 }
