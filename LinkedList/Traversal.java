package LinkedList;

public class Traversal {
  class LinkedList {
    static class Node {
      int data;
      Node next;

      Node(int val){
        data = val;
        next = null;
      }
    }

    static int getLength(Node head){
      int count = 0;
      Node temp = head;
      while(temp != null){
        count++;
        temp = temp.next;
      }
      return count;
    }
  }
}
