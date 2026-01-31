/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
/**
 *
 * @author Yasser Dalal
 */
public class Employee_Dalal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        PaySlip_Dalal employee = new PaySlip_Dalal();
        
        
        LocalDate date = LocalDate.now();
        DateTimeFormatter dateFormat = DateTimeFormatter.ofPattern("MMMM dd, yyyy");
        employee.setName("Yasser Mirza Ahmed Hasan L. Dalal");
        employee.setSalary(30000);
        employee.setOvertimeHours(5);
        
        employee.determineWithholdingTax();
        employee.computeCompensation();
        
        System.out.println("            Date: " + date.format(dateFormat));
        System.out.println("   Employee Name: " + employee.getName());
        System.out.println("    Basic Salary: " + employee.getSalary());
        System.out.println(" No. of OT Hours: " + employee.getOvertimeHours());
        System.out.println("          OT Pay: " + employee.getOvertimePay());
        System.out.println("    Gross Income: " + employee.getGrossIncome());
        System.out.println(" Withholding Tax: " + employee.getTax());
        System.out.println("Other Deductions: ");
        System.out.println("         SSS: " + employee.sss);
        System.out.println("    Pag-ibig: " + employee.pagIbig);
        System.out.println("  PhilHealth: " + employee.philHealth);
        System.out.println("         Net Pay: " + employee.getNetPay());
        
        
    }
    
}
