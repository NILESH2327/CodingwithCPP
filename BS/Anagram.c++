#include<iostream>
#include<string>
#include<vector>

using namespace std;
// anagram means which type of words makes with using samewords; and his length is same 
//print yes or no ex- bat -cat is not anagram but cat and tac is anagram.

bool isanagram(string str,string strs){
  vector<int>freq(26,0);
  if(str.length()!=strs.length()){
    return false;

  }
  for(int i=0;i<str.length();i++){
    
    freq[str[i]-'a']++;
    freq[strs[i]-'a']--;


  }
  for(int i=0;i<26;i++){
    if(freq[i]!=0){
      return false;
    }
  }
  return true;

}


int main(){
  string str;
  cin>>str;

  string strs;
  cin>>strs;

  if(isanagram(str,strs)){
    cout<<"yes it is anagram"<<endl;

  }
  else{
    cout<<"no it is not anagram"<<endl;
  }


  return 0;

}