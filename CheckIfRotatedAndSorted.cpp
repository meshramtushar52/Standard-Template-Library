#include<bits/stdc++.h>
using namespace std;


bool sortedandrotated(vector<int> nums){

    int count = 0;
        int n = nums.size();

        for ( int i = 0 ; i < n ; i++ ){

            if ( nums[i] > nums[i+1] ){
                count++;
            }
        }

        if( nums[n-1] > nums[0] ){
            count++;
        }

        if (count<=1) {
            return true;
        }
        else {
            return false;
        }
}

int main(){

    vector<int> v;

    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);

    cout << sortedandrotated(v);



    return 0;
}
