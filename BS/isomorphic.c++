#include<iostream>
#include<string>
#include<vector>

using namespace std;
// isomorphic string it means mapping alwaus same pair like
//natna - oeqoe there n always match with o and a always with e so on.. otherwise not isomorphic
bool isisomorphic(string s1, string s2){
  vector<int>v1(128,-1);
  vector<int>v2(128,-1);
  if(s1.size()!=s2.size()){
    return false;

  }
  for(int i=0;i<s1.size();i++){
    if(v1[s1[i]]!=v2[s2[i]]){// checking value of both character is match in both vector
      return false;
    }
    else{
      v1[s1[i]]=v2[s2[i]]=i;//storing charcter in vector arr
    }
  }
  return true;

}

int main(){
  string s1;
  cin>>s1;
  string s2;
  cin>>s2;

  if(isisomorphic(s1,s2)){
    cout<<"yes both are isomorphic"<<endl;

  }
  else{
    cout<<"no both are not isomorphic";
  }



  return 0;

}