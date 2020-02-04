#include "solution.h"
#include <vector>
using namespace std;

void Solution::removeduplicate(vector<int>& v) { 
  
  map<int,int> m;
  int count=1;
  pair<int,int> p;
  for(auto it=v.begin();it!=v.end();it++)
  {
    p.first=*it;
    p.second=count;
    m.insert(p);
  }
  v.clear();
  for(auto it=m.begin();it!=m.end();it++)
  {
    v.push_back((*it).first);
  } 
}

