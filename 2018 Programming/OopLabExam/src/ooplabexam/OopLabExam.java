/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ooplabexam;
import java.util.Scanner;
/**
 *
 * @author Trisha
 */
public class OopLabExam {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        int a,b,c,d,e,f,i,j;
        double aa,bb,cc,dd;
        Scanner sc = new Scanner(System.in);
//        System.out.println("Type your age");
//        int a = sc.nextInt();
//        
//        System.out.println("Your age is "+a);
        
///////////////////////ARRAY////////////////////
        a = sc.nextInt();
        //int arr[] = new int[a]; //size of array decalared    
        int arr[] = {1,2,3,4,5}; //size of array decalared

//        for(i=0; i<a; i++){
//            arr[i] = sc.nextInt();  //input in the array
//        }
        
        for(i=0; i<a; i++){
            b = arr[i];
            System.out.println("result "+i+" no "+arr[i]);
        }
         
    }
    
}
