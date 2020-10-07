class Solution {
public:

    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
    }
};


/*
[[1,3],[2,6],[8,10],[15,18]]

        0.  1.  2.   3.  4.  5.  6.  7.  8   9   10   11  12.  13.  14   15.   16.   17.    18
        _______________________________________________________________________________________
        
            ||||||||||
            ^   ||||||||||||||||||
                                 ^       |||||||||                        |||||||||||||||||||||
    
    
    CASE 1 : Two intervals partially overlap
    
    CASE 2 : Completely overlap
    
    CASE 3 :  
*/