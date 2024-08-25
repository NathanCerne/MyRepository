import java.lang.*;

/*
*	Program written by Nathan Cerne
*
*	Java program that takes a predefined array and fills two arrays with the respective odd and even ints of the ints of the initial array
*	These odd and even arrays are defined using threads
*	Afterwards the program will fill a final array with all the odd ints preceding the even ints
*/

public class examThread extends thread
{
	static int[] arr = {7, 9, 26, 18, 17, 25, 14, 9, 31, 45, 20, 39, 88, 4, 81, 89, 44, 61, 12, 5, 16, 17, 55, 42, 14, 102, 13, 17, 4, 1};
	static int[] oddArr = {-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};//store odds
	static int[] evenArr = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};//store evens
	static int[] finalArr = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	static int oddSpot = 0;
	static int evenSpot = 0;
	boolean oddCheck;//determines if looking for odd ints
	
	public examThread(boolean oddCheck)
    {
        this.oddCheck = oddCheck;
    }
	
	@Override
    public void run()
    {
		
        if(odd){//find the 17 odd ints here
			for(int o = 0; o<30; o++){
				if(arr[o]%2 == 1){
					oddArr[oddSpot] = arr[o];
					oddSpot++;
				}
			}
		}else{//find the 13 even ints here
			for(int e = 0; e<30; e++){
				if(arr[e]%2 == 0){
					evenArr[evenArr] = arr[e];
					evenSpot++;
				}
		}
		System.out.println("thread done");
    }
	
	public static void main(String[] args) throws InterruptedException
    {
        System.out.println("program starts");
        Thread oddTh = new examThread(true);
        oddTh.start();
        oddTh.join();
        Thread evenTh = new examThread(false);
        evenTh.start();
        evenTh.join();
		
		//this loop will fill out the final array
		for(int i = 0; i<30; i++){
			if(i<17){
				finalArr[i] = oddArr[i];
			}else{
				finalArr[i] = evenArr[(i-17)];
			}
        }
		//this loop will print the final array
		for(int j = 0; j<30; j++){
			system.out.print(finalArr[j] + ", ");
		}
		System.out.println("program done");
		
    }
}