/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Yasser Dalal
 */
public class BankAccountDalal extends SavingsAccountDalal {
    private String accountName;
    private String address;
    private String birthday;
    private int contactNumber;
    
    public BankAccountDalal(){
        this.accountName = "";
        this.address = "";
        this.birthday = "";
        this.contactNumber = 0;
    }
    
    // getters
    public String getAccountName(){
        return this.accountName;
    }
    
    public String getAddress(){
        return this.address;
    }
    
    public String getBirthday(){
        return this.birthday;
    }
    
    public int getContactNumber(){
        return this.contactNumber;
    }
    
    // setters
    public void setAccountName(String name){
        this.accountName = name;
    }
    
    public void setAddress(String address){
        this.address = address;
    }
    
    public void setBirthday(String birthday){
        this.birthday = birthday;
    }
    
    public void setContactNumber(int number){
        this.contactNumber = number;
    }
}
