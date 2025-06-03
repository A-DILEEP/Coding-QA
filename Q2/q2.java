package Q2;

import java.util.Scanner;
import java.util.Vector;

public class q2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size of array:");
        int size=sc.nextInt();
        int []myarr=new int[size];
        for(int i=0;i<size;i++){
            int num=sc.nextInt();
            myarr[i]=num;
        }
        Vector<Integer> v1=new Vector<>();
        if(size>0){
            v1.addElement(myarr[0]);
            for(int i=1;i<size;i++){
                if(myarr[i]!=myarr[i-1]){
                    v1.addElement(myarr[i]);
                }
            }
        }

        System.out.println("The total remaining elements are : "+ v1.size());
        sc.close();
    }
}
