#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
    char arr[][10]={"bangalore","rcb","delhi"};
    string ch1,ch2,ch3;
    cout<<"Enter the player name\n";
    string Name;
        cin>>Name;
        cout<<"welcome to our Guessing game\n";

    for(int i=1;i<=3;i++){
    switch(i){
    case 1:
    cout<<"hint 1:it is captial city of india\n";
    cin>> ch1;
      if( strcmp(ch1.c_str() ,arr[0])==0){
     cout<<"yes it is*** bangalore city***\n";
    cout<<"you scored 5!\n\n";
    }else
    {
        cout<<"Answer is wrong.Enter the correct city\n";
        cout<<"hint 2:it is located in south india\n";
        cin>> ch1;
    if( strcmp(ch1.c_str() ,arr[0])==0){
            cout<<"yes it is*** bangalore city***\n";
       cout<<"you scored 3!\n\n";}
    else{
        cout<<"Answer is wrong.Enter the correct city\n";
        cout<<"hint 3:it is also called as Electronic city\n";
        cin>> ch1;
    if( strcmp(ch1.c_str() ,arr[0])==0){
        cout<<"yes it is*** bangalore city***\n";
    cout<<"you scored 1!\n\n";}
    else{
        cout<<"Answer is wrong.***You lose***\n";
            }}}
            break;

  case 2:
    cout<<"hint 1:it is cricket team\n";
    cin>> ch2;
    if( strcmp(ch2.c_str(), arr[1])==0){
            cout<<"yes it is ***rcb IPL team***\n";
    cout<<"you scored 5!\n\n";}
    else{
        cout<<"Answer is wrong.Enter the correct team name\n";
    cout<<"hint 2:it is an IPL team name\n";
    cin>> ch2;
    if( strcmp(ch2.c_str(), arr[1])==0){
              cout<<"yes it is ***rcb IPL team***\n";
    cout<<"you scored 3!\n\n";}
    else{
        cout<<"Answer is wrong.Enter the correct team name\n";
    cout<<"hint 3:it is represnt in banglore team\n";
    cin>> ch2;
    if( strcmp(ch2.c_str(), arr[1])==0){
          cout<<"yes it is ***rcb IPL team***\n";
    cout<<"you scored 1!\n\n";}
    else{
        cout<<"Answer is wrong.***you lose***\n";
    }}}
    break;

    case 3:
    cout<<"hint 1:it is one of the city in india \n";
    cin>> ch3;
    if(strcmp (ch3.c_str(),arr[2])==0){
              cout<<"yes it is ***delhi city***\n";
    cout<<"you scored 5!\n\n";}
    else{
        cout<<"Answer is wrong.Enter the correct city name\n";
    cout<<"hint 2:it is located at north india name\n";
    cin>> ch3;
         if( strcmp(ch3.c_str(), arr[2])==0){
              cout<<"yes it is ***delhi city***\n";
    cout<<"you scored 3!\n\n";}
       else{
        cout<<"Answer is wrong.Enter the correct team name\n";
    cout<<"Your score is 3!\n\n";
    cout<<"hint 3:it is capital city of india\n";
    cin>> ch3;
         if( strcmp(ch3.c_str(), arr[2])==0){
              cout<<"yes it is ***delhi city***\n";
    cout<<"you scored 1!\n\n";}
         else{
        cout<<"Answer is wrong.***you lose***\n";

    }}}
    break;
    default:
        cout<<"wrong choice entered\n";
        break;
    }}
    return 0;
    }
