package LinkedList;

public class SearchAnElement {
  class LinkedList{
    static class Node{
      int data;
      Node next;

      Node(int val){
        data = val;
        next = null;
      }
    }

    static boolean search(Node head, int key){
      Node temp = head;
      while(temp != null){
        if(temp.data == key)
          return true;
        temp =temp.next;
      }
      return false;
    }
  }
}
