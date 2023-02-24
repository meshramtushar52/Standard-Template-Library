#include<iostream>
#include<set>

using namespace std;

int main(){

set<int> s;

s.insert(0);
s.insert(0);
s.insert(3);
s.insert(5);
s.insert(6);
s.insert(0);
s.insert(6);
s.insert(3);
s.insert(6);


for( auto i : s ){
    cout << i << endl ;
}cout << endl;

set<int> :: iterator it = s.begin();
it++;

// s.erase(it);



// for( auto i : s ){
//     cout << i << endl ;
// }

set<int>::iterator itr = s.find(3);

for(auto i = itr ; i!=s.end() ; i++) {

    cout << *i <<endl;
}


cout<<"3 is present or not : "<< s.count(3) <<endl;
cout<<"2 is present or not : "<< s.count(2) <<endl;
cout<<"0 is present or not : "<< s.count(0) <<endl;

}
