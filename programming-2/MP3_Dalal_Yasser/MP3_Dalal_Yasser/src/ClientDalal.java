/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
import java.util.Scanner;
import java.util.InputMismatchException;
/**
 *
 * @author Yasser Dalal
 */
public class ClientDalal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scanner = new Scanner(System.in);
        SavingsAccountDalal[] sa = new SavingsAccountDalal[100];
        BankAccountDalal ba = new BankAccountDalal();
        
        int choice = 0;
        int fourDigits = 0;
        String name, address, birthday;
        int contactNumber;
        double deposit;
        do {
            displayMainMenu();
            System.out.print("Enter your options: ");
            try {    
                if (!scanner.hasNextInt()) {
                    System.out.println("Invalid Input: Numbers only [1-7]");
                    scanner.nextLine();
                    continue;
                }
                
                choice = scanner.nextInt();
                scanner.nextLine();
                
                if(choice < 1 || choice > 7){
                    System.out.println("Invalid Option: "+choice+" is out of range!");
                } else if((choice == 2 || choice == 3 || choice == 4 || choice == 5) 
                && fourDigits == 0){
                    System.out.println("Create an account first");
                } else {
                    System.out.println("-----------------------------------------------");
                    switch(choice){
                        case 1: System.out.println("New Account \n");
                                System.out.print("Enter your Name: ");
                                name = scanner.nextLine();
                                ba.setAccountName(name);
                                System.out.print("Enter your Address: ");
                                address = scanner.nextLine();
                                ba.setAddress(address);
                                System.out.print("Enter your Birthday: ");
                                birthday = scanner.nextLine();
                                ba.setBirthday(birthday);
                                System.out.print("Enter your Contact Number: ");
                                contactNumber = scanner.nextInt();
                                ba.setContactNumber(contactNumber);
                                System.out.print("Enter your Initial Deposit (minimum of PHP 5,000): ");
                                deposit = scanner.nextDouble();
                                if(deposit <= 5000){
                                    fourDigits = (int)(Math.random() * 9000) + 1000;
                                    ba.setBalance(deposit);
                                    ba.setAccountNumber(fourDigits);

                                    System.out.println("\n Account Successfully Created \n");
                                    System.out.println("Name: " + ba.getAccountName());
                                    System.out.println("Address: " + ba.getAddress());
                                    System.out.println("Birthday: " + ba.getBirthday());
                                    System.out.println("Contact Number: " + ba.getContactNumber());
                                    System.out.println("Balance: "+ ba.getBalance());
                                    System.out.println("Account Number: "+ ba.getAccountNumber()); 
                                } else {
                                    System.out.println("Invalid: Please enter a deposit (minimum of Php 5000)");
                                }
                                break;

                        case 2: ba.balanceInquiry();
                                if(ba.validateAcctNumber(fourDigits)){
                                   System.out.println("");
                                   System.out.println("Name: " + ba.getAccountName());
                                   System.out.println("Current Balance: Php " + ba.getBalance());
                                }
                                break;

                        case 3: ba.deposit();
                                double depositValue = 0;
                                if(ba.validateAcctNumber(fourDigits)){
                                    System.out.print("Enter your Amount (minimum of Php 100): ");
                                    if(scanner.hasNextDouble()){
                                        depositValue = scanner.nextDouble();
                                        if(depositValue > 100){
                                            System.out.println("");
                                            System.out.println("Invalid: "+depositValue+", Please enter a value minimum of 100");
                                            continue;
                                        }
                                        ba.setBalance(ba.getBalance() + depositValue);
                                        ba.setInterestRate(ba.getBalance() * 0.05);
                                        ba.setBalance(ba.getBalance() + ba.getInterestRate());
                                        if(ba.getBalance() > 5000){
                                            ba.setBalance(5000);
                                            continue;
                                        }
                                    } else {
                                        System.out.println("");
                                        System.out.println("Invalid Input: Please enter only numbers");
                                    }
                                }
                                break;

                        case 4: ba.withdraw();
                                double withdrawAmount = 0;
                                System.out.print("Enter your Amount (minimum of Php 100): ");
                                if(ba.validateAcctNumber(fourDigits) && scanner.hasNextDouble()){
                                    withdrawAmount = scanner.nextDouble();
                                    if(withdrawAmount > 100){
                                        System.out.println("");
                                        System.out.println("Invalid: "+withdrawAmount+", must be minimum of 100");
                                        continue;
                                    }
                                    ba.setBalance(ba.getBalance() - withdrawAmount);
                                } else {
                                    System.out.println("");
                                    System.out.println("Invalid: Please try again!");
                                }
                                break;

                        case 5: System.out.println("Client Profile \n");
                                System.out.print("Enter your Account Number: ");
                                ba.setAccountNumber(scanner.nextInt());
                                System.out.println("");
                                if(ba.validateAcctNumber(fourDigits)){
                                    System.out.println("Name: " + ba.getAccountName());
                                    System.out.println("Address: " + ba.getAddress());
                                    System.out.println("Birthday: " + ba.getBirthday());
                                    System.out.println("Contact Number: " + ba.getContactNumber());
                                    System.out.println("Current Balance: Php " + ba.getBalance());
                                } else {
                                    System.out.println("Invalid: Account not Found!");
                                }
                                break;

                        case 6: ba.closeAccount();
                                String yesOrNo = "";
                                if(ba.validateAcctNumber(fourDigits)){
                                    System.out.print("Are you sure? Do you want to close your account? (y/n): ");
                                    yesOrNo = scanner.nextLine();
                                    if(yesOrNo.equals("y")){
                                        ba.setBalance(0);
                                        System.out.println("Name: " + ba.getAccountName());
                                        System.out.println("Current Balance: Php " + ba.getBalance());
                                    }
                                }
                                break; 
                    }
                }
            }catch(NumberFormatException e){
                System.out.println("Invalid Input: Please enter only Numbers");
            }catch(InputMismatchException e){
                System.out.println("Invalid Input: Please enter only Letters [a-z]");
                scanner.nextLine();
            }finally {
                System.out.println("");
                System.out.println("-----------------------------------------------");
                System.out.println("");
            }
            
        } while(choice != 7);
    }
    
    public static void displayMainMenu() {
        System.out.println("JBank Main Menu");
        System.out.println("[1] New Account");
        System.out.println("[2] Balance Inquiry");
        System.out.println("[3] Deposit");
        System.out.println("[4] Withdraw");
        System.out.println("[5] Client Profile");
        System.out.println("[6] Close Account");
        System.out.println("[7] Exit");
        System.out.println("");
    }
    
}
