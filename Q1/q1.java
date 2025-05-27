import java.util.Scanner;

public class q1{
    public static void main(String[] args) {
        int[]nums={2,7,11,15};
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the target value : ");
        int targetValue=sc.nextInt();
        
        int lengthOfArray=nums.length;

        for(int i=0;i<lengthOfArray;i++){
            for(int j=1;j<lengthOfArray;j++){
                if(nums[i]+nums[j]==targetValue){
                    System.out.println(nums[i]+" + "+nums[j]+" = "+ targetValue);
                    System.out.println("Index of nums array combining "+ i +" + "+j+" meets the target value");
                }
            }
        }
        sc.close();
    }
}