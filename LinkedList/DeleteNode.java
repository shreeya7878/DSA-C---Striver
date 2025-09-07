package LinkedList;

public class DeleteNode {
  class LinkedList{
    static class Node{
      int data;
      Node next;

      Node(int val){
        data = val;
        next = null;
      }
    }

    static Node deleteNode(Node head, int key){
      if(head == null) return null;

      if(head.data == key) return head.next;

      Node curr = head;
      while(curr.next != null && curr.next.data != key)
          curr = curr.next;

      if (curr.next != null)
          curr.next = curr.next.next;

      return head;
    }
  }
}
