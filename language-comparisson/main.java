public class main {
    // Function to print elements of an array
    static void printArray(int[] myArray) {
        for (int element : myArray) {
            System.out.println(element);
        }
    }

    public static void main(String[] args) {
        int[] myArray = {1, 2, 3, 4, 5};
        printArray(myArray);
    }
}
