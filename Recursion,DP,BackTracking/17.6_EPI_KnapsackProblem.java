/*
Clock has wt and value known to thief
Knapsack cannot hold more than specified combined wt
Take clocks whose total value is max subject to knapsacks weight constrait
Greedily chooses clocks in decreasing order of value to weight ratio

TODO:
        Selects a subset of otems that has max value and  satisfies the weight constraint 
*/
import java.util.*;

class EPI{
    private static class Item {
        public Integer weight;
        public Integer value;
    
        public Item(Integer weight, Integer value) {
            this.weight = weight;
            this.value = value;
        }
    }

    public static int optimumSubjectToCapacity(List<Item> items, int capacity) {
        int [][] V = new int[items.size()][capacity+1];
        for(int[] v : V){
            Arrays.fill(v,-1);
        }
        return optimumSubjectToItemAndCapacity(items, items.size() -1, capacity, V);
    }

    private static int optimumSubjectToItemAndCapacity(List<Item> items, int k, int availableCapacity, int[][] V) {
        if (k < 0) return 0;
        if (V[k][availableCapacity] == -1){
            
        }
    }

}
