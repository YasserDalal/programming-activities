/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Yasser Dalal
 */
public class PaySlip_Dalal {
    private String name;
    private int basicSalary;
    private int overtimeHours;
    private double overtimePay;
    private double grossIncome;
    private double netPay;
    private double tax;
    
    public double sss;
    public double pagIbig;
    public double philHealth;

    public PaySlip_Dalal(){
       
    }
    // getters
    public String getName(){
        return this.name;
    }
    
    public int getSalary(){
        return this.basicSalary;
    }
    
    public int getOvertimeHours(){
        return this.overtimeHours;
    }
    
    public double getOvertimePay(){
        return this.overtimePay;
    }
    
    public double getGrossIncome(){
        return this.grossIncome;
    }
    
    public double getNetPay(){
        return this.netPay;
    }
    
    public double getTax(){
        return this.tax;
    }
    
    // setters
    public void setName(String name){
        this.name = name;
    }
    
    public void setSalary(int salary){
        this.basicSalary = salary;
    }
    
    public void setOvertimeHours(int overtimeHours){
        this.overtimeHours = overtimeHours;
    }
    
    
    public void determineWithholdingTax(){
        this.overtimePay = this.overtimeHours * (this.basicSalary * 0.10);
        this.grossIncome = this.basicSalary + this.overtimePay;
        
        if(this.grossIncome <= 20000){
            this.tax = 0;
        } else if(this.grossIncome <= 31000){
            this.tax = (this.grossIncome - 20000) * 0.20;
        } else if(this.grossIncome <= 61000){
            this.tax = 2300 + (this.grossIncome - 31000) * 0.25;
        } else if(this.grossIncome <= 154000){
            this.tax = 10000 + (this.grossIncome - 61000) * 0.30;
        } else if(this.grossIncome <= 615000){
            this.tax = 38000 + (this.grossIncome - 154000) * 0.32;
        } else if(this.grossIncome >= 615000){
            this.tax = 185000 + (this.grossIncome - 615000) * 0.35;
        }
    }
    
    public void computeCompensation(){
        this.sss = basicSalary * 0.13;
        this.pagIbig = basicSalary * 0.02;
        this.philHealth = ((basicSalary * 0.035) < 2450) ? basicSalary * 0.035 : 2450;
        
        this.netPay = this.grossIncome - this.tax - this.sss - this.pagIbig - this.philHealth;
    }
    
}
