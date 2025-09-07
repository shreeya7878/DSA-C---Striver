import java.util.ArrayList;

public class LinearSearch {

    // Modified linearSearch to return all indices of the target
    public static ArrayList<Integer> linearSearch(int[] arr, int target) {
        ArrayList<Integer> indices = new ArrayList<>();
        
        // Traverse through the array
        for (int i = 0; i < arr.length; i++) {
            // If the target is found, add the index to the list
            if (arr[i] == target) {
                indices.add(i);
            }
        }
        
        // Return the list of indices (empty if not found)
        return indices;
    }

    public static void main(String[] args) {
        // Example array where the target 5 appears twice
        int[] arr = {5, 3, 5, 7, 2, 8, 10};
        int target = 5;

        // Call the modified linearSearch method
        ArrayList<Integer> result = linearSearch(arr, target);

        // Output the result
        if (!result.isEmpty()) {
            System.out.println("Element found at indices: " + result);
        } else {
            System.out.println("Element not found");
        }
    }
}
