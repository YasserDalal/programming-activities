
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author Yasser Dalal
 */
public class SeatReservation_Dalal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int rows = 7, columns = 5;
        int[][] seats = new int[rows][columns];
        
        int counter = 1;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                seats[i][j] = counter;
                counter++;
            }
        }
        
        String[][] originalSeats = new String[rows][columns];
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                originalSeats[i][j] = String.valueOf(seats[i][j]);
            }
        }
        
        boolean isEverySeatReserved = false;
        int reservedNumber = 0; 
        boolean isInvalid = false;
        boolean foundSeat = false;
        do {
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    System.out.print(originalSeats[i][j]+"\t");
                }
                System.out.println("");
            }
            
            System.out.print("Enter seat number to reserve: ");
            reservedNumber = scanner.nextInt();
            
            isInvalid = false;
            foundSeat = false;
            
            if(reservedNumber > seats[rows - 1][columns - 1] 
               || reservedNumber < seats[0][0]){
                isInvalid = true;
            }
            
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                    if(originalSeats[i][j].equals(String.valueOf(reservedNumber)) && !isInvalid){
                        originalSeats[i][j] = "X";
                        foundSeat = true;
                        break;
                    }
                }
                if(foundSeat){
                    break;
                }
            }
            if(!foundSeat && !isInvalid){
                System.out.println("Seat is taken");
            } else if(!isInvalid) {
                System.out.println("Seat successfully reserved");
            } else if(isInvalid) {
                System.out.println("Invalid number: " + reservedNumber);
            }
        
        } while(!isEverySeatReserved);
        
        scanner.close();
    }
    
}
