import java.util.*;

public class kmp {
    //a working example
    public static void main(String[] args) {
        final String haystack = "AAAAABAAABA";        //This is the full string
        final String needle = "AAAA";                //This is the substring that we want to find
        Scanner scn = new Scanner(System.in);
        KMPmatcher(haystack, needle);
    }

    // find the starting index in string haystack[] that matches the search word P[]
    public static void KMPmatcher(final String T, final String P) {
        int m = P.length(), n = T.length();
        int[] lps = new int[m];
        
        for(int i = 1; i < m; ++i){
            int j = lps[i-1];
            while(j > 0 && P.charAt(i) != P.charAt(j)) j = lps[j-1];
            if(P.charAt(i) == P.charAt(j)) j++;
            lps[i] = j;
        }
        
        int i = 0, j = 0;
        while(i < n){
            if(P.charAt(j) == T.charAt(i)){
                i++;
                j++;
            }
            if( j == m){
                System.out.println("Found pattern at index " + (i-j));
                j = lps[j-1];
            }
            else if(i < n && P.charAt(j) != T.charAt(i)){
                if(j != 0)
                    j = lps[j-1];
                else
                    i = i+1;
            }
        }
    }

}