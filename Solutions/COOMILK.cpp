    #include <iostream>
    using namespace std;

    int main(){
      ios_base::sync_with_stdio(false);
      int t;
      cin>>t;
      while (t--) {
        int n;
        cin>>n;
        string prev="",curr;
        int badboy=0;
        while(n--){
          cin>>curr;
          if(curr=="cookie" && n==0) badboy=1; //For the case when there is only one entry and it is cookie
          if(prev=="") {prev=curr;continue;} //For the first input. We set prev to curr and skip rest of the loop (otherwise badboy will always be 1 if input is cookie)
          else if(prev=="cookie" && curr=="cookie" && badboy==0) badboy=1; //If two cookies are together, raise the flag!
          else prev=curr; //If everything seems normal, then set prev to curr
        }
        if(badboy) std::cout << "NO" << '\n';
        else std::cout << "YES" << '\n';

      }
    }
