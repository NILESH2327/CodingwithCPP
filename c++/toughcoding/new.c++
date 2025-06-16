#include <iostream>
#include<vector>

int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int>v(4);
        for(int i=0;i<4;i++){
            cin>>v[i];
        }
        int x=v[0]+v[1];
        int y=v[2]-v[1];
        int z=v[3]-v[2];
        if(x==y && y==z&&x==z){
            cout<<3<<endl;
        }
        else if(x==y || y==z||z==x){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }

    return 0;
}