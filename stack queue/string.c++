int n=s.size();
        int a=0;
        int e=n-1;
        while(a<=e){
            if((s[a]=='a'||s[a]=='e'||s[a]=='i'||s[a]=='o'||s[a]=='u')&&
            (s[e]=='a'||s[e]=='e'||s[e]=='i'||s[e]=='o'||s[e]=='u')){
                swap(s[a],s[e]);
                a++;
                e--;
            }
            else if((s[a]=='a'||s[a]=='e'||s[a]=='i'||s[a]=='o'||s[a]=='u')&&
            (!(s[e]=='a'||s[e]=='e'||s[e]=='i'||s[e]=='o'||s[e]=='u'))){
               e--;
            }
             else if((!(s[a]=='a'||s[a]=='e'||s[a]=='i'||s[a]=='o'||s[a]=='u'))&&
            (s[e]=='a'||s[e]=='e'||s[e]=='i'||s[e]=='o'||s[e]=='u')){
               s++;
            }
            else{
                s++;
                e--;
            }
        }
        return s;
    }