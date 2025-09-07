package Queue;
import java.util.*;
public class DequeExample {
  public static void main(String[] args) {
    Deque<Integer> dq = new ArrayDeque<>();

    int[] A = {1, 3, 2, 5, 4};
    int k = 3;

    for(int i=0; i<k; i++)
    {
      while(!dq.isEmpty() && A[i]>=A[dq.peekLast()])
      {
        dq.removeLast();
      }
      dq.addLast(i);
    }
    System.out.println(dq);
  }
  
}
