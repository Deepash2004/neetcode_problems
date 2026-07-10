class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        unordered_map<char , int >map ; 
         bool valid = true  ;
        
        if (s.length()!=t.length()){
            return false ; 
        }

        for (char x : s ){
            map[x]++; 
        }
        for (char x : t){
            map[x]--;
        }
        
        for ( auto i : map ){
            if (i.second!=0){
                valid = false  ; 
            }
           
        }
        return valid; 
        

          

                

           


        
   
   

        


        
    }
};
