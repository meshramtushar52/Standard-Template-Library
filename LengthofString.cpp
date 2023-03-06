#include<iostream>
#include<vector>

using namespace std;

int LengthofString(char ch[]){

    int count = 0;

    for ( int i = 0 ; ch[i] != '\0' ; i++ ){

        count++;
    }

    return count;
}

int main(){

    char ch[10];
    cin>>ch;

    cout << " Lenth of String : " << LengthofString(ch);

}
