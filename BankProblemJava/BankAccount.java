import java.util.*;
public class BankAccount {
    private int balance;
    Scanner sc=new Scanner(System.in);
    
    public void setters(int balance){
        this.balance=balance;
    }
    public void getBalance(){
        System.out.println(balance);
    }
    public int deposit(int balance){
        System.out.print("Enter the amount to deposit : ");
        int amount=sc.nextInt();

        if(amount<=0){
            System.out.println("No negative amount can be deposuted ");
        }
        else{
            balance+=amount;
            return balance;
        }
        return 0;
    }
    public int Withdraw(int balance){
        System.out.print("Enter the amount to withdraw : ");
        int amount=sc.nextInt();

        if(amount>balance){
            System.out.print("INsiffi balance");
        }else{
            balance-=amount;
            return balance;
        }
        return 0;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.print("Entetr the balance :");
        int bal=sc.nextInt();

        BankAccount b=new BankAccount();
        b.setters(bal);

        boolean process=true;
        while (process) {
            System.out.println(" 1. Check Balance ");
            System.out.println(" 2. Check Deposit ");
            System.out.println(" 3. Withdraw ");
            System.out.println(" 4. Exit ");
            System.out.print("Enter your above choices : ");
    
            int choice=sc.nextInt();
    
            switch (choice) {
                case 1:
                System.out.println("-----------------------------------");
                b.getBalance();
                System.out.println("-----------------------------------");
                break;
                case 2:int value=b.deposit(bal);
                bal=value;
                System.out.println("-----------------------------------");
                System.out.println("Your current balance is : "+value);
                System.out.println("-----------------------------------");

                break;
                case 3:int val=b.Withdraw(bal);
                bal=val;
                System.out.println("-----------------------------------");
                System.out.println("Your current balance is : "+val);
                System.out.println("-----------------------------------");
                break;
                case 4:process=false;
                System.out.println("-------------------------------");
                System.out.println("Thank you for using !");
                System.out.println("-------------------------------");

                break;
                default:System.out.println("ec");
                break;
            }
        }
        sc.close();
    }
}