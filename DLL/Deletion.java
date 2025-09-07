

public class Deletion {
  class Node {
    int data;
    Node next;
    Node prev;
    Node head;

    public Node(int data) {
      this.data = data;
      this.next = null;
      this.prev = null;
    }

    public void deleteNode(int data){
      if(head == null) return;

      // Case 1: delete the head node
      if(head.data == data) {
        head = head.next;
        if(head != null) head.prev = null;
        return;
      }

      Node temp = head;
      while(temp != null && temp.data != data) {
        temp = temp.next;
      }

      if(temp == null) return;

      // Case 2: Deleting last node
      if(temp.next == null) {
        temp.prev.next = null;
        return;
      }

      // Case 3: Deleting a middle Node
      temp.prev.next = temp.next;
      temp.next.prev = temp.prev;


    }

    //Reverse the DLL
    public void reverse() {
      Node current = head;
      Node temp = null;

      while(current != null){
        temp = current.prev;
        current.prev = current.next;
        current.next = temp;
        current = current.prev;
      }

      if(temp != null){
        head = temp.prev; //update head to last node
      }
    }

    //print the DLL
    public void printList(){
      Node temp = head;
      while(temp != null) {
        System.out.print(temp.data + " <-> ");
        temp = temp.next;
      }
      System.out.println("NULL");
    }
  }
}
