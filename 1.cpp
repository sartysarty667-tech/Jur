#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v={2 , 4 ,5 ,6};

    for(int i =0; i  <v.size(); i++){
        if(v[i] % 2 == 0) cout << v[i] << " ";
    }
    

    return 0;
}