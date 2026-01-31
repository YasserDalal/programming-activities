/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import java.util.Scanner;
/**
 *
 * @author Yasser Dalal
 */
public class SavingsAccountDalal {
    private int accountNo = 0;
    private double balance;
    private double interestRate;
    
    public SavingsAccountDalal(){
        this.accountNo = 0;
        this.balance = 0;
        this.interestRate = 0;
    }
    
    // getters
    public int getAccountNumber(){
        return this.accountNo;
    }
    
    public double getBalance(){
        return this.balance;
    }
    
    public double getInterestRate(){
        return this.interestRate;
    }
    
    // setters
    public void setAccountNumber(int number){
        this.accountNo = number;
    }
    
    public void setBalance(double number){
        this.balance = number;
    }
    
    public void setInterestRate(double number){
        this.interestRate = number;
    }
    
    
    public void balanceInquiry(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Balance Inquiry \n");
        System.out.print("Enter your Account Number: ");
        if(!scanner.hasNextInt()){
            System.out.println("Invalid Input: Please enter only numbers");
            this.accountNo = 0;
        }else {
            this.accountNo = scanner.nextInt();
        }
    }
    
    public void deposit(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Deposit \n");
        System.out.print("Enter your Account Number: ");
        this.accountNo = scanner.nextInt();
    }
    
    public void withdraw(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Withdraw \n");
        System.out.print("Enter your Account Number: ");
        this.accountNo = scanner.nextInt();
    }
    
    public boolean validateAcctNumber(int fourDigits){
        if(this.accountNo == fourDigits){
            return true;
        } else {
            return false;
        }
    }
    
    public void closeAccount(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Close Account \n");
        System.out.print("Enter your Account Number: ");
        this.accountNo = scanner.nextInt();
    }
}
