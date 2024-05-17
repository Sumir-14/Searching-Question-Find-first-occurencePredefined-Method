#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


int main() {
  vector <int> v={1,2,3,4,4,4,4,8,9,10};
  int target = 4;

  auto ans=lower_bound(v.begin(),v.end(),target);
  cout<<"The first occurence of "<<target<<" is at "<<ans-v.begin()<<"th index."<<endl;

  return 0;
}