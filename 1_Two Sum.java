import java.util.StringTokenizer;
class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
        HashMap<Integer, String> map = new HashMap<>();
        int[] ans = new int[2];
        for(int i = 0; i<nums.length; i++)
        {
            int ele = target - nums[i];
            if(map.containsKey(ele))
            {
                StringTokenizer ind = new StringTokenizer(map.get(ele));
                int index = Integer.parseInt(ind.nextToken());
                ans[0] = index;
                ans[1] = i;
                break;
            }
            if(map.containsKey(nums[i]))
            {
                map.put(nums[i], map.get(nums[i]) + " " + i);
            }
            else 
            {
                map.put(nums[i], "" + i);
            }
        }
        return ans;
    }
}



//2nd method
// class Solution {
//     public int[] twoSum(int[] nums, int target) 
//     {
//         int n = nums.length;
//         int ans[] = new int[2];
//         HashMap<Integer, String> map = new HashMap<>();
//         for(int i = 0; i<n; i++)
//         {
//             if(map.containsKey(nums[i]))
//                 map.put(nums[i], map.get(nums[i]) + i);
//             else 
//                 map.put(nums[i], ""+i);
//         }
//         for(int i = 0; i<n; i++)
//         {
//             int a = target-nums[i];         //To get the value of another variable which needs to be searched
//             if(map.containsKey(a))
//             {
//                 if(nums[i] == a)                //To check if the no. same or not then check if frequency of that no. is twice or not
//                 {
//                     if(map.get(a).length()>1)
//                     {
//                         ans[0] = Integer.parseInt(map.get(a).charAt(0) + "");
//                         ans[1] = Integer.parseInt(map.get(a).charAt(1) + "");
//                         break;
//                     }                    
//                 }
//                 else 
//                 {
//                     ans[0] = i;
//                     ans[1] = Integer.parseInt(map.get(a) + "");
//                     break;
//                 }                
//             }
//         }
//         return ans;
//     }
// }